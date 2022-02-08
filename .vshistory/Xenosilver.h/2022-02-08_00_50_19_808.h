#pragma once
#include "D:\MontsUnpackerCPP\package.h"
#include "D:\MontsUnpackerCPP\helpers.h"
#include <string>
#include <msclr\marshal_cppstd.h>

namespace Xenosilver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	public: System::Windows::Forms::Button^ button3;

	private:


	public:
		String^ PackagesPath;
		String^ PackageID;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TextBox^ textBox2;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(888, 905);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 49);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Extract Image";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->Description = L"Select your Destiny 2 packages path.";
			this->folderBrowserDialog1->RootFolder = System::Environment::SpecialFolder::MyComputer;
			this->folderBrowserDialog1->ShowNewFolderButton = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Location = System::Drawing::Point(12, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 26);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"Package ID";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(12, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 61);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Get List of Images";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->UseWaitCursor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(17, 220);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(146, 684);
			this->listBox1->TabIndex = 8;
			this->listBox1->Click += gcnew System::EventHandler(this, &MyForm::listBox1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 23);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 26);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"Select Packages Path";
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1043, 966);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		folderBrowserDialog1->ShowDialog();
		MyForm::PackagesPath = folderBrowserDialog1->SelectedPath;
		textBox2->Text = folderBrowserDialog1->SelectedPath;
	}
	public: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		MyForm::PackageID = textBox1->Text->ToString();
	}
	public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string pkgsPath = context.marshal_as<std::string>(MyForm::PackagesPath);
		std::string pkgID = context.marshal_as<std::string>(MyForm::PackageID);
		//MessageBox::Show(MyForm::PackagesPath + ", " + MyForm::PackageID);
		Package pkg(pkgID, pkgsPath);
		pkg.readHeader();
		//String^ head = "PatchID: " + pkg.header.patchID + " Entry Table Offset: " + pkg.header.entryTableOffset + " Entry Table Size: " + pkg.header.entryTableSize;
		//MessageBox::Show(head);
		pkg.getEntryTable();
		//MessageBox::Show(pkg.entries.size().ToString());
		for (int i = 0; i < pkg.entries.size(); i++)
		{
			Entry entry = pkg.entries[i];
			if ((entry.numType == 40 || entry.numType == 48) && entry.numSubType == 1) {
				String^ DataHash = context.marshal_as<String^>(entry.reference);
				listBox1->Items->Add(DataHash->ToUpper());
			}
		}
	}
	private: System::Void listBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ClickedOn = listBox1->SelectedItem->ToString();
		msclr::interop::marshal_context context;
		std::string pkgsPath = context.marshal_as<std::string>(MyForm::PackagesPath);
		std::string pkgID = context.marshal_as<std::string>(MyForm::PackageID);
		std::string hash = context.marshal_as<std::string>(ClickedOn);

		int fileSize = 0;
		unsigned char* data = nullptr;
		std::string datahash = getReferenceFromHash(hash, pkgsPath);

		pkgID = getPkgID(datahash);

		Package pkg(pkgID, pkgsPath);
		String^ hash2 = context.marshal_as<String^>(datahash);
		String^ pack = context.marshal_as<String^>(pkgsPath);
		String^ pgid = context.marshal_as<String^>(pkgID);
		MessageBox::Show(pack + ", " + pgid + ", " + hash2);


		uint16_t width, height, dxgi_type;

		data = pkg.getEntryData(hash, fileSize);

		if (data == nullptr || sizeof(data) == 0) {
			MessageBox::Show("Data sized 0. Exiting");
			exit(120);
		}
		int datsize;
		MessageBox::Show("Size: " + fileSize.ToString() + " unsigned char* sizeof: " + sizeof(data));
		memcpy((char*)&datsize, data, 4);
		memcpy((char*)&dxgi_type, data + 4, 2);
		memcpy((char*)&width, data + 0x22, 2);
		memcpy((char*)&height, data + 0x24, 2);
		delete[] data;
		MessageBox::Show("Type: " + dxgi_type.ToString() + " Width: " + width.ToString() + " Height: " + height.ToString());
		fileSize = 0;
		unsigned char* datdata = nullptr;
		Entry dataEntry = pkg.entries[(hexStrToUint32(hash)%8192)];
		datdata = pkg.getBufferFromEntry(dataEntry);
		MessageBox::Show("dathash: " + ClickedOn + " filesize? " + dataEntry.fileSize.ToString());

		if (data == nullptr || sizeof(data) == 0) {
			MessageBox::Show("Data sized 0. Exiting");
			exit(120);
		}

		std::filesystem::create_directory("expath_temp");
		MessageBox::Show(datsize.ToString());
		FILE* dFile;
		fopen_s(&dFile, "expath_temp/temp.dat", "w");
		fwrite(datdata, datsize, 1, dFile);
		fclose(dFile);
		delete[] datdata;
		std::string rawtex = "RawtexCmd.exe expath_temp/temp.dat " + std::to_string(dxgi_type) + " 0 " + std::to_string(width) + " " + std::to_string(height);
		system(rawtex.c_str());
	}
};
}
