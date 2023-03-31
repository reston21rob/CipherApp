#pragma once

#include <openssl/evp.h>
#include <string>
#include <vector>

class AESWrapper {
public:
    bool encrypt(const std::vector<unsigned char>& input, const std::string& output_file, const std::vector<unsigned char>& key);
    bool decrypt(const std::vector<unsigned char>& input_data, const std::string& output_file, const std::vector<unsigned char>& key, bool saveToFile);
    std::vector<unsigned char> generate_iv(size_t size);
    bool setKeyLength(int keyLen);
    std::vector<unsigned char> generate_key(size_t key_length);
    std::vector<unsigned char> get_output_data()
    { return outputData; }

private:
    bool aes_operation(const std::vector<unsigned char>& input, const std::string& output_file, const std::vector<unsigned char>& key,
                        const std::vector<unsigned char>& iv, bool encrypt, bool saveToFile = true);
    const EVP_CIPHER* cipher_type = nullptr;
    std::vector<unsigned char> outputData;
};
