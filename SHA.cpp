#include "SHA.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

using namespace System;
using namespace System::Windows::Forms;



std::string SHA::hash(const std::string& input) {
    const int maxDigestLength = SHA512_DIGEST_LENGTH;
    unsigned char buffer[maxDigestLength];
    unsigned int digest_length = digest_length_for_type(type_);

    const unsigned char* result = nullptr;
    switch (type_) {
    case Type::SHA1:
        result = SHA1(reinterpret_cast<const unsigned char*>(input.data()), input.size(), buffer);
        break;
    case Type::SHA224:
        result = SHA224(reinterpret_cast<const unsigned char*>(input.data()), input.size(), buffer);
        break;
    case Type::SHA256:
        result = SHA256(reinterpret_cast<const unsigned char*>(input.data()), input.size(), buffer);
        break;
    case Type::SHA384:
        result = SHA384(reinterpret_cast<const unsigned char*>(input.data()), input.size(), buffer);
        break;
    case Type::SHA512:
        result = SHA512(reinterpret_cast<const unsigned char*>(input.data()), input.size(), buffer);
        break;
    }

    if (result == nullptr) {
        throw std::runtime_error("Failed to compute hash.");
    }

    std::stringstream ss;
    for (unsigned int i = 0; i < digest_length; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(buffer[i]);
    }

    return ss.str();
}

std::string SHA::readFile(const std::string& filename)
{
    std::ifstream file_stream(filename, std::ios::in);

    if (file_stream.is_open()) {
        std::ostringstream string_stream;
        string_stream << file_stream.rdbuf();
        file_stream.close();
        return string_stream.str();
    }
    else {
        MessageBox::Show("Nie mo¿na utowrzyæ pliku");
        return "";
    }
}

void SHA::set_sha_type(System::String^ type)
{
    if (type == "SHA1")
        type_ = Type::SHA1;
    if (type == "SHA224")
        type_ = Type::SHA224;
    if (type == "SHA256")
        type_ = Type::SHA256;
    if (type == "SHA384")
        type_ = Type::SHA384;
    if (type == "SHA512")
        type_ = Type::SHA512;
}

void SHA::save_to_file(std::string nazwa_pliku, std::string dane) 
{
    std::ofstream plik(nazwa_pliku);
    plik << dane;
    plik.close();
}

