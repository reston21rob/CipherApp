#pragma once
#include <chrono>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <openssl/sha.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

namespace tools
{
    std::vector<unsigned char> hexStringToBytes(const std::string& hex);
    std::vector<unsigned char> load_data_from_file(const std::string& input_file);
    string systemStringToString(System::String^ systemString);
    System::String^ stringToSystemString(std::string str);
    System::String^ unsignedCharToString(unsigned char value);
    System::String^ unsignedCharVectorToString(const std::vector<unsigned char>& vec);
    std::vector<unsigned char> stringToUCharVector(const std::string& input);
    std::string hexToAscii(const std::vector<unsigned char>& decrypted_data);
    char* SystemStringToPtrChar(String^ text);
    String^ calculateAverageTime(DataGridView^ dataGridView);
}
namespace sha256
{
    using namespace std;
    using namespace System;
    using namespace System::Windows::Forms;

    String^ generateSHA256(const string& filename);
    String^ generateSHA256(const std::vector<unsigned char>& data);

    String^ printSHA256(const unsigned char* hash);
    std::vector<unsigned char> getFileData(const std::string& fileName);
}namespace sha256
{
    using namespace std;
    using namespace System;
    using namespace System::Windows::Forms;

    String^ generateSHA256(const string& filename);
    String^ generateSHA256(const std::vector<unsigned char>& data);

    String^ printSHA256(const unsigned char* hash);
    std::vector<unsigned char> getFileData(const std::string& fileName);
}