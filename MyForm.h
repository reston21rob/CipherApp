#pragma once

namespace cryptoPlus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:










	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Splitter^ splitter2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ fileTextEn;





	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::Button^ encryptAES;


	private: System::Windows::Forms::ToolStripMenuItem^ shaPanel;
	private: System::Windows::Forms::ToolStripMenuItem^ aesPanel;
	private: System::Windows::Forms::TabControl^ rsa_dat;

	private: System::Windows::Forms::TabPage^ SHA256;
	private: System::Windows::Forms::TabPage^ AES;

	private: System::Windows::Forms::Panel^ panelAesEn;
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::ComboBox^ keySizeEn;

	private: System::Windows::Forms::RadioButton^ checkUserTextEn;
	private: System::Windows::Forms::TextBox^ userEditBoxEn;

	private: System::Windows::Forms::RadioButton^ checkFileTextEn;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ aesTextBoxEn;



	private: System::Windows::Forms::Panel^ panelAesDec;


	private: System::Windows::Forms::Button^ decryptAES;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ aesTextBoxDec;




	private: System::Windows::Forms::Label^ label6;





	private: System::Windows::Forms::RadioButton^ checkFileTextDec;



	private: System::Windows::Forms::TextBox^ fileTextDec;

	private: System::Windows::Forms::Button^ button7;







	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::CheckBox^ saveToFile;
private: System::Windows::Forms::ComboBox^ keySizeDec;

private: System::Windows::Forms::Button^ encryptRSA;
private: System::Windows::Forms::TabPage^ RSA;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ passwordRSAdec;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::ComboBox^ keyLenDec;
private: System::Windows::Forms::RadioButton^ loadUserTextDec;
private: System::Windows::Forms::RadioButton^ loadFileRSADec;
private: System::Windows::Forms::TextBox^ decBoxRSA;
private: System::Windows::Forms::TextBox^ pathRSADec;

private: System::Windows::Forms::Button^ chooseFileDec;
private: System::Windows::Forms::TextBox^ userTextDec;
private: System::Windows::Forms::Button^ decryptRSA;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ passw;
private: System::Windows::Forms::TextBox^ passwordRSAEnc;
private: System::Windows::Forms::Label^ keyLen;
private: System::Windows::Forms::ComboBox^ keyLenEnc;
private: System::Windows::Forms::RadioButton^ loadTextUserEnc;
private: System::Windows::Forms::RadioButton^ loadFileRSAEnc;
private: System::Windows::Forms::TextBox^ encBoxRSA;
private: System::Windows::Forms::TextBox^ pathRSAEnc;
private: System::Windows::Forms::Button^ chooseFileEnc;
private: System::Windows::Forms::TextBox^ userTextEnc;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::TextBox^ keyTextBoxEn;

private: System::Windows::Forms::CheckBox^ generateKeyAES;
private: System::Windows::Forms::TextBox^ aesKeyTextBox;
private: System::Windows::Forms::Label^ label9;















































private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::DataGridView^ aes_dataGridViewE;


private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::Button^ rsaClearGrid;

private: System::Windows::Forms::Button^ rsaChart;

private: System::Windows::Forms::DataGridView^ dataGridView3;


private: System::Windows::Forms::TabControl^ aes_dat;

private: System::Windows::Forms::TabPage^ gridEnc_aes;
private: System::Windows::Forms::TabPage^ gridDec_aes;
private: System::Windows::Forms::DataGridView^ aes_dataGridViewD;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::DataGridView^ rsa_dataGridViewD;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ box1;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TextBox^ box2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ labelSHA256;
private: System::Windows::Forms::TabControl^ sha_dat;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::DataGridView^ sha_dataGridViewE;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Splitter^ splitter1;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::ComboBox^ shaType;
private: System::Windows::Forms::CheckBox^ sha_userText;
private: System::Windows::Forms::CheckBox^ sha_fileText;
private: System::Windows::Forms::TextBox^ sha_userTextBox;
private: System::Windows::Forms::CheckBox^ sha_save;


private: System::Windows::Forms::Button^ rsa_loadKeyE;
private: System::Windows::Forms::TextBox^ rsa_loadedKeyE;
private: System::Windows::Forms::CheckBox^ rsa_generateKey;
private: System::Windows::Forms::TabPage^ rsaTab_generateKeys;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Button^ rsagen_generatekey;
private: System::Windows::Forms::TextBox^ rsagen_password;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::ComboBox^ rsagen_keylen;
private: System::Windows::Forms::CheckBox^ rsagen_usePassword;
private: System::Windows::Forms::Button^ rsa_loadPrivateKey;
private: System::Windows::Forms::TextBox^ rsa_privateKey;

private: System::Windows::Forms::CheckBox^ rsa_usePrivateKey;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::CheckBox^ rsa_saveToFile;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label17;






























	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->aes_dataGridViewE = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelAesDec = (gcnew System::Windows::Forms::Panel());
			this->saveToFile = (gcnew System::Windows::Forms::CheckBox());
			this->aesKeyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->keySizeDec = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->decryptAES = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->aesTextBoxDec = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkFileTextDec = (gcnew System::Windows::Forms::RadioButton());
			this->fileTextDec = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->encryptAES = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->fileTextEn = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->shaPanel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aesPanel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rsa_dat = (gcnew System::Windows::Forms::TabControl());
			this->SHA256 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->sha_save = (gcnew System::Windows::Forms::CheckBox());
			this->sha_userTextBox = (gcnew System::Windows::Forms::TextBox());
			this->sha_userText = (gcnew System::Windows::Forms::CheckBox());
			this->sha_fileText = (gcnew System::Windows::Forms::CheckBox());
			this->shaType = (gcnew System::Windows::Forms::ComboBox());
			this->box1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->box2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelSHA256 = (gcnew System::Windows::Forms::Label());
			this->sha_dat = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->sha_dataGridViewE = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->AES = (gcnew System::Windows::Forms::TabPage());
			this->aes_dat = (gcnew System::Windows::Forms::TabControl());
			this->gridEnc_aes = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->gridDec_aes = (gcnew System::Windows::Forms::TabPage());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->aes_dataGridViewD = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelAesEn = (gcnew System::Windows::Forms::Panel());
			this->generateKeyAES = (gcnew System::Windows::Forms::CheckBox());
			this->keyTextBoxEn = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->aesTextBoxEn = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->keySizeEn = (gcnew System::Windows::Forms::ComboBox());
			this->checkUserTextEn = (gcnew System::Windows::Forms::RadioButton());
			this->userEditBoxEn = (gcnew System::Windows::Forms::TextBox());
			this->checkFileTextEn = (gcnew System::Windows::Forms::RadioButton());
			this->RSA = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->rsa_dataGridViewD = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rsaClearGrid = (gcnew System::Windows::Forms::Button());
			this->rsaChart = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->rsa_saveToFile = (gcnew System::Windows::Forms::CheckBox());
			this->rsa_loadPrivateKey = (gcnew System::Windows::Forms::Button());
			this->rsa_privateKey = (gcnew System::Windows::Forms::TextBox());
			this->rsa_usePrivateKey = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->passwordRSAdec = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->keyLenDec = (gcnew System::Windows::Forms::ComboBox());
			this->loadUserTextDec = (gcnew System::Windows::Forms::RadioButton());
			this->loadFileRSADec = (gcnew System::Windows::Forms::RadioButton());
			this->decBoxRSA = (gcnew System::Windows::Forms::TextBox());
			this->pathRSADec = (gcnew System::Windows::Forms::TextBox());
			this->chooseFileDec = (gcnew System::Windows::Forms::Button());
			this->userTextDec = (gcnew System::Windows::Forms::TextBox());
			this->decryptRSA = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->rsa_generateKey = (gcnew System::Windows::Forms::CheckBox());
			this->rsa_loadKeyE = (gcnew System::Windows::Forms::Button());
			this->rsa_loadedKeyE = (gcnew System::Windows::Forms::TextBox());
			this->passw = (gcnew System::Windows::Forms::Label());
			this->passwordRSAEnc = (gcnew System::Windows::Forms::TextBox());
			this->keyLen = (gcnew System::Windows::Forms::Label());
			this->keyLenEnc = (gcnew System::Windows::Forms::ComboBox());
			this->loadTextUserEnc = (gcnew System::Windows::Forms::RadioButton());
			this->loadFileRSAEnc = (gcnew System::Windows::Forms::RadioButton());
			this->encBoxRSA = (gcnew System::Windows::Forms::TextBox());
			this->pathRSAEnc = (gcnew System::Windows::Forms::TextBox());
			this->chooseFileEnc = (gcnew System::Windows::Forms::Button());
			this->userTextEnc = (gcnew System::Windows::Forms::TextBox());
			this->encryptRSA = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->rsaTab_generateKeys = (gcnew System::Windows::Forms::TabPage());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->rsagen_generatekey = (gcnew System::Windows::Forms::Button());
			this->rsagen_usePassword = (gcnew System::Windows::Forms::CheckBox());
			this->rsagen_password = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rsagen_keylen = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aes_dataGridViewE))->BeginInit();
			this->panelAesDec->SuspendLayout();
			this->rsa_dat->SuspendLayout();
			this->SHA256->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->sha_dat->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sha_dataGridViewE))->BeginInit();
			this->AES->SuspendLayout();
			this->aes_dat->SuspendLayout();
			this->gridEnc_aes->SuspendLayout();
			this->gridDec_aes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aes_dataGridViewD))->BeginInit();
			this->panelAesEn->SuspendLayout();
			this->RSA->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rsa_dataGridViewD))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->rsaTab_generateKeys->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->AutoSize = true;
			this->panel2->Controls->Add(this->splitter2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1420, 492);
			this->panel2->TabIndex = 7;
			// 
			// splitter2
			// 
			this->splitter2->Location = System::Drawing::Point(0, 0);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(3, 492);
			this->splitter2->TabIndex = 6;
			this->splitter2->TabStop = false;
			// 
			// aes_dataGridViewE
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->Format = L"N0";
			dataGridViewCellStyle1->NullValue = nullptr;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->aes_dataGridViewE->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->aes_dataGridViewE->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->aes_dataGridViewE->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			this->aes_dataGridViewE->Dock = System::Windows::Forms::DockStyle::Top;
			this->aes_dataGridViewE->Location = System::Drawing::Point(3, 3);
			this->aes_dataGridViewE->Name = L"aes_dataGridViewE";
			this->aes_dataGridViewE->RowHeadersWidth = 51;
			this->aes_dataGridViewE->RowTemplate->Height = 24;
			this->aes_dataGridViewE->Size = System::Drawing::Size(346, 375);
			this->aes_dataGridViewE->TabIndex = 10;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->dataGridViewTextBoxColumn1->HeaderText = L"D³ugoœæ tekstu ";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 123;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Czas wykonania ";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// panelAesDec
			// 
			this->panelAesDec->AutoSize = true;
			this->panelAesDec->Controls->Add(this->saveToFile);
			this->panelAesDec->Controls->Add(this->aesKeyTextBox);
			this->panelAesDec->Controls->Add(this->keySizeDec);
			this->panelAesDec->Controls->Add(this->label9);
			this->panelAesDec->Controls->Add(this->decryptAES);
			this->panelAesDec->Controls->Add(this->label3);
			this->panelAesDec->Controls->Add(this->aesTextBoxDec);
			this->panelAesDec->Controls->Add(this->label6);
			this->panelAesDec->Controls->Add(this->checkFileTextDec);
			this->panelAesDec->Controls->Add(this->fileTextDec);
			this->panelAesDec->Controls->Add(this->button7);
			this->panelAesDec->Location = System::Drawing::Point(515, 3);
			this->panelAesDec->Name = L"panelAesDec";
			this->panelAesDec->Size = System::Drawing::Size(542, 495);
			this->panelAesDec->TabIndex = 10;
			// 
			// saveToFile
			// 
			this->saveToFile->AutoSize = true;
			this->saveToFile->Location = System::Drawing::Point(128, 332);
			this->saveToFile->Name = L"saveToFile";
			this->saveToFile->Size = System::Drawing::Size(125, 21);
			this->saveToFile->TabIndex = 9;
			this->saveToFile->Text = L"Zapisz do pliku";
			this->saveToFile->UseVisualStyleBackColor = true;
			// 
			// aesKeyTextBox
			// 
			this->aesKeyTextBox->Location = System::Drawing::Point(169, 204);
			this->aesKeyTextBox->Name = L"aesKeyTextBox";
			this->aesKeyTextBox->Size = System::Drawing::Size(337, 22);
			this->aesKeyTextBox->TabIndex = 20;
			// 
			// keySizeDec
			// 
			this->keySizeDec->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->keySizeDec->FormattingEnabled = true;
			this->keySizeDec->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"128", L"192", L"256" });
			this->keySizeDec->Location = System::Drawing::Point(169, 163);
			this->keySizeDec->Name = L"keySizeDec";
			this->keySizeDec->Size = System::Drawing::Size(337, 24);
			this->keySizeDec->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(19, 207);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 17);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Klucz";
			// 
			// decryptAES
			// 
			this->decryptAES->Location = System::Drawing::Point(21, 314);
			this->decryptAES->Name = L"decryptAES";
			this->decryptAES->Size = System::Drawing::Size(100, 39);
			this->decryptAES->TabIndex = 8;
			this->decryptAES->Text = L"Decrypt AES";
			this->decryptAES->UseVisualStyleBackColor = true;
			this->decryptAES->Click += gcnew System::EventHandler(this, &MyForm::decryptAES_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 458);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(269, 17);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Zdeszyfrowany tekst w formacie AnsiChar";
			// 
			// aesTextBoxDec
			// 
			this->aesTextBoxDec->Location = System::Drawing::Point(21, 359);
			this->aesTextBoxDec->Multiline = true;
			this->aesTextBoxDec->Name = L"aesTextBoxDec";
			this->aesTextBoxDec->Size = System::Drawing::Size(484, 91);
			this->aesTextBoxDec->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 163);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"D³ugoœæ klucza";
			// 
			// checkFileTextDec
			// 
			this->checkFileTextDec->AutoSize = true;
			this->checkFileTextDec->Checked = true;
			this->checkFileTextDec->Location = System::Drawing::Point(21, 4);
			this->checkFileTextDec->Name = L"checkFileTextDec";
			this->checkFileTextDec->Size = System::Drawing::Size(110, 21);
			this->checkFileTextDec->TabIndex = 4;
			this->checkFileTextDec->TabStop = true;
			this->checkFileTextDec->Text = L"Za³aduj tekst";
			this->checkFileTextDec->UseVisualStyleBackColor = true;
			// 
			// fileTextDec
			// 
			this->fileTextDec->Location = System::Drawing::Point(169, 4);
			this->fileTextDec->Multiline = true;
			this->fileTextDec->Name = L"fileTextDec";
			this->fileTextDec->Size = System::Drawing::Size(337, 21);
			this->fileTextDec->TabIndex = 3;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(169, 31);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(337, 26);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Wybierz plik z dysku";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::select_file_form_disk_OnClick);
			this->button7->Enter += gcnew System::EventHandler(this, &MyForm::button7_Enter);
			// 
			// encryptAES
			// 
			this->encryptAES->Location = System::Drawing::Point(21, 314);
			this->encryptAES->Name = L"encryptAES";
			this->encryptAES->Size = System::Drawing::Size(100, 39);
			this->encryptAES->TabIndex = 8;
			this->encryptAES->Text = L"Encrypt AES";
			this->encryptAES->UseVisualStyleBackColor = true;
			this->encryptAES->Click += gcnew System::EventHandler(this, &MyForm::encryptAES_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(169, 31);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(337, 26);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Wybierz plik z dysku";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::select_file_form_disk_OnClick);
			this->button4->Enter += gcnew System::EventHandler(this, &MyForm::button4_Enter);
			// 
			// fileTextEn
			// 
			this->fileTextEn->Location = System::Drawing::Point(169, 4);
			this->fileTextEn->Multiline = true;
			this->fileTextEn->Name = L"fileTextEn";
			this->fileTextEn->Size = System::Drawing::Size(337, 21);
			this->fileTextEn->TabIndex = 3;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// shaPanel
			// 
			this->shaPanel->Name = L"shaPanel";
			this->shaPanel->Size = System::Drawing::Size(32, 19);
			// 
			// aesPanel
			// 
			this->aesPanel->Name = L"aesPanel";
			this->aesPanel->Size = System::Drawing::Size(32, 19);
			// 
			// rsa_dat
			// 
			this->rsa_dat->Controls->Add(this->SHA256);
			this->rsa_dat->Controls->Add(this->AES);
			this->rsa_dat->Controls->Add(this->RSA);
			this->rsa_dat->Controls->Add(this->rsaTab_generateKeys);
			this->rsa_dat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->rsa_dat->Location = System::Drawing::Point(0, 0);
			this->rsa_dat->Multiline = true;
			this->rsa_dat->Name = L"rsa_dat";
			this->rsa_dat->SelectedIndex = 0;
			this->rsa_dat->Size = System::Drawing::Size(1434, 527);
			this->rsa_dat->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->rsa_dat->TabIndex = 8;
			// 
			// SHA256
			// 
			this->SHA256->Controls->Add(this->panel1);
			this->SHA256->Location = System::Drawing::Point(4, 25);
			this->SHA256->Name = L"SHA256";
			this->SHA256->Padding = System::Windows::Forms::Padding(3);
			this->SHA256->Size = System::Drawing::Size(1426, 498);
			this->SHA256->TabIndex = 0;
			this->SHA256->Text = L"SHA";
			this->SHA256->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->sha_dat);
			this->panel1->Controls->Add(this->splitter1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1420, 492);
			this->panel1->TabIndex = 4;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->sha_save);
			this->panel5->Controls->Add(this->sha_userTextBox);
			this->panel5->Controls->Add(this->sha_userText);
			this->panel5->Controls->Add(this->sha_fileText);
			this->panel5->Controls->Add(this->shaType);
			this->panel5->Controls->Add(this->box1);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->box2);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->labelSHA256);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(3, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1057, 492);
			this->panel5->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 236);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Typ funkcji skrótu";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// sha_save
			// 
			this->sha_save->AutoSize = true;
			this->sha_save->Location = System::Drawing::Point(133, 428);
			this->sha_save->Name = L"sha_save";
			this->sha_save->Size = System::Drawing::Size(125, 21);
			this->sha_save->TabIndex = 10;
			this->sha_save->Text = L"Zapisz do pliku";
			this->sha_save->UseVisualStyleBackColor = true;
			// 
			// sha_userTextBox
			// 
			this->sha_userTextBox->Location = System::Drawing::Point(133, 118);
			this->sha_userTextBox->Multiline = true;
			this->sha_userTextBox->Name = L"sha_userTextBox";
			this->sha_userTextBox->Size = System::Drawing::Size(331, 105);
			this->sha_userTextBox->TabIndex = 9;
			// 
			// sha_userText
			// 
			this->sha_userText->AutoSize = true;
			this->sha_userText->Location = System::Drawing::Point(13, 118);
			this->sha_userText->Name = L"sha_userText";
			this->sha_userText->Size = System::Drawing::Size(68, 21);
			this->sha_userText->TabIndex = 8;
			this->sha_userText->Text = L"Wpisz";
			this->sha_userText->UseVisualStyleBackColor = true;
			// 
			// sha_fileText
			// 
			this->sha_fileText->AutoSize = true;
			this->sha_fileText->Location = System::Drawing::Point(13, 50);
			this->sha_fileText->Name = L"sha_fileText";
			this->sha_fileText->Size = System::Drawing::Size(111, 21);
			this->sha_fileText->TabIndex = 7;
			this->sha_fileText->Text = L"Za³aduj tekst";
			this->sha_fileText->UseVisualStyleBackColor = true;
			// 
			// shaType
			// 
			this->shaType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->shaType->FormattingEnabled = true;
			this->shaType->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"SHA1", L"SHA224 ", L"SHA256", L"SHA384", L"SHA512" });
			this->shaType->Location = System::Drawing::Point(130, 229);
			this->shaType->Name = L"shaType";
			this->shaType->Size = System::Drawing::Size(334, 24);
			this->shaType->TabIndex = 6;
			// 
			// box1
			// 
			this->box1->Location = System::Drawing::Point(133, 314);
			this->box1->Multiline = true;
			this->box1->Name = L"box1";
			this->box1->Size = System::Drawing::Size(334, 108);
			this->box1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(130, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generuj skrót";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::generate_sha_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(299, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 39);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Wyczyœæ wynik";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::clearBox_OnClick);
			// 
			// box2
			// 
			this->box2->Location = System::Drawing::Point(133, 48);
			this->box2->Multiline = true;
			this->box2->Name = L"box2";
			this->box2->Size = System::Drawing::Size(331, 21);
			this->box2->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(133, 75);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(331, 26);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Wybierz plik z dysku";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::select_file_form_disk_OnClick);
			this->button3->Enter += gcnew System::EventHandler(this, &MyForm::button3_Enter);
			// 
			// labelSHA256
			// 
			this->labelSHA256->AutoSize = true;
			this->labelSHA256->Location = System::Drawing::Point(265, 11);
			this->labelSHA256->Name = L"labelSHA256";
			this->labelSHA256->Size = System::Drawing::Size(64, 17);
			this->labelSHA256->TabIndex = 4;
			this->labelSHA256->Text = L"SHA 256";
			this->labelSHA256->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// sha_dat
			// 
			this->sha_dat->Controls->Add(this->tabPage3);
			this->sha_dat->Dock = System::Windows::Forms::DockStyle::Right;
			this->sha_dat->Location = System::Drawing::Point(1060, 0);
			this->sha_dat->Name = L"sha_dat";
			this->sha_dat->SelectedIndex = 0;
			this->sha_dat->Size = System::Drawing::Size(360, 492);
			this->sha_dat->TabIndex = 12;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->sha_dataGridViewE);
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->button13);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(352, 463);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Szyfrowanie";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(178, 394);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 22);
			this->textBox3->TabIndex = 18;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(17, 397);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(152, 17);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Œredni czas wykonania";
			// 
			// sha_dataGridViewE
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->Format = L"N0";
			dataGridViewCellStyle2->NullValue = nullptr;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->sha_dataGridViewE->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->sha_dataGridViewE->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->sha_dataGridViewE->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8
			});
			this->sha_dataGridViewE->Dock = System::Windows::Forms::DockStyle::Top;
			this->sha_dataGridViewE->Location = System::Drawing::Point(3, 3);
			this->sha_dataGridViewE->Name = L"sha_dataGridViewE";
			this->sha_dataGridViewE->RowHeadersWidth = 51;
			this->sha_dataGridViewE->RowTemplate->Height = 24;
			this->sha_dataGridViewE->Size = System::Drawing::Size(346, 379);
			this->sha_dataGridViewE->TabIndex = 10;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->dataGridViewTextBoxColumn7->HeaderText = L"D³ugoœæ tekstu ";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 123;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Czas wykonania ";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(175, 422);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(171, 36);
			this->button12->TabIndex = 14;
			this->button12->Text = L"Wyczyœæ dane";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::sha_clear_grid);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(6, 422);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(163, 38);
			this->button13->TabIndex = 13;
			this->button13->Text = L"Poka¿ wykres";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::sha_show_chart);
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 492);
			this->splitter1->TabIndex = 6;
			this->splitter1->TabStop = false;
			// 
			// AES
			// 
			this->AES->Controls->Add(this->panelAesDec);
			this->AES->Controls->Add(this->aes_dat);
			this->AES->Controls->Add(this->panelAesEn);
			this->AES->Controls->Add(this->panel2);
			this->AES->Location = System::Drawing::Point(4, 25);
			this->AES->Name = L"AES";
			this->AES->Padding = System::Windows::Forms::Padding(3);
			this->AES->Size = System::Drawing::Size(1426, 498);
			this->AES->TabIndex = 1;
			this->AES->Text = L"AES";
			this->AES->UseVisualStyleBackColor = true;
			// 
			// aes_dat
			// 
			this->aes_dat->Controls->Add(this->gridEnc_aes);
			this->aes_dat->Controls->Add(this->gridDec_aes);
			this->aes_dat->Dock = System::Windows::Forms::DockStyle::Right;
			this->aes_dat->Location = System::Drawing::Point(1063, 3);
			this->aes_dat->Name = L"aes_dat";
			this->aes_dat->SelectedIndex = 0;
			this->aes_dat->Size = System::Drawing::Size(360, 492);
			this->aes_dat->TabIndex = 11;
			// 
			// gridEnc_aes
			// 
			this->gridEnc_aes->Controls->Add(this->textBox1);
			this->gridEnc_aes->Controls->Add(this->label13);
			this->gridEnc_aes->Controls->Add(this->aes_dataGridViewE);
			this->gridEnc_aes->Controls->Add(this->button5);
			this->gridEnc_aes->Controls->Add(this->button6);
			this->gridEnc_aes->Location = System::Drawing::Point(4, 25);
			this->gridEnc_aes->Name = L"gridEnc_aes";
			this->gridEnc_aes->Padding = System::Windows::Forms::Padding(3);
			this->gridEnc_aes->Size = System::Drawing::Size(352, 463);
			this->gridEnc_aes->TabIndex = 0;
			this->gridEnc_aes->Text = L"Szyfrowanie";
			this->gridEnc_aes->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(175, 387);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 22);
			this->textBox1->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 392);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(152, 17);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Œredni czas wykonania";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(175, 422);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(171, 36);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Wyczyœæ dane";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::aes_clear_grid);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(6, 422);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(163, 38);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Poka¿ wykres";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::aes_show_chart);
			// 
			// gridDec_aes
			// 
			this->gridDec_aes->Controls->Add(this->textBox5);
			this->gridDec_aes->Controls->Add(this->label17);
			this->gridDec_aes->Controls->Add(this->button14);
			this->gridDec_aes->Controls->Add(this->button15);
			this->gridDec_aes->Controls->Add(this->aes_dataGridViewD);
			this->gridDec_aes->Location = System::Drawing::Point(4, 25);
			this->gridDec_aes->Name = L"gridDec_aes";
			this->gridDec_aes->Padding = System::Windows::Forms::Padding(3);
			this->gridDec_aes->Size = System::Drawing::Size(352, 463);
			this->gridDec_aes->TabIndex = 1;
			this->gridDec_aes->Text = L"Deszyfrowanie";
			this->gridDec_aes->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(175, 395);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(171, 22);
			this->textBox5->TabIndex = 18;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 395);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(152, 17);
			this->label17->TabIndex = 17;
			this->label17->Text = L"Œredni czas wykonania";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(175, 420);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(171, 36);
			this->button14->TabIndex = 16;
			this->button14->Text = L"Wyczyœæ dane";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::aes_clear_grid);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(6, 420);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(163, 38);
			this->button15->TabIndex = 15;
			this->button15->Text = L"Poka¿ wykres";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::aes_show_chart);
			// 
			// aes_dataGridViewD
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->Format = L"N0";
			dataGridViewCellStyle3->NullValue = nullptr;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->aes_dataGridViewD->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->aes_dataGridViewD->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->aes_dataGridViewD->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6
			});
			this->aes_dataGridViewD->Dock = System::Windows::Forms::DockStyle::Top;
			this->aes_dataGridViewD->Location = System::Drawing::Point(3, 3);
			this->aes_dataGridViewD->Name = L"aes_dataGridViewD";
			this->aes_dataGridViewD->RowHeadersWidth = 51;
			this->aes_dataGridViewD->RowTemplate->Height = 24;
			this->aes_dataGridViewD->Size = System::Drawing::Size(346, 382);
			this->aes_dataGridViewD->TabIndex = 11;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->dataGridViewTextBoxColumn5->HeaderText = L"D³ugoœæ tekstu ";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 123;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Czas wykonania ";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// panelAesEn
			// 
			this->panelAesEn->AutoSize = true;
			this->panelAesEn->Controls->Add(this->generateKeyAES);
			this->panelAesEn->Controls->Add(this->keyTextBoxEn);
			this->panelAesEn->Controls->Add(this->label10);
			this->panelAesEn->Controls->Add(this->encryptAES);
			this->panelAesEn->Controls->Add(this->label4);
			this->panelAesEn->Controls->Add(this->aesTextBoxEn);
			this->panelAesEn->Controls->Add(this->label1);
			this->panelAesEn->Controls->Add(this->keySizeEn);
			this->panelAesEn->Controls->Add(this->checkUserTextEn);
			this->panelAesEn->Controls->Add(this->userEditBoxEn);
			this->panelAesEn->Controls->Add(this->checkFileTextEn);
			this->panelAesEn->Controls->Add(this->fileTextEn);
			this->panelAesEn->Controls->Add(this->button4);
			this->panelAesEn->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelAesEn->Location = System::Drawing::Point(3, 3);
			this->panelAesEn->Margin = System::Windows::Forms::Padding(0);
			this->panelAesEn->Name = L"panelAesEn";
			this->panelAesEn->Size = System::Drawing::Size(509, 492);
			this->panelAesEn->TabIndex = 9;
			// 
			// generateKeyAES
			// 
			this->generateKeyAES->AutoSize = true;
			this->generateKeyAES->Location = System::Drawing::Point(169, 230);
			this->generateKeyAES->Name = L"generateKeyAES";
			this->generateKeyAES->Size = System::Drawing::Size(155, 21);
			this->generateKeyAES->TabIndex = 20;
			this->generateKeyAES->Text = L"generowanie klucza";
			this->generateKeyAES->UseVisualStyleBackColor = true;
			// 
			// keyTextBoxEn
			// 
			this->keyTextBoxEn->Location = System::Drawing::Point(169, 202);
			this->keyTextBoxEn->Name = L"keyTextBoxEn";
			this->keyTextBoxEn->Size = System::Drawing::Size(337, 22);
			this->keyTextBoxEn->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(19, 209);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 17);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Klucz";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 458);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Zaszfrowany tekst w formacie HEX ";
			// 
			// aesTextBoxEn
			// 
			this->aesTextBoxEn->Location = System::Drawing::Point(21, 359);
			this->aesTextBoxEn->Multiline = true;
			this->aesTextBoxEn->Name = L"aesTextBoxEn";
			this->aesTextBoxEn->Size = System::Drawing::Size(484, 91);
			this->aesTextBoxEn->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 163);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"D³ugoœæ klucza";
			// 
			// keySizeEn
			// 
			this->keySizeEn->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->keySizeEn->FormatString = L"N2";
			this->keySizeEn->FormattingEnabled = true;
			this->keySizeEn->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"128", L"192", L"256" });
			this->keySizeEn->Location = System::Drawing::Point(169, 160);
			this->keySizeEn->Name = L"keySizeEn";
			this->keySizeEn->Size = System::Drawing::Size(337, 24);
			this->keySizeEn->TabIndex = 8;
			// 
			// checkUserTextEn
			// 
			this->checkUserTextEn->AutoSize = true;
			this->checkUserTextEn->Location = System::Drawing::Point(21, 74);
			this->checkUserTextEn->Name = L"checkUserTextEn";
			this->checkUserTextEn->Size = System::Drawing::Size(101, 21);
			this->checkUserTextEn->TabIndex = 7;
			this->checkUserTextEn->TabStop = true;
			this->checkUserTextEn->Text = L"Wpisz tekst";
			this->checkUserTextEn->UseVisualStyleBackColor = true;
			// 
			// userEditBoxEn
			// 
			this->userEditBoxEn->ForeColor = System::Drawing::SystemColors::Desktop;
			this->userEditBoxEn->Location = System::Drawing::Point(169, 74);
			this->userEditBoxEn->Multiline = true;
			this->userEditBoxEn->Name = L"userEditBoxEn";
			this->userEditBoxEn->Size = System::Drawing::Size(337, 75);
			this->userEditBoxEn->TabIndex = 6;
			// 
			// checkFileTextEn
			// 
			this->checkFileTextEn->AutoSize = true;
			this->checkFileTextEn->Checked = true;
			this->checkFileTextEn->Location = System::Drawing::Point(21, 4);
			this->checkFileTextEn->Name = L"checkFileTextEn";
			this->checkFileTextEn->Size = System::Drawing::Size(110, 21);
			this->checkFileTextEn->TabIndex = 4;
			this->checkFileTextEn->TabStop = true;
			this->checkFileTextEn->Text = L"Za³aduj tekst";
			this->checkFileTextEn->UseVisualStyleBackColor = true;
			// 
			// RSA
			// 
			this->RSA->Controls->Add(this->tabControl1);
			this->RSA->Controls->Add(this->panel4);
			this->RSA->Controls->Add(this->panel3);
			this->RSA->Controls->Add(this->button8);
			this->RSA->Location = System::Drawing::Point(4, 25);
			this->RSA->Name = L"RSA";
			this->RSA->Padding = System::Windows::Forms::Padding(3);
			this->RSA->Size = System::Drawing::Size(1426, 498);
			this->RSA->TabIndex = 2;
			this->RSA->Text = L"RSA";
			this->RSA->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tabControl1->Location = System::Drawing::Point(1049, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(374, 492);
			this->tabControl1->TabIndex = 13;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->dataGridView3);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(366, 463);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Szyfrowanie";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(175, 389);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(171, 22);
			this->textBox2->TabIndex = 18;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 394);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(152, 17);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Œredni czas wykonania";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(175, 422);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(171, 36);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Wyczyœæ dane";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::rsa_clear_grid);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(6, 422);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(163, 38);
			this->button11->TabIndex = 13;
			this->button11->Text = L"Poka¿ wykres";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::rsa_show_char);
			// 
			// dataGridView3
			// 
			dataGridViewCellStyle4->Format = L"N2";
			dataGridViewCellStyle4->NullValue = nullptr;
			this->dataGridView3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView3->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableAlwaysIncludeHeaderText;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->NullValue = nullptr;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn3,
					this->dataGridViewTextBoxColumn4
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->Format = L"N0";
			dataGridViewCellStyle6->NullValue = nullptr;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView3->Location = System::Drawing::Point(3, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(360, 377);
			this->dataGridView3->TabIndex = 10;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->dataGridViewTextBoxColumn3->HeaderText = L"D³ugoœæ tekstu ";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 134;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Czas wykonania ";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn4->Width = 142;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->rsa_dataGridViewD);
			this->tabPage2->Controls->Add(this->rsaClearGrid);
			this->tabPage2->Controls->Add(this->rsaChart);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(366, 463);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Deszyfrowanie";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(180, 393);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(171, 22);
			this->textBox4->TabIndex = 20;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(22, 398);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(152, 17);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Œredni czas wykonania";
			// 
			// rsa_dataGridViewD
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->Format = L"N0";
			dataGridViewCellStyle7->NullValue = nullptr;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->rsa_dataGridViewD->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->rsa_dataGridViewD->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->rsa_dataGridViewD->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10
			});
			this->rsa_dataGridViewD->Dock = System::Windows::Forms::DockStyle::Top;
			this->rsa_dataGridViewD->Location = System::Drawing::Point(3, 3);
			this->rsa_dataGridViewD->Name = L"rsa_dataGridViewD";
			this->rsa_dataGridViewD->RowHeadersWidth = 51;
			this->rsa_dataGridViewD->RowTemplate->Height = 24;
			this->rsa_dataGridViewD->Size = System::Drawing::Size(360, 381);
			this->rsa_dataGridViewD->TabIndex = 11;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->dataGridViewTextBoxColumn9->HeaderText = L"D³ugoœæ tekstu ";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 123;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Czas wykonania ";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 125;
			// 
			// rsaClearGrid
			// 
			this->rsaClearGrid->Location = System::Drawing::Point(202, 421);
			this->rsaClearGrid->Name = L"rsaClearGrid";
			this->rsaClearGrid->Size = System::Drawing::Size(158, 36);
			this->rsaClearGrid->TabIndex = 12;
			this->rsaClearGrid->Text = L"Wyczyœæ dane";
			this->rsaClearGrid->UseVisualStyleBackColor = true;
			this->rsaClearGrid->Click += gcnew System::EventHandler(this, &MyForm::rsa_clear_grid);
			// 
			// rsaChart
			// 
			this->rsaChart->Location = System::Drawing::Point(6, 421);
			this->rsaChart->Name = L"rsaChart";
			this->rsaChart->Size = System::Drawing::Size(193, 36);
			this->rsaChart->TabIndex = 11;
			this->rsaChart->Text = L"Poka¿ wykres";
			this->rsaChart->UseVisualStyleBackColor = true;
			this->rsaChart->Click += gcnew System::EventHandler(this, &MyForm::rsa_show_char);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->rsa_saveToFile);
			this->panel4->Controls->Add(this->rsa_loadPrivateKey);
			this->panel4->Controls->Add(this->rsa_privateKey);
			this->panel4->Controls->Add(this->rsa_usePrivateKey);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->passwordRSAdec);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->keyLenDec);
			this->panel4->Controls->Add(this->loadUserTextDec);
			this->panel4->Controls->Add(this->loadFileRSADec);
			this->panel4->Controls->Add(this->decBoxRSA);
			this->panel4->Controls->Add(this->pathRSADec);
			this->panel4->Controls->Add(this->chooseFileDec);
			this->panel4->Controls->Add(this->userTextDec);
			this->panel4->Controls->Add(this->decryptRSA);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(526, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(523, 492);
			this->panel4->TabIndex = 4;
			// 
			// rsa_saveToFile
			// 
			this->rsa_saveToFile->AutoSize = true;
			this->rsa_saveToFile->Location = System::Drawing::Point(232, 342);
			this->rsa_saveToFile->Name = L"rsa_saveToFile";
			this->rsa_saveToFile->Size = System::Drawing::Size(125, 21);
			this->rsa_saveToFile->TabIndex = 29;
			this->rsa_saveToFile->Text = L"Zapisz do pliku";
			this->rsa_saveToFile->UseVisualStyleBackColor = true;
			// 
			// rsa_loadPrivateKey
			// 
			this->rsa_loadPrivateKey->Location = System::Drawing::Point(364, 219);
			this->rsa_loadPrivateKey->Name = L"rsa_loadPrivateKey";
			this->rsa_loadPrivateKey->Size = System::Drawing::Size(113, 31);
			this->rsa_loadPrivateKey->TabIndex = 27;
			this->rsa_loadPrivateKey->Text = L"Wczytaj klucz";
			this->rsa_loadPrivateKey->UseVisualStyleBackColor = true;
			this->rsa_loadPrivateKey->Click += gcnew System::EventHandler(this, &MyForm::select_file_form_disk_OnClick);
			this->rsa_loadPrivateKey->Enter += gcnew System::EventHandler(this, &MyForm::rsa_loadPrivateKey_Enter);
			// 
			// rsa_privateKey
			// 
			this->rsa_privateKey->Location = System::Drawing::Point(139, 219);
			this->rsa_privateKey->Multiline = true;
			this->rsa_privateKey->Name = L"rsa_privateKey";
			this->rsa_privateKey->Size = System::Drawing::Size(218, 31);
			this->rsa_privateKey->TabIndex = 28;
			// 
			// rsa_usePrivateKey
			// 
			this->rsa_usePrivateKey->AutoSize = true;
			this->rsa_usePrivateKey->Location = System::Drawing::Point(140, 256);
			this->rsa_usePrivateKey->Name = L"rsa_usePrivateKey";
			this->rsa_usePrivateKey->Size = System::Drawing::Size(163, 21);
			this->rsa_usePrivateKey->TabIndex = 27;
			this->rsa_usePrivateKey->Text = L"WprowadŸ swój klucz";
			this->rsa_usePrivateKey->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 287);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Klucz";
			// 
			// passwordRSAdec
			// 
			this->passwordRSAdec->Location = System::Drawing::Point(139, 282);
			this->passwordRSAdec->Name = L"passwordRSAdec";
			this->passwordRSAdec->Size = System::Drawing::Size(121, 22);
			this->passwordRSAdec->TabIndex = 19;
			this->passwordRSAdec->Text = L"myPassword";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 180);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 17);
			this->label11->TabIndex = 12;
			this->label11->Text = L"D³ugoœæ klucza";
			// 
			// keyLenDec
			// 
			this->keyLenDec->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->keyLenDec->FormattingEnabled = true;
			this->keyLenDec->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1024", L"2048", L"3072", L"4096" });
			this->keyLenDec->Location = System::Drawing::Point(140, 177);
			this->keyLenDec->Name = L"keyLenDec";
			this->keyLenDec->Size = System::Drawing::Size(121, 24);
			this->keyLenDec->TabIndex = 11;
			// 
			// loadUserTextDec
			// 
			this->loadUserTextDec->AutoSize = true;
			this->loadUserTextDec->Location = System::Drawing::Point(18, 75);
			this->loadUserTextDec->Name = L"loadUserTextDec";
			this->loadUserTextDec->Size = System::Drawing::Size(101, 21);
			this->loadUserTextDec->TabIndex = 10;
			this->loadUserTextDec->TabStop = true;
			this->loadUserTextDec->Text = L"Wpisz tekst";
			this->loadUserTextDec->UseVisualStyleBackColor = true;
			// 
			// loadFileRSADec
			// 
			this->loadFileRSADec->AutoSize = true;
			this->loadFileRSADec->Checked = true;
			this->loadFileRSADec->Location = System::Drawing::Point(18, 13);
			this->loadFileRSADec->Name = L"loadFileRSADec";
			this->loadFileRSADec->Size = System::Drawing::Size(110, 21);
			this->loadFileRSADec->TabIndex = 9;
			this->loadFileRSADec->TabStop = true;
			this->loadFileRSADec->Text = L"Za³aduj tekst";
			this->loadFileRSADec->UseVisualStyleBackColor = true;
			// 
			// decBoxRSA
			// 
			this->decBoxRSA->ForeColor = System::Drawing::SystemColors::Desktop;
			this->decBoxRSA->Location = System::Drawing::Point(18, 370);
			this->decBoxRSA->Multiline = true;
			this->decBoxRSA->Name = L"decBoxRSA";
			this->decBoxRSA->Size = System::Drawing::Size(459, 90);
			this->decBoxRSA->TabIndex = 8;
			// 
			// pathRSADec
			// 
			this->pathRSADec->Location = System::Drawing::Point(139, 12);
			this->pathRSADec->Multiline = true;
			this->pathRSADec->Name = L"pathRSADec";
			this->pathRSADec->Size = System::Drawing::Size(337, 21);
			this->pathRSADec->TabIndex = 7;
			// 
			// chooseFileDec
			// 
			this->chooseFileDec->Location = System::Drawing::Point(140, 39);
			this->chooseFileDec->Name = L"chooseFileDec";
			this->chooseFileDec->Size = System::Drawing::Size(337, 26);
			this->chooseFileDec->TabIndex = 6;
			this->chooseFileDec->Text = L"Wybierz plik z dysku";
			this->chooseFileDec->UseVisualStyleBackColor = true;
			this->chooseFileDec->Click += gcnew System::EventHandler(this, &MyForm::select_file_form_disk_OnClick);
			this->chooseFileDec->Enter += gcnew System::EventHandler(this, &MyForm::chooseFileDec_Enter);
			// 
			// userTextDec
			// 
			this->userTextDec->Location = System::Drawing::Point(140, 75);
			this->userTextDec->Multiline = true;
			this->userTextDec->Name = L"userTextDec";
			this->userTextDec->Size = System::Drawing::Size(337, 82);
			this->userTextDec->TabIndex = 2;
			// 
			// decryptRSA
			// 
			this->decryptRSA->Location = System::Drawing::Point(18, 338);
			this->decryptRSA->Name = L"decryptRSA";
			this->decryptRSA->Size = System::Drawing::Size(206, 26);
			this->decryptRSA->TabIndex = 0;
			this->decryptRSA->Text = L"decrypt RSA";
			this->decryptRSA->UseVisualStyleBackColor = true;
			this->decryptRSA->Click += gcnew System::EventHandler(this, &MyForm::decryptRSA_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->rsa_generateKey);
			this->panel3->Controls->Add(this->rsa_loadKeyE);
			this->panel3->Controls->Add(this->rsa_loadedKeyE);
			this->panel3->Controls->Add(this->passw);
			this->panel3->Controls->Add(this->passwordRSAEnc);
			this->panel3->Controls->Add(this->keyLen);
			this->panel3->Controls->Add(this->keyLenEnc);
			this->panel3->Controls->Add(this->loadTextUserEnc);
			this->panel3->Controls->Add(this->loadFileRSAEnc);
			this->panel3->Controls->Add(this->encBoxRSA);
			this->panel3->Controls->Add(this->pathRSAEnc);
			this->panel3->Controls->Add(this->chooseFileEnc);
			this->panel3->Controls->Add(this->userTextEnc);
			this->panel3->Controls->Add(this->encryptRSA);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(523, 492);
			this->panel3->TabIndex = 3;
			// 
			// rsa_generateKey
			// 
			this->rsa_generateKey->AutoSize = true;
			this->rsa_generateKey->Checked = true;
			this->rsa_generateKey->CheckState = System::Windows::Forms::CheckState::Checked;
			this->rsa_generateKey->Location = System::Drawing::Point(140, 252);
			this->rsa_generateKey->Name = L"rsa_generateKey";
			this->rsa_generateKey->Size = System::Drawing::Size(155, 21);
			this->rsa_generateKey->TabIndex = 26;
			this->rsa_generateKey->Text = L"generowanie klucza";
			this->rsa_generateKey->UseVisualStyleBackColor = true;
			// 
			// rsa_loadKeyE
			// 
			this->rsa_loadKeyE->Location = System::Drawing::Point(364, 215);
			this->rsa_loadKeyE->Name = L"rsa_loadKeyE";
			this->rsa_loadKeyE->Size = System::Drawing::Size(113, 31);
			this->rsa_loadKeyE->TabIndex = 23;
			this->rsa_loadKeyE->Text = L"Wczytaj klucz";
			this->rsa_loadKeyE->UseVisualStyleBackColor = true;
			this->rsa_loadKeyE->Click += gcnew System::EventHandler(this, &MyForm::select_file_form_disk_OnClick);
			this->rsa_loadKeyE->Enter += gcnew System::EventHandler(this, &MyForm::rsa_loadKeyE_Enter);
			// 
			// rsa_loadedKeyE
			// 
			this->rsa_loadedKeyE->Location = System::Drawing::Point(140, 215);
			this->rsa_loadedKeyE->Multiline = true;
			this->rsa_loadedKeyE->Name = L"rsa_loadedKeyE";
			this->rsa_loadedKeyE->Size = System::Drawing::Size(218, 31);
			this->rsa_loadedKeyE->TabIndex = 21;
			// 
			// passw
			// 
			this->passw->AutoSize = true;
			this->passw->Location = System::Drawing::Point(15, 289);
			this->passw->Name = L"passw";
			this->passw->Size = System::Drawing::Size(42, 17);
			this->passw->TabIndex = 20;
			this->passw->Text = L"Klucz";
			// 
			// passwordRSAEnc
			// 
			this->passwordRSAEnc->Location = System::Drawing::Point(140, 284);
			this->passwordRSAEnc->Name = L"passwordRSAEnc";
			this->passwordRSAEnc->Size = System::Drawing::Size(121, 22);
			this->passwordRSAEnc->TabIndex = 19;
			this->passwordRSAEnc->Text = L"myPassword";
			// 
			// keyLen
			// 
			this->keyLen->AutoSize = true;
			this->keyLen->Location = System::Drawing::Point(3, 180);
			this->keyLen->Name = L"keyLen";
			this->keyLen->Size = System::Drawing::Size(103, 17);
			this->keyLen->TabIndex = 12;
			this->keyLen->Text = L"D³ugoœæ klucza";
			// 
			// keyLenEnc
			// 
			this->keyLenEnc->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->keyLenEnc->FormattingEnabled = true;
			this->keyLenEnc->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1024", L"2048", L"3072", L"4096" });
			this->keyLenEnc->Location = System::Drawing::Point(140, 177);
			this->keyLenEnc->Name = L"keyLenEnc";
			this->keyLenEnc->Size = System::Drawing::Size(337, 24);
			this->keyLenEnc->TabIndex = 11;
			// 
			// loadTextUserEnc
			// 
			this->loadTextUserEnc->AutoSize = true;
			this->loadTextUserEnc->Location = System::Drawing::Point(18, 75);
			this->loadTextUserEnc->Name = L"loadTextUserEnc";
			this->loadTextUserEnc->Size = System::Drawing::Size(101, 21);
			this->loadTextUserEnc->TabIndex = 10;
			this->loadTextUserEnc->Text = L"Wpisz tekst";
			this->loadTextUserEnc->UseVisualStyleBackColor = true;
			// 
			// loadFileRSAEnc
			// 
			this->loadFileRSAEnc->AutoSize = true;
			this->loadFileRSAEnc->Location = System::Drawing::Point(18, 13);
			this->loadFileRSAEnc->Name = L"loadFileRSAEnc";
			this->loadFileRSAEnc->Size = System::Drawing::Size(110, 21);
			this->loadFileRSAEnc->TabIndex = 9;
			this->loadFileRSAEnc->Text = L"Za³aduj tekst";
			this->loadFileRSAEnc->UseVisualStyleBackColor = true;
			// 
			// encBoxRSA
			// 
			this->encBoxRSA->ForeColor = System::Drawing::SystemColors::Desktop;
			this->encBoxRSA->Location = System::Drawing::Point(18, 370);
			this->encBoxRSA->Multiline = true;
			this->encBoxRSA->Name = L"encBoxRSA";
			this->encBoxRSA->Size = System::Drawing::Size(459, 90);
			this->encBoxRSA->TabIndex = 8;
			// 
			// pathRSAEnc
			// 
			this->pathRSAEnc->Location = System::Drawing::Point(140, 12);
			this->pathRSAEnc->Multiline = true;
			this->pathRSAEnc->Name = L"pathRSAEnc";
			this->pathRSAEnc->Size = System::Drawing::Size(337, 21);
			this->pathRSAEnc->TabIndex = 7;
			// 
			// chooseFileEnc
			// 
			this->chooseFileEnc->Location = System::Drawing::Point(140, 39);
			this->chooseFileEnc->Name = L"chooseFileEnc";
			this->chooseFileEnc->Size = System::Drawing::Size(337, 26);
			this->chooseFileEnc->TabIndex = 6;
			this->chooseFileEnc->Text = L"Wybierz plik z dysku";
			this->chooseFileEnc->UseVisualStyleBackColor = true;
			this->chooseFileEnc->Click += gcnew System::EventHandler(this, &MyForm::select_file_form_disk_OnClick);
			this->chooseFileEnc->Enter += gcnew System::EventHandler(this, &MyForm::chooseFileEnc_Enter);
			// 
			// userTextEnc
			// 
			this->userTextEnc->Location = System::Drawing::Point(140, 75);
			this->userTextEnc->Multiline = true;
			this->userTextEnc->Name = L"userTextEnc";
			this->userTextEnc->Size = System::Drawing::Size(337, 82);
			this->userTextEnc->TabIndex = 2;
			// 
			// encryptRSA
			// 
			this->encryptRSA->Location = System::Drawing::Point(18, 338);
			this->encryptRSA->Name = L"encryptRSA";
			this->encryptRSA->Size = System::Drawing::Size(206, 26);
			this->encryptRSA->TabIndex = 0;
			this->encryptRSA->Text = L"ecnrypt RSA";
			this->encryptRSA->UseVisualStyleBackColor = true;
			this->encryptRSA->Click += gcnew System::EventHandler(this, &MyForm::encryptRSA_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(384, 108);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 1;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// rsaTab_generateKeys
			// 
			this->rsaTab_generateKeys->Controls->Add(this->panel6);
			this->rsaTab_generateKeys->Location = System::Drawing::Point(4, 25);
			this->rsaTab_generateKeys->Name = L"rsaTab_generateKeys";
			this->rsaTab_generateKeys->Padding = System::Windows::Forms::Padding(3);
			this->rsaTab_generateKeys->Size = System::Drawing::Size(1426, 498);
			this->rsaTab_generateKeys->TabIndex = 3;
			this->rsaTab_generateKeys->Text = L"Generowanie kluczy RSA";
			this->rsaTab_generateKeys->UseVisualStyleBackColor = true;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel6->Location = System::Drawing::Point(3, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1420, 492);
			this->panel6->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->rsagen_generatekey);
			this->panel7->Controls->Add(this->rsagen_usePassword);
			this->panel7->Controls->Add(this->rsagen_password);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Controls->Add(this->rsagen_keylen);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(497, 492);
			this->panel7->TabIndex = 25;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(217, 15);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(167, 17);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Generowanie kluczy RSA";
			// 
			// rsagen_generatekey
			// 
			this->rsagen_generatekey->Location = System::Drawing::Point(121, 153);
			this->rsagen_generatekey->Name = L"rsagen_generatekey";
			this->rsagen_generatekey->Size = System::Drawing::Size(305, 58);
			this->rsagen_generatekey->TabIndex = 23;
			this->rsagen_generatekey->Text = L"Generuj klucze";
			this->rsagen_generatekey->UseVisualStyleBackColor = true;
			this->rsagen_generatekey->Click += gcnew System::EventHandler(this, &MyForm::rsagen_generatekey_Click);
			// 
			// rsagen_usePassword
			// 
			this->rsagen_usePassword->AutoSize = true;
			this->rsagen_usePassword->Location = System::Drawing::Point(121, 125);
			this->rsagen_usePassword->Name = L"rsagen_usePassword";
			this->rsagen_usePassword->Size = System::Drawing::Size(169, 21);
			this->rsagen_usePassword->TabIndex = 24;
			this->rsagen_usePassword->Text = L"Szyfruj klucz prywatny";
			this->rsagen_usePassword->UseVisualStyleBackColor = true;
			// 
			// rsagen_password
			// 
			this->rsagen_password->Location = System::Drawing::Point(121, 97);
			this->rsagen_password->Name = L"rsagen_password";
			this->rsagen_password->Size = System::Drawing::Size(305, 22);
			this->rsagen_password->TabIndex = 22;
			this->rsagen_password->Text = L"myPassword";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 17);
			this->label2->TabIndex = 13;
			this->label2->Text = L"D³ugoœæ klucza";
			// 
			// rsagen_keylen
			// 
			this->rsagen_keylen->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->rsagen_keylen->FormattingEnabled = true;
			this->rsagen_keylen->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1024", L"2048", L"3072", L"4096" });
			this->rsagen_keylen->Location = System::Drawing::Point(121, 48);
			this->rsagen_keylen->Name = L"rsagen_keylen";
			this->rsagen_keylen->Size = System::Drawing::Size(305, 24);
			this->rsagen_keylen->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Klucz";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(280, 565);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 30;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1434, 527);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->rsa_dat);
			this->MinimumSize = System::Drawing::Size(500, 500);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aes_dataGridViewE))->EndInit();
			this->panelAesDec->ResumeLayout(false);
			this->panelAesDec->PerformLayout();
			this->rsa_dat->ResumeLayout(false);
			this->SHA256->ResumeLayout(false);
			this->SHA256->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->sha_dat->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sha_dataGridViewE))->EndInit();
			this->AES->ResumeLayout(false);
			this->AES->PerformLayout();
			this->aes_dat->ResumeLayout(false);
			this->gridEnc_aes->ResumeLayout(false);
			this->gridEnc_aes->PerformLayout();
			this->gridDec_aes->ResumeLayout(false);
			this->gridDec_aes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aes_dataGridViewD))->EndInit();
			this->panelAesEn->ResumeLayout(false);
			this->panelAesEn->PerformLayout();
			this->RSA->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rsa_dataGridViewD))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->rsaTab_generateKeys->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void clearBox_OnClick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void select_file_form_disk_OnClick(System::Object^ sender, System::EventArgs^ e);	
	private: System::Void encryptRSA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chooseFileEnc_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chooseFileDec_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void decryptRSA_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void encryptAES_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void decryptAES_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_Enter(System::Object^ sender, System::EventArgs^ e);

private: System::Void button7_Enter(System::Object^ sender, System::EventArgs^ e);

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void aes_show_chart(System::Object^ sender, System::EventArgs^ e);

private: System::Void aes_clear_grid(System::Object^ sender, System::EventArgs^ e);
	 
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rsa_show_char(System::Object^ sender, System::EventArgs^ e);
private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rsa_clear_grid(System::Object^ sender, System::EventArgs^ e);


private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void generate_sha_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void sha_show_chart(System::Object^ sender, System::EventArgs^ e);

private: System::Void sha_clear_grid(System::Object^ sender, System::EventArgs^ e);

private: System::Void button3_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void rsa_loadKeyE_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void rsagen_generatekey_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void rsa_loadPrivateKey_Enter(System::Object^ sender, System::EventArgs^ e);
};
}
