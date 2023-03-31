#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <openssl/sha.h>
#include <sstream>
class SHA {
public:
    enum class Type { SHA1, SHA224, SHA256, SHA384, SHA512 };

    SHA() 
    {}

    std::string hash(const std::string& input);
    std::string readFile(const std::string& filename);
    void set_sha_type(System::String^ type);
    void save_to_file(std::string nazwa_pliku, std::string dane);
private:
    Type type_;

    static unsigned int max_digest_length() {
        return SHA512_DIGEST_LENGTH;
    }

    static unsigned int digest_length_for_type(Type type) {
        switch (type) {
        case Type::SHA1:
            return SHA_DIGEST_LENGTH;
        case Type::SHA224:
            return SHA224_DIGEST_LENGTH;
        case Type::SHA256:
            return SHA256_DIGEST_LENGTH;
        case Type::SHA384:
            return SHA384_DIGEST_LENGTH;
        case Type::SHA512:
            return SHA512_DIGEST_LENGTH;
        }

        throw std::runtime_error("Nieprawid³owy typ funkcji skrótu");
    }
};
