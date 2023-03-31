#include "rsa.h"
#include <openssl/pem.h>
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/err.h>
#include <vector>
#include "applink.c"
#include <sstream>

RSAWrapper::RSAWrapper() : rsa_private_key(nullptr), rsa_public_key(nullptr) 
{
}

RSAWrapper::~RSAWrapper() {
    if (rsa_private_key) {
        RSA_free(rsa_private_key);
    }
    if (rsa_public_key) {
        RSA_free(rsa_public_key);
    }
}


bool RSAWrapper::encrypt(std::vector<unsigned char>& input_data, const std::string& output_file) {
    // Read the public key from the file
    std::string public_key_file_path = "public_key.pem";
    FILE* public_key_file = fopen(public_key_file_path.c_str(), "r");
    if (!public_key_file) {
        std::cerr << "Error opening public key file." << std::endl;
        return false;
    }

    EVP_PKEY* public_key = PEM_read_PUBKEY(public_key_file, nullptr, nullptr, nullptr);
    fclose(public_key_file);
    if (!public_key) {
        std::cerr << "Error reading public key." << std::endl;
        return false;
    }

    RSA* rsa_key = EVP_PKEY_get1_RSA(public_key);
    EVP_PKEY_free(public_key);

    // Encrypt the data
    int rsa_size = RSA_size(rsa_key);
    std::vector<unsigned char> encrypted_data(rsa_size);
    int encrypted_length = RSA_public_encrypt(input_data.size(), input_data.data(), encrypted_data.data(), rsa_key, RSA_PKCS1_PADDING);
    if (encrypted_length == -1) {
        std::cerr << "Error encrypting data." << std::endl;
        RSA_free(rsa_key);
        return false;
    }

    // Write the encrypted data to the output file
    // ... (Write the encrypted_data vector to the output_file)
    std::ofstream output_stream(output_file, std::ios::binary);
    output_stream.write(reinterpret_cast<const char*>(encrypted_data.data()), encrypted_length); // Use decrypted_data and decrypted_length for decryption
    output_stream.close();

    RSA_free(rsa_key);
    return true;
}

std::vector<unsigned char> RSAWrapper::decrypt(std::vector<unsigned char>& encrypted_data, const std::string& output_file)
{
    if (!rsa_private_key) {
        std::cerr << "Invalid private key." << std::endl;
        //return false;
        
    }

    // Decrypt the data
    int rsa_size = RSA_size(rsa_private_key);
    std::vector<unsigned char> decrypted_data(rsa_size);
    int decrypted_length = RSA_private_decrypt(encrypted_data.size(), encrypted_data.data(), decrypted_data.data(), rsa_private_key, RSA_PKCS1_PADDING);
    if (decrypted_length == -1) {
        std::cerr << "Error decrypting data." << std::endl;
        //return false;
        
    }

    // Write the decrypted data to the output file
    std::ofstream output_stream(output_file, std::ios::binary);
    output_stream.write(reinterpret_cast<const char*>(decrypted_data.data()), decrypted_length);
    output_stream.close();

    return decrypted_data;
}

bool RSAWrapper::generate_key_pair(int& keySize, const std::string& private_key_file, const std::string& public_key_file, const std::string& password) {
    RSA* rsa_key_pair_temp = RSA_generate_key(keySize, RSA_F4, NULL, NULL);
    if (!rsa_key_pair_temp) {
        return false;
    }
    rsa_public_key = RSAPublicKey_dup(rsa_key_pair_temp);
    if (!rsa_public_key) {
        RSA_free(rsa_key_pair_temp);
        return false;
    }
    rsa_private_key = RSAPrivateKey_dup(rsa_key_pair_temp);
    if (!rsa_private_key) {
        RSA_free(rsa_key_pair_temp);
        RSA_free(rsa_public_key);
        return false;
    }
    if (!save_private_key(private_key_file, password) || !save_public_key(public_key_file)) {
        RSA_free(rsa_key_pair_temp);
        RSA_free(rsa_public_key);
        RSA_free(rsa_private_key);
        return false;
    }
    RSA_free(rsa_key_pair_temp);
    return true;
}

bool RSAWrapper::save_public_key(const std::string& public_key_file) {
    FILE* public_key_file_ptr = fopen(public_key_file.c_str(), "wb");
    if (!public_key_file_ptr) {
        return false;
    }

    if (!PEM_write_RSAPublicKey(public_key_file_ptr, rsa_public_key)) {
        fclose(public_key_file_ptr);
        return false;
    }

    fclose(public_key_file_ptr);
    return true;
}
bool RSAWrapper::save_private_key(const std::string& private_key_file, const std::string& password) {
    FILE* private_key_file_ptr = fopen(private_key_file.c_str(), "wb");
    if (!private_key_file_ptr) {
        return false;
    }

    const EVP_CIPHER* cipher = EVP_aes_256_cbc();
    unsigned char* password_cstr = reinterpret_cast<unsigned char*>(const_cast<char*>(password.c_str()));

    if (!PEM_write_RSAPrivateKey(private_key_file_ptr, rsa_private_key, cipher, NULL, 0, NULL, password_cstr)) {
        fclose(private_key_file_ptr);
        return false;
    }

    fclose(private_key_file_ptr);
    return true;
}

bool RSAWrapper::load_encrypted_private_key(const std::string& private_key_file, const std::string& password) {
    FILE* private_key_file_ptr = fopen(private_key_file.c_str(), "rb");
    if (!private_key_file_ptr) {
        return false;
    }

    unsigned char* password_cstr = reinterpret_cast<unsigned char*>(const_cast<char*>(password.c_str()));

    rsa_private_key = PEM_read_RSAPrivateKey(private_key_file_ptr, NULL, NULL, password_cstr);

    fclose(private_key_file_ptr);

    if (!rsa_private_key) {
        return false;
    }
    return true;
}

std::vector<unsigned char> RSAWrapper::load_data_from_file(const std::string& input_file) 
{
    std::ifstream input_stream(input_file, std::ios::binary);
    std::vector<unsigned char> input_data((std::istreambuf_iterator<char>(input_stream)), std::istreambuf_iterator<char>());
    input_stream.close();
    return input_data;
}


std::vector<unsigned char> RSAWrapper::hex_to_bytes(const std::string& hex) {
    std::vector<unsigned char> bytes;

    for (unsigned int i = 0; i < hex.length(); i += 2) {
        std::string byte_string = hex.substr(i, 2);
        unsigned char byte = static_cast<unsigned char>(std::stoi(byte_string, nullptr, 16));
        bytes.push_back(byte);
    }

    return bytes;
}