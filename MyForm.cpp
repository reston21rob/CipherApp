#include "MyForm.h"
#include "RSA.h"
#include "helpers_functions.h"
#include "AES.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include "chart.h"
#include "SHA.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Text;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace std;
using namespace std::chrono;
using namespace System::Windows::Forms::DataVisualization::Charting;
static int activePanel;

System::Void cryptoPlus::MyForm::generate_sha_Click(System::Object^ sender, System::EventArgs^ e)
{
    SHA sha;
    sha.set_sha_type((shaType->Text));
    
    string input;
    if (sha_fileText->Checked)
        input = sha.readFile(tools::systemStringToString(box2->Text));
    else
        input = tools::systemStringToString(sha_userTextBox->Text);
   
    auto start = high_resolution_clock::now(); // start odliczania czasu szyfrowania
    std::string output = sha.hash(input);
    auto stop = high_resolution_clock::now(); // stop odliczania czasu szyfrowania
    auto duration = duration_cast<microseconds>(stop - start);
    auto timeString = std::to_string(duration.count());

    box1->Text = tools::stringToSystemString(output)->ToUpper();
    if (sha_save->Checked)
        sha.save_to_file("SHA_outputFiles/hash.txt", output);
    
    // uzupe³nienie grid
    DataGridViewRow^ newRow = gcnew DataGridViewRow();
    int textLen = input.size();     
    newRow->Cells->Add(gcnew DataGridViewTextBoxCell()); 
    newRow->Cells[0]->Value = textLen;
    newRow->Cells->Add(gcnew DataGridViewTextBoxCell());
    newRow->Cells[1]->Value = gcnew System::String(timeString.c_str());
    sha_dataGridViewE->Rows->Add(newRow);
    textBox3->Text = tools::calculateAverageTime(sha_dataGridViewE);
}


System::Void cryptoPlus::MyForm::rsagen_generatekey_Click(System::Object^ sender, System::EventArgs^ e)
{
    RSAWrapper rsa_wrapper;
    std::string private_key_file = "RSA_outputFiles/private_key.pem";
    std::string public_key_file = "RSA_outputFiles/public_key.pem";
    int keySize = std::stoi(tools::systemStringToString(rsagen_keylen->Text));
    std::string password = tools::systemStringToString(rsagen_password->Text);
    if (!rsa_wrapper.generate_key_pair(keySize, private_key_file, public_key_file, password, rsagen_usePassword->Checked)) {
        MessageBox::Show("B³¹d podczas generowania");
        return;
    }
    else
        MessageBox::Show("Generownie zakoñczone pomyœlnie");
}

System::Void cryptoPlus::MyForm::rsa_loadPrivateKey_Enter(System::Object^ sender, System::EventArgs^ e)
{
    activePanel = 8;
}


System::Void cryptoPlus::MyForm::encryptRSA_Click(System::Object^ sender, System::EventArgs^ e){
    RSAWrapper rsa_wrapper;
    std::string private_key_file = "RSA_outputFiles/private_key.pem";
    std::string public_key_file = "RSA_outputFiles/public_key.pem";
    std::string public_key_loaded;
    std::string key_path;
    std::vector<unsigned char> inputdata;
    if (loadFileRSAEnc->Checked)
        inputdata = rsa_wrapper.load_data_from_file(tools::systemStringToString(pathRSAEnc->Text));
    else 
    {
        const string input = tools::systemStringToString(userTextEnc->Text);
        inputdata = tools::stringToUCharVector(input);
    }
    int keySize = std::stoi(tools::systemStringToString(keyLenEnc->Text));
    std::string password = tools::systemStringToString(passwordRSAEnc->Text);
    if (!inputdata.empty() && passwordRSAEnc->Text !="" && keySize != 0)
    {
        auto start = high_resolution_clock::now();// start odliczania czasu szyfrowania
        if (rsa_generateKey->Checked) {
            if (!rsa_wrapper.generate_key_pair(keySize, private_key_file, public_key_file, password)) {
                std::cerr << "Error generating RSA key pair." << std::endl;
                return;
            }
            key_path = "RSA_outputFiles/public_key.pem";
        } 
        else
            key_path = tools::systemStringToString(rsa_loadedKeyE->Text);
        if (!rsa_wrapper.encrypt(inputdata, "RSA_outputFiles/encrypted.bin", key_path)) {
            std::cerr << "Error encrypting data." << std::endl;
            return;
        }
        auto stop = high_resolution_clock::now(); //koniec odliczania czasu szyfrowania 
        std::vector<unsigned char> output = rsa_wrapper.get_output_data();
        std::stringstream ss;
        for (const auto& byte : output)
            ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(byte);
        String^ encrypted = gcnew String(ss.str().c_str());
        encBoxRSA->Text = encrypted->ToUpper();
        auto duration = duration_cast<microseconds>(stop - start);
        auto timeString = std::to_string(duration.count());
        DataGridViewRow^ newRow = gcnew DataGridViewRow();
        int textLen = inputdata.size();
        newRow->Cells->Add(gcnew DataGridViewTextBoxCell());
        newRow->Cells[0]->Value = textLen;
        newRow->Cells->Add(gcnew DataGridViewTextBoxCell());
        newRow->Cells[1]->Value = gcnew System::String(timeString.c_str());
        dataGridView3->Rows->Add(newRow);
        textBox2->Text = tools::calculateAverageTime(dataGridView3);
    }
    else
        MessageBox::Show("Uzupe³nij dane");
}

System::Void cryptoPlus::MyForm::decryptRSA_Click(System::Object^ sender, System::EventArgs^ e)
{
    RSAWrapper rsa_wrapper;
    std::string private_key_file;
    if (rsa_usePrivateKey->Checked)
        private_key_file = tools::systemStringToString(rsa_privateKey->Text);        
    else
        private_key_file = "RSA_outputFiles/private_key.pem";

    std::vector<unsigned char> inputdata;

    auto start = high_resolution_clock::now();// start odliczania czasu szyfrowania
    int keySize = 0;
    if (loadFileRSADec->Checked)
        inputdata = rsa_wrapper.load_data_from_file(tools::systemStringToString(pathRSADec->Text));
    else 
    {
        System::String^ encryptedText = userTextDec->Text;
        msclr::interop::marshal_context context;
        std::string encryptedData = context.marshal_as<std::string>(encryptedText);
        inputdata.assign(encryptedData.begin(), encryptedData.end());
    }
    keySize = std::stoi(tools::systemStringToString(keyLenDec->Text));
    std::string password = tools::systemStringToString(passwordRSAdec->Text);

    if (!inputdata.empty() && passwordRSAdec->Text != "" && keySize != 0)
    {
        if (!rsa_wrapper.load_encrypted_private_key(private_key_file, password))
        {
            MessageBox::Show("Niepoprawny odczyt klucza");
            return;
        }
        if (passwordRSAdec->Text != "")
        {
            if (rsa_wrapper.decrypt(inputdata, "RSA_outputFiles/decrypted.txt", rsa_saveToFile->Checked))
            {
                MessageBox::Show("Szyfrowanie zakoñczone sukcesem.");
                std::vector<unsigned char> output = rsa_wrapper.get_output_data();
                std::string decryptedData(output.begin(), output.end());
                decBoxRSA->Text = gcnew System::String(decryptedData.c_str());
            }            
        }
        else
            MessageBox::Show("Uzupe³nij dane");
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    auto timeString = std::to_string(duration.count());

    DataGridViewRow^ newRow = gcnew DataGridViewRow();
    int textLen = inputdata.size();

    newRow->Cells->Add(gcnew DataGridViewTextBoxCell());
    newRow->Cells[0]->Value = textLen;
    newRow->Cells->Add(gcnew DataGridViewTextBoxCell());
    newRow->Cells[1]->Value = gcnew System::String(timeString.c_str());
    rsa_dataGridViewD->Rows->Add(newRow);    
    textBox4->Text = tools::calculateAverageTime(rsa_dataGridViewD);
}

System::Void cryptoPlus::MyForm::encryptAES_Click(System::Object^ sender, System::EventArgs^ e)
{
    AESWrapper aes;
    std::vector<unsigned char> input_data;
    if (checkFileTextEn->Checked)
        input_data = tools::load_data_from_file(tools::systemStringToString(fileTextEn->Text));
    else
    {
        System::String^ inputText = userEditBoxEn->Text;
        msclr::interop::marshal_context context;
        std::string inputData = context.marshal_as<std::string>(inputText);
        input_data.assign(inputData.begin(), inputData.end());
    }

    int keyLen = 0;
    String^ keyLenString = keySizeEn->SelectedItem->ToString();
    if (!System::Int32::TryParse(keyLenString, keyLen)) {
        MessageBox::Show("Niepoprawna wartoœæ");
        return;
    }
    aes.setKeyLength(keyLen);
    std::vector<unsigned char> key;
    auto start = high_resolution_clock::now();// start odliczania czasu szyfrowania
    // Przygotowanie klucza
    if (generateKeyAES->Checked)
    {
        key = aes.generate_key(keyLen);
        // Konwertuj klucz na ci¹g znaków (hex) i wyœwietl go w kontrolce TextBox
        std::stringstream ss;
        for (const auto& byte : key)
            ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(byte);
        String^ key_str = gcnew String(ss.str().c_str());
        keyTextBoxEn->Text = key_str->ToUpper();
    }
    else
    {
        String^ user_key_str = keyTextBoxEn->Text;
        key = tools::hexStringToBytes(tools::systemStringToString(user_key_str));
        if (keyLen != (key.size()) * 8)
        {
            MessageBox::Show("Niepoprawna d³ugoœæ klucza");
            return;
        }
    }
    std::string encrypted_file = "AES_outputFiles/encrypted_data.bin";
    if (aes.encrypt(input_data, encrypted_file, key))
    {
        std::vector<unsigned char> output = aes.get_output_data();
        std::stringstream ss;
        for (const auto& byte : output)
            ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(byte);
        String^ encrypted = gcnew String(ss.str().c_str());
        aesTextBoxEn->Text = encrypted->ToUpper();
    }
    else {
        MessageBox::Show("B³¹d podczas szyfrowania. SprawdŸ wporwadzone dane!");
        return;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    auto timeString = std::to_string(duration.count());

    DataGridViewRow^ newRow = gcnew DataGridViewRow();
    int textLen = input_data.size();
    newRow->Cells->Add(gcnew DataGridViewTextBoxCell());
    newRow->Cells[0]->Value = textLen;
    newRow->Cells->Add(gcnew DataGridViewTextBoxCell());
    newRow->Cells[1]->Value = gcnew System::String(timeString.c_str());
    aes_dataGridViewE->Rows->Add(newRow);
    textBox1->Text = tools::calculateAverageTime(aes_dataGridViewE);
}

System::Void cryptoPlus::MyForm::decryptAES_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    std::string decrypted_file = "AES_outputFiles/decrypted_data.txt";
    std::vector<unsigned char> input_data;
    if (checkFileTextDec->Checked)
        input_data = tools::load_data_from_file(tools::systemStringToString(fileTextDec->Text));
    
    std::vector<unsigned char> key; // Tu nale¿y umieœciæ odpowiedni klucz
    System::String^ userKey = aesKeyTextBox->Text;
    std::string userKeyString = msclr::interop::marshal_as<std::string>(userKey);
    
    key = tools::hexStringToBytes(userKeyString);

    AESWrapper aes;
    if (!aes.setKeyLength(key.size() * 8))
    {
        MessageBox::Show("Niepoprawna d³ugoœæ klucza");
        return;
    }
    auto start = high_resolution_clock::now();// start odliczania czasu deszyfrowania
    if (aes.decrypt(input_data, decrypted_file, key, saveToFile->Checked)) {
        std::vector<unsigned char> output = aes.get_output_data();
        std::string decryptedData(output.begin(), output.end());
        aesTextBoxDec->Text = gcnew System::String(decryptedData.c_str());
    }
    else
        MessageBox::Show("B³¹d podczas deszyfrowania");

    auto stop = high_resolution_clock::now();// koniec odliczania czasu deszyfrowania
    auto duration = duration_cast<microseconds>(stop - start);
    auto timeString = std::to_string(duration.count());

    DataGridViewRow^ newRow = gcnew DataGridViewRow();
    int textLen = input_data.size();

    newRow->Cells->Add(gcnew DataGridViewTextBoxCell());
    newRow->Cells[0]->Value = textLen;
    newRow->Cells->Add(gcnew DataGridViewTextBoxCell());
    newRow->Cells[1]->Value = gcnew System::String(timeString.c_str());   
    aes_dataGridViewD->Rows->Add(newRow);
    textBox5->Text = tools::calculateAverageTime(aes_dataGridViewD);
}

System::Void cryptoPlus::MyForm::sha_show_chart(System::Object^ sender, System::EventArgs^ e)
{
    cipherApp::MyForm1^ chartForm = gcnew cipherApp::MyForm1();
    String^ keyLen = "Funkcja skrótu " + shaType->Text;
    chartForm->SetChartData(sha_dataGridViewE, 0, 1, keyLen);
    chartForm->ShowDialog();
}

System::Void cryptoPlus::MyForm::sha_clear_grid(System::Object^ sender, System::EventArgs^ e)
{
    sha_dataGridViewE->Rows->Clear();
}

System::Void cryptoPlus::MyForm::button3_Enter(System::Object^ sender, System::EventArgs^ e)
{
    activePanel = 6;
}

System::Void cryptoPlus::MyForm::rsa_loadKeyE_Enter(System::Object^ sender, System::EventArgs^ e)
{
    activePanel = 7;
}

System::Void cryptoPlus::MyForm::aes_show_chart(System::Object^ sender, System::EventArgs^ e)
{
    cipherApp::MyForm1^ chartForm = gcnew cipherApp::MyForm1();
    String^ keyLen;
    if (aes_dat->SelectedIndex == 0) {
        keyLen = "Szyfrowanie kluczem o d³ugoœæi " + keySizeEn->Text;
        chartForm->SetChartData(aes_dataGridViewE, 0, 1, keyLen);
    }
    else {
        keyLen = "Deszyfrowanie kluczem o d³ugoœæi " + keySizeDec->Text;
        chartForm->SetChartData(aes_dataGridViewD, 0, 1, keyLen);
    }
    chartForm->ShowDialog();
}

System::Void cryptoPlus::MyForm::aes_clear_grid(System::Object^ sender, System::EventArgs^ e)
{
    if (aes_dat->SelectedIndex == 0)
        aes_dataGridViewE->Rows->Clear();
    else 
        aes_dataGridViewD->Rows->Clear();
}

System::Void cryptoPlus::MyForm::rsa_show_char(System::Object^ sender, System::EventArgs^ e)
{
    cipherApp::MyForm1^ chartForm = gcnew cipherApp::MyForm1();
    String^ keyLen;
    if (tabControl1->SelectedIndex == 0) {
        keyLen = "Szyfrowanie kluczem o d³ugoœæi " + keyLenEnc->Text;
        chartForm->SetChartData(dataGridView3, 0, 1, keyLen);
    }
    else {
        keyLen = "Deszyfrowanie kluczem o d³ugoœæi " + keyLenDec->Text;
        chartForm->SetChartData(rsa_dataGridViewD, 0, 1, keyLen);
    }
    chartForm->ShowDialog();
}

System::Void cryptoPlus::MyForm::rsa_clear_grid(System::Object^ sender, System::EventArgs^ e)
{
    if (tabControl1->SelectedIndex == 0)
        dataGridView3->Rows->Clear();
    else
        rsa_dataGridViewD->Rows->Clear();
}

void cryptoPlus::MyForm::clearBox_OnClick(System::Object^ sender, System::EventArgs^ e)
{
    box1->Text = "";
}

void cryptoPlus::MyForm::select_file_form_disk_OnClick(System::Object^ sender, System::EventArgs^ e)
//----------------------------------------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------------------------------------
{
    Stream^ myStream;
    OpenFileDialog^ openFileDialogSHA = gcnew OpenFileDialog;

    openFileDialogSHA->InitialDirectory = "C:\\Users\\rober\\source\\repos\\cipherApp\\cipherApp";
    openFileDialogSHA->Filter = "PDF Files (*.pdf)|*.pdf|Word Files (*.docx)|*.docx|Text Files (*.txt)|*.txt|Binary Files (*.bin)|*.bin|PEM Files (*.pem)|*.pem";
    openFileDialogSHA->FilterIndex = 3;
    openFileDialogSHA->Title = "Wybierz plik tekstowy";
    openFileDialogSHA->RestoreDirectory = true;

    if (openFileDialogSHA->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        if ((myStream = openFileDialogSHA->OpenFile()) != nullptr)
        {
            switch (activePanel)
            {
            case 1:
                box2->Text = openFileDialogSHA->FileName;
                break;
            case 2:
                fileTextEn->Text = openFileDialogSHA->FileName;
                break;
            case 3:
                fileTextDec->Text = openFileDialogSHA->FileName;
                break;
            case 4:
                pathRSAEnc->Text = openFileDialogSHA->FileName;
                break;
            case 5:
                pathRSADec->Text = openFileDialogSHA->FileName;
                break;
            case 6:
                box2->Text = openFileDialogSHA->FileName;
                break;
            case 7:
                rsa_loadedKeyE->Text = openFileDialogSHA->FileName;
                break;         
            case 8:
                rsa_privateKey->Text = openFileDialogSHA->FileName;
                break;
            }
            myStream->Close();
        }
    }
}// end_select_file_form_disk_OnClick()

System::Void cryptoPlus::MyForm::button4_Enter(System::Object^ sender, System::EventArgs^ e)
{
    activePanel = 2;
    return System::Void();
}

System::Void cryptoPlus::MyForm::button7_Enter(System::Object^ sender, System::EventArgs^ e)
{
    activePanel = 3;
    return System::Void();
}

System::Void cryptoPlus::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    activePanel = 6;
    return System::Void();
}

System::Void cryptoPlus::MyForm::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
    activePanel = 7;
    return System::Void();
}


System::Void cryptoPlus::MyForm::chooseFileEnc_Enter(System::Object^ sender, System::EventArgs^ e)
{
    activePanel = 4;
    return System::Void();
}

System::Void cryptoPlus::MyForm::chooseFileDec_Enter(System::Object^ sender, System::EventArgs^ e)
{
    activePanel = 5;
    return System::Void();
}

[STAThreadAttribute]
void main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    cryptoPlus::MyForm form;
    Application::Run(% form);
}

