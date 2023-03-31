#include "helpers_functions.h"

namespace tools
{
    std::vector<unsigned char> hexStringToBytes(const std::string& hex) {
        std::vector<unsigned char> bytes;
        for (size_t i = 0; i < hex.length(); i += 2) {
            unsigned int byte;
            std::stringstream ss;
            ss << std::hex << hex.substr(i, 2);
            ss >> byte;
            bytes.push_back(static_cast<unsigned char>(byte));
        }
        return bytes;
    }

    std::vector<unsigned char> load_data_from_file(const std::string& input_file)
    {
        std::ifstream input_stream(input_file, std::ios::binary);
        std::vector<unsigned char> input_data((std::istreambuf_iterator<char>(input_stream)), std::istreambuf_iterator<char>());
        input_stream.close();
        return input_data;
    }

   string systemStringToString(System::String^ systemString)
    {
        msclr::interop::marshal_context context;
        return context.marshal_as<std::string>(systemString);
    }

   System::String^ stringToSystemString(std::string str)
   {
       msclr::interop::marshal_context context;
       return context.marshal_as<System::String^>(str);
   }

   System::String^ unsignedCharToString(unsigned char value)
   {
       return gcnew System::String(value.ToString());
   }

   System::String^ unsignedCharVectorToString(const std::vector<unsigned char>& vec)
   {
       System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

       for (auto val : vec) {
           char ascii_char = static_cast<char>(val);
           sb->Append(gcnew System::String(&ascii_char));
       }

       return sb->ToString();
   }
   std::vector<unsigned char> stringToUCharVector(const std::string& input) 
   {

       std::vector<unsigned char> uchar_vector(input.begin(), input.end());
       return uchar_vector;
   }

   std::string hexToAscii(const std::vector<unsigned char>& decrypted_data)
   {
       std::string ascii_str;
       for (unsigned int i = 0; i < decrypted_data.size(); i += 2) {
           unsigned int byte = (decrypted_data[i] << 4) | decrypted_data[i + 1];
           ascii_str += static_cast<char>(byte);
       }
       return ascii_str;
   }

   char* SystemStringToPtrChar(String^ text)
   {
       return (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(text)).ToPointer();
   }

   String^ calculateAverageTime(DataGridView^ dataGridView)
   {
       double sum = 0;
       int count = 0;

       for each (DataGridViewRow ^ row in dataGridView->Rows)
       {
           if (row->Cells[1]->Value != nullptr)
           {
               sum += Convert::ToDouble(row->Cells[1]->Value->ToString());
               count++;
           }
       }

       if (count > 0)
       {
           double average = sum / count;
           return gcnew String(average.ToString());
       }
       else
       {
           return "Brak danych.";
       }
   }
}
namespace sha256
{
    String^ generateSHA256(const string& filename) {
        ifstream file(filename, ios::binary);
        if (!file) {
            cerr << "Nie mo¿na otworzyæ pliku!" << endl;
            return "";
        }

        // Odczytaj zawartoœæ pliku do bufora
        file.seekg(0, ios::end);
        size_t length = file.tellg();
        file.seekg(0, ios::beg);

        char* buffer = new char[length];
        file.read(buffer, length);
        file.close();

        unsigned char hash[SHA256_DIGEST_LENGTH];

        SHA256_CTX sha256;
        SHA256_Init(&sha256);
        SHA256_Update(&sha256, buffer, length);
        SHA256_Final(hash, &sha256);

        String^ result = printSHA256(hash);

        delete[] buffer;
        SHA256_CTX context;
        return result;
    }

    String^ printSHA256(const unsigned char* hash)
    {
        String^ result;
        for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
            result += System::String::Format("{0:x2}", hash[i]);
        return result;
    }

    String^ generateSHA256(const std::vector<unsigned char>& data)
    {
        unsigned char hash[SHA256_DIGEST_LENGTH];
        SHA256_CTX sha256;
        SHA256_Init(&sha256);
        SHA256_Update(&sha256, data.data(), data.size());
        SHA256_Final(hash, &sha256);

        String^ result = printSHA256(hash);
        return result;
    }

    std::vector<unsigned char> getFileData(const std::string& fileName)
    {
        std::ifstream file(fileName, std::ios::binary | std::ios::ate);
        std::streamsize size = file.tellg();
        file.seekg(0, std::ios::beg);

        std::vector<unsigned char> buffer(size);
        if (file.read((char*)buffer.data(), size))
        {
            return buffer;
        }

        return std::vector<unsigned char>();
    }
}