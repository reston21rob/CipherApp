#include "AES.h"
#include <openssl/rand.h>
#include <fstream>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

bool AESWrapper::setKeyLength(int keyLen)
{
    switch (keyLen) {
    case 128:
        cipher_type = EVP_aes_128_cbc();
        return true;
    case 192:
        cipher_type = EVP_aes_192_cbc();
        return true;
    case 256:
        cipher_type = EVP_aes_256_cbc();
        return true;
    default:
        return false;
    }
}

std::vector<unsigned char> AESWrapper::generate_key(size_t key_length) {
    std::vector<unsigned char> key(key_length / 8);
    RAND_bytes(key.data(), key.size());
    return key;
}

bool AESWrapper::encrypt(const std::vector<unsigned char>& input, const std::string& output_file, const std::vector<unsigned char>& key)
{
    std::vector<unsigned char> iv = generate_iv(EVP_CIPHER_iv_length(cipher_type));
    return aes_operation(input, output_file, key, iv, true);
}

bool AESWrapper::decrypt(const std::vector<unsigned char>& input_data, const std::string& output_file, const std::vector<unsigned char>& key, bool saveToFile) 
{
    if (input_data.empty()) {
        std::cerr << "Input data is empty" << std::endl;
        return false;
    }
    std::vector<unsigned char> iv(EVP_CIPHER_iv_length(cipher_type));
    std::copy(input_data.begin(), input_data.begin() + iv.size(), iv.begin());
    std::vector<unsigned char> input(input_data.begin() + iv.size(), input_data.end());
    return aes_operation(input, output_file, key, iv, false, saveToFile);
}

#include <openssl/err.h>

bool AESWrapper::aes_operation(const std::vector<unsigned char>& input, const std::string& output_file, const std::vector<unsigned char>& key,
                                const std::vector<unsigned char>& iv, bool encrypt, bool saveToFile)
{
    EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
    if (!ctx) {
        std::cerr << "Error creating EVP_CIPHER_CTX" << std::endl;
        return false;
    }
    if (encrypt) {
        if (EVP_EncryptInit_ex(ctx, cipher_type, nullptr, key.data(), iv.data()) != 1) {
            std::cerr << "Error initializing encryption" << std::endl;
            EVP_CIPHER_CTX_free(ctx);
            return false;
        }
    }
    else {
        if (EVP_DecryptInit_ex(ctx, cipher_type, nullptr, key.data(), iv.data()) != 1) {
            std::cerr << "Error initializing decryption" << std::endl;
            EVP_CIPHER_CTX_free(ctx);
            return false;
        }
    }
    std::vector<unsigned char> output(input.size() + EVP_CIPHER_CTX_block_size(ctx));
    int out_len = 0;
    if (encrypt) {
        if (EVP_EncryptUpdate(ctx, output.data(), &out_len, input.data(), input.size()) != 1) {
            std::cerr << "Error during encryption" << std::endl;
            EVP_CIPHER_CTX_free(ctx);
            return false;
        }
    }
    else {
        if (EVP_DecryptUpdate(ctx, output.data(), &out_len, input.data(), input.size()) != 1) {
            std::cerr << "Error during decryption" << std::endl;
            EVP_CIPHER_CTX_free(ctx);
            return false;
        }
    }
    int final_len = 0;
    if (encrypt) {
        if (EVP_EncryptFinal_ex(ctx, output.data() + out_len, &final_len) != 1) {
            std::cerr << "Error finalizing encryption" << std::endl;
            EVP_CIPHER_CTX_free(ctx);
            return false;
        }
    }
    else {
        if (EVP_DecryptFinal_ex(ctx, output.data() + out_len, &final_len) != 1) {
            std::cerr << "Error finalizing decryption" << std::endl;
            EVP_CIPHER_CTX_free(ctx);
            return false;
        }
    }
    output.resize(out_len + final_len);
    EVP_CIPHER_CTX_free(ctx);
    if (saveToFile && !output_file.empty()) {
        std::ofstream out(output_file, std::ios::binary);
        if (!out) {
            std::cerr << "Error opening output file" << std::endl;
            return false;
        }
        if (encrypt) {
            out.write(reinterpret_cast<const char*>(iv.data()), iv.size()); // Zapisz IV przed zaszyfrowanymi danymi
        }
        out.write(reinterpret_cast<const char*>(output.data()), output.size());
        out.close();
    }
    outputData.clear();
    outputData.insert(outputData.end(), output.begin(), output.end());
    return true;
}

std::vector<unsigned char> AESWrapper::generate_iv(size_t size) {
    std::vector<unsigned char> iv(size);
    RAND_bytes(iv.data(), size);
    return iv;
}