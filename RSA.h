#pragma once
#ifndef RSA_H
#define RSA_H

#include <string>
#include <openssl/rsa.h>
#include <vector>
class RSAWrapper {
public:
    RSAWrapper();
    ~RSAWrapper();    

    bool encrypt(std::vector<unsigned char>& input_data, const std::string& output_file, std::string& key_path);
    bool decrypt(std::vector<unsigned char>& encrypted_data, const std::string& output_file, bool saveToFile);
    bool generate_key_pair(int& keySize, const std::string& private_key_file, const std::string& public_key_file, const std::string& password, bool encryptKey = true);
    bool save_private_key(const std::string& private_key_file, const std::string& password, bool encryptKey = true);
    bool load_encrypted_private_key(const std::string& private_key_file, const std::string& password);
    bool load_public_key(const std::string& public_key_file_path);
    bool save_public_key(const std::string& public_key_file);
    std::vector<unsigned char> load_data_from_file(const std::string& input_file);
    std::vector<unsigned char> hex_to_bytes(const std::string& hex);
    std::vector<unsigned char> get_output_data()
    { return output; }

private:
    RSA* rsa_private_key;
    RSA* rsa_public_key;
    EVP_PKEY* public_key_en;
    std::vector<unsigned char> output;
    RSA* rsa_key;
};

#endif // RSA_H
