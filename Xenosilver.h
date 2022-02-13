#pragma once
#include "D:\MontsUnpackerCPP\package.h"
#include "D:\MontsUnpackerCPP\helpers.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include "D:\MontevenDynamicExtractor\dxgiformat.h"

namespace Xenosilver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Security::Permissions;
	using namespace Microsoft::Win32;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;


	public:


	public: System::Windows::Forms::TextBox^ textBox1;
	private:


	private:


	public:
		String^ PackagesPath = "";
		String^ PackageID = "";
		String^ Hash = "";
		uint16_t DxgiType;
		List<String^>^ items = gcnew List<String^>();
		
	private: System::Windows::Forms::ListBox^ listBox1;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Button^ button2;
	private:


	public: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog2;
	public: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ widthLabel;
	public:
	private: System::Windows::Forms::Label^ heightLabel;
	private: System::Windows::Forms::TextBox^ searchBox;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


	private:

	private: System::ComponentModel::IContainer^ components;
	public:

	public:
	private:

	private:
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->widthLabel = (gcnew System::Windows::Forms::Label());
			this->heightLabel = (gcnew System::Windows::Forms::Label());
			this->searchBox = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(604, 893);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 61);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Extract Image";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->Description = L"Select your Destiny 2 packages path.";
			this->folderBrowserDialog1->RootFolder = System::Environment::SpecialFolder::MyComputer;
			this->folderBrowserDialog1->ShowNewFolderButton = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Location = System::Drawing::Point(303, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 26);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"Package ID";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyUp);
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(150, 966);
			this->listBox1->TabIndex = 8;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox1->Location = System::Drawing::Point(169, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(862, 843);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(421, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Selected Hash: ";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(882, 893);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 61);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Set Packages Path";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// folderBrowserDialog2
			// 
			this->folderBrowserDialog2->Description = L"Select Output Path.";
			this->folderBrowserDialog2->RootFolder = System::Environment::SpecialFolder::MyComputer;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(753, 893);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 61);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Get Image List";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// widthLabel
			// 
			this->widthLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->widthLabel->AutoSize = true;
			this->widthLabel->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->widthLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->widthLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->widthLabel->Location = System::Drawing::Point(156, 893);
			this->widthLabel->Name = L"widthLabel";
			this->widthLabel->Size = System::Drawing::Size(69, 25);
			this->widthLabel->TabIndex = 14;
			this->widthLabel->Text = L"Width:";
			// 
			// heightLabel
			// 
			this->heightLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->heightLabel->AutoSize = true;
			this->heightLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->heightLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->heightLabel->Location = System::Drawing::Point(156, 918);
			this->heightLabel->Name = L"heightLabel";
			this->heightLabel->Size = System::Drawing::Size(74, 25);
			this->heightLabel->TabIndex = 15;
			this->heightLabel->Text = L"Height:";
			// 
			// searchBox
			// 
			this->searchBox->Location = System::Drawing::Point(168, 11);
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(129, 26);
			this->searchBox->TabIndex = 16;
			this->searchBox->Text = L"Search for file";
			this->searchBox->Click += gcnew System::EventHandler(this, &MyForm::searchBox_Click);
			this->searchBox->TextChanged += gcnew System::EventHandler(this, &MyForm::searchBox_TextChanged);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(493, 893);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 60);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Extract Package";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(865, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(178, 38);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Set Output Path";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1043, 966);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->searchBox);
			this->Controls->Add(this->heightLabel);
			this->Controls->Add(this->widthLabel);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Destiny 2 Image Previewer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		MyForm::PackageID = textBox1->Text->ToString();
	}
	public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		listBox1->Items->Clear();
		items->Clear();

		msclr::interop::marshal_context context;
		if (Registry::CurrentUser->OpenSubKey("d2TextureViewer")->GetValue("PackagesPath") != nullptr)
			MyForm::PackagesPath = Registry::CurrentUser->OpenSubKey("d2TextureViewer")->GetValue("PackagesPath")->ToString();
		std::string pkgsPath = context.marshal_as<std::string>(MyForm::PackagesPath);
		std::string pkgID;
		if (MyForm::PackageID != "")
			pkgID = context.marshal_as<std::string>(MyForm::PackageID);
		else {
			MessageBox::Show("Set Package ID first.");
			Application::Restart();
		}
		Package pkg(pkgID, pkgsPath);
		pkg.readHeader();
		pkg.getEntryTable();
		for (int i = 0; i < pkg.entries.size(); i++)
		{
			Entry entry = pkg.entries[i];
			if ((entry.numType == 40 || entry.numType == 48) && entry.numSubType == 1) {
				String^ DataHash = context.marshal_as<String^>(entry.reference);
				listBox1->Items->Add(context.marshal_as<String^>(getFileFromHash(context.marshal_as<std::string>(DataHash)))->ToUpper());
				items->Add(context.marshal_as<String^>(getFileFromHash(context.marshal_as<std::string>(DataHash)))->ToUpper());
			}
		}
		//MessageBox::Show(items->Count.ToString());
	}
	private: System::Void listBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		if (IO::File::Exists("temp.png")) {
			delete pictureBox1->Image;
			IO::File::Delete("temp.png");
		}
		String^ ClickedOn = listBox1->SelectedItem->ToString();
		MyForm::Hash = ClickedOn;
		label1->Text = "Selected Hash: " + context.marshal_as<String^>(getHashFromFile(context.marshal_as<std::string>(ClickedOn)));
		std::string pkgsPath = context.marshal_as<std::string>(MyForm::PackagesPath);
		std::string pkgID = context.marshal_as<std::string>(MyForm::PackageID);
		std::string hash = getReferenceFromHash(getHashFromFile(context.marshal_as<std::string>(ClickedOn)), pkgsPath);
		int fileSize = 0;
		unsigned char* data = nullptr;
		pkgID = getPkgID(hash);
		Package pkg(pkgID, pkgsPath);
		std::string datahash = getReferenceFromHash(hash, pkgsPath);
		uint16_t width, height, dxgi_type;
		data = pkg.getEntryData(datahash, fileSize);
		if (data == nullptr || sizeof(data) == 0) {
			MessageBox::Show("Data sized 0. Exiting");
			exit(120);
		}
		uint32_t datsize;
		memcpy((char*)&datsize, data, 4);
		memcpy((char*)&dxgi_type, data + 4, 2);
		memcpy((char*)&width, data + 0x22, 2);
		memcpy((char*)&height, data + 0x24, 2);
		delete[] data;
		fileSize = 0;
		pkg.readHeader();
		pkg.getEntryTable();
		Entry dataEntry = pkg.entries[(hexStrToUint32(hash) % 8192)];
		data = new unsigned char[dataEntry.fileSize];
		data = pkg.getBufferFromEntry(dataEntry);
		if (data == nullptr || sizeof(data) == 0) {
			MessageBox::Show("Data sized 0. Exiting");
			exit(120);
		}
		FILE* dFile;
		fopen_s(&dFile, "temp.bin", "wb");
		fwrite(data, dataEntry.fileSize, 1, dFile);
		fclose(dFile);
		delete[] data;
		if (!IO::File::Exists("temp.png")) {
			String^ rtArgs = "/C RawtexCmd.exe temp.bin " + dxgi_type.ToString() + " 0 " + width.ToString() + " " + height.ToString();
			Diagnostics::Process^ proc1 = gcnew Diagnostics::Process();
			proc1->StartInfo->Arguments = rtArgs;
			proc1->StartInfo->FileName = "cmd.exe";
			proc1->StartInfo->WindowStyle = Diagnostics::ProcessWindowStyle::Hidden;
			proc1->StartInfo->CreateNoWindow = true;
			proc1->Start();
			proc1->WaitForExit();
			if (dxgi_type == 28)
				dxgi_type += 1;
			MyForm::DxgiType = dxgi_type;
			IO::File::Delete("temp.bin");
			IO::File::Delete("temp.dds");
			widthLabel->Text = "Width: " + width.ToString();
			heightLabel->Text = "Height: " + height.ToString();
			pictureBox1->Image = Image::FromFile("temp.png");
		}
		if (IO::File::Exists("temp.bin"))
			IO::File::Delete("temp.bin");
		if (IO::File::Exists("temp.dds"))
			IO::File::Delete("temp.dds");
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string dxgiFormat;
		dxgiFormat = DXGI_FORMAT[MyForm::DxgiType];
		String^ dxgistring = context.marshal_as<String^>(dxgiFormat);
		folderBrowserDialog2->ShowDialog();
		String^ OutputPath = folderBrowserDialog2->SelectedPath;
		RegistryKey^ OutputKey = Registry::CurrentUser->OpenSubKey("d2TextureViewer", true);
		OutputKey->SetValue("OutputPath", folderBrowserDialog2->SelectedPath);
		String^ OutputName = OutputPath + "\\" + MyForm::Hash + ".png";
		String^ txArgs = "/C texconv.exe \"temp.png\" -nologo -o \"" + OutputPath + "\" -y -srgb -ft PNG -f " + dxgistring;
		Diagnostics::Process^ proc1 = gcnew Diagnostics::Process();
		proc1->StartInfo->Arguments = txArgs;
		proc1->StartInfo->FileName = "cmd.exe";
		proc1->StartInfo->WindowStyle = Diagnostics::ProcessWindowStyle::Hidden;
		proc1->StartInfo->CreateNoWindow = true;
		proc1->Start();
		proc1->WaitForExit();
		IO::File::Copy(OutputPath + "/temp.png", OutputName, true);
		if (IO::File::Exists(OutputPath + "/temp.png"))
			IO::File::Delete(OutputPath + "/temp.png");
	}
	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			folderBrowserDialog1->ShowDialog();
			MyForm::PackagesPath = folderBrowserDialog1->SelectedPath;
			if (Registry::CurrentUser->OpenSubKey("d2TextureViewer") == nullptr)
				Registry::CurrentUser->CreateSubKey("d2TextureViewer");
			Registry::CurrentUser->OpenSubKey("d2TextureViewer", true)->SetValue("PackagesPath", folderBrowserDialog1->SelectedPath);
	}
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Package ID")
			textBox1->Text = "";
	}
	private: System::Void searchBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (searchBox->Text == "Search for file")
			searchBox->Text = "";
	}
	private: System::Void searchBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		String^ Search = searchBox->Text;
		for each (String ^ str in items) {
			if (str->ToUpper()->Contains(searchBox->Text->ToUpper()))
				listBox1->Items->Add(str);
		}
	}
	private: System::Void textBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
		{
			button3_Click(sender, e);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string pkgsPath = context.marshal_as<std::string>(MyForm::PackagesPath);
		std::string pkgID = context.marshal_as<std::string>(MyForm::PackageID);
		MessageBox::Show("Extracting package " + MyForm::PackageID);
		for each (String ^ str in items) {
			if (str != "") {
				std::string hash = getReferenceFromHash(getHashFromFile(context.marshal_as<std::string>(str)), pkgsPath);
				int fileSize = 0;
				unsigned char* data = nullptr;
				pkgID = getPkgID(hash);
				Package pkg(pkgID, pkgsPath);
				std::string datahash = getReferenceFromHash(hash, pkgsPath);
				uint16_t width, height, dxgi_type;
				data = pkg.getEntryData(datahash, fileSize);
				if (data == nullptr || sizeof(data) == 0) {
					MessageBox::Show("Data sized 0. Exiting");
					exit(120);
				}
				uint32_t datsize;
				memcpy((char*)&datsize, data, 4);
				memcpy((char*)&dxgi_type, data + 4, 2);
				memcpy((char*)&width, data + 0x22, 2);
				memcpy((char*)&height, data + 0x24, 2);
				delete[] data;
				fileSize = 0;
				pkg.readHeader();
				pkg.getEntryTable();
				Entry dataEntry = pkg.entries[(hexStrToUint32(hash) % 8192)];
				data = new unsigned char[dataEntry.fileSize];
				data = pkg.getBufferFromEntry(dataEntry);
				if (data == nullptr || sizeof(data) == 0) {
					MessageBox::Show("Data sized 0. Exiting");
					exit(120);
				}
				FILE* dFile;
				fopen_s(&dFile, "temp.bin", "wb");
				fwrite(data, dataEntry.fileSize, 1, dFile);
				fclose(dFile);
				delete[] data;
				String^ rtArgs = "/C RawtexCmd.exe temp.bin " + dxgi_type.ToString() + " 0 " + width.ToString() + " " + height.ToString();
				Diagnostics::Process^ proc1 = gcnew Diagnostics::Process();
				proc1->StartInfo->Arguments = rtArgs;
				proc1->StartInfo->FileName = "cmd.exe";
				proc1->StartInfo->WindowStyle = Diagnostics::ProcessWindowStyle::Hidden;
				proc1->StartInfo->CreateNoWindow = true;
				proc1->Start();
				proc1->WaitForExit();
				if (dxgi_type == 28)
					dxgi_type += 1;
				//MyForm::DxgiType = dxgi_type;
				if (IO::File::Exists("temp.bin"))
					IO::File::Delete("temp.bin");
				if (IO::File::Exists("temp.dds"))
					IO::File::Delete("temp.dds");
				std::string dxgiFormat;
				dxgiFormat = DXGI_FORMAT[dxgi_type];
				String^ dxgistring = context.marshal_as<String^>(dxgiFormat);
				if (Registry::CurrentUser->OpenSubKey("d2TextureViewer")->GetValue("OutputPath") == nullptr) {
					folderBrowserDialog2->ShowDialog();
					String^ OutputPath = folderBrowserDialog2->SelectedPath;
					RegistryKey^ OutputKey = Registry::CurrentUser->OpenSubKey("d2TextureViewer", true);
					OutputKey->SetValue("OutputPath", folderBrowserDialog2->SelectedPath);
				}
				String^ OutputPath = Registry::CurrentUser->OpenSubKey("d2TextureViewer")->GetValue("OutputPath")->ToString();
				String^ OutputName = OutputPath + "\\" + str + ".png";
				String^ txArgs = "/C texconv.exe \"temp.png\" -nologo -o \"" + OutputPath + "\" -y -srgb -ft PNG -f " + dxgistring;
				Diagnostics::Process^ proc2 = gcnew Diagnostics::Process();
				proc2->StartInfo->Arguments = txArgs;
				proc2->StartInfo->FileName = "cmd.exe";
				proc2->StartInfo->WindowStyle = Diagnostics::ProcessWindowStyle::Hidden;
				proc2->StartInfo->CreateNoWindow = true;
				proc2->Start();
				proc2->WaitForExit();
				IO::File::Copy(OutputPath + "\\temp.png", OutputName, true);
				if (IO::File::Exists(OutputPath + "\\temp.png"))
					IO::File::Delete(OutputPath + "\\temp.png");
			}
		}
		MessageBox::Show("Finished extracting " + items->Count.ToString() + " images.");
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		folderBrowserDialog2->ShowDialog();
		if (Registry::CurrentUser->OpenSubKey("d2TextureViewer") == nullptr)
			Registry::CurrentUser->CreateSubKey("d2TextureViewer");
		Registry::CurrentUser->OpenSubKey("d2TextureViewer", true)->SetValue("OutputPath", folderBrowserDialog2->SelectedPath);
	}
};
}
