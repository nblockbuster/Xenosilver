#pragma once
#include "D:/MontsUnpackerCPP/package.h"
#include "D:/MontsUnpackerCPP/helpers.h"
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

	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ textBox1;
	private:
	public: System::Windows::Forms::Button^ button3;

	private:


	public:
		String^ PackagesPath;
		String^ PackageID;
	public: System::Windows::Forms::Label^ label2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(888, 905);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 49);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Extract Image";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->Description = L"Select your Destiny 2 packages path.";
			this->folderBrowserDialog1->RootFolder = System::Environment::SpecialFolder::MyComputer;
			this->folderBrowserDialog1->ShowNewFolderButton = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 905);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 4;
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
			this->button3->Location = System::Drawing::Point(12, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 61);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Get List of Images";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->UseWaitCursor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 934);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 7;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"xxxxxx80" });
			this->listBox1->Location = System::Drawing::Point(17, 220);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(141, 684);
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
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1043, 966);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		folderBrowserDialog1->ShowDialog();
		MyForm::PackagesPath = folderBrowserDialog1->SelectedPath;
		label1->Text = PackagesPath;
		//String^ balls = String::Format("{s}, 0342", PackagesPath)
		MessageBox::Show(PackagesPath + " 0342");
		/*
		msclr::interop::marshal_context context;
		std::string pkgsPath = context.marshal_as<std::string>(PackagesPath);
		Package pkg("0342", pkgsPath);

		std::vector<std::string> modelListStd = pkg.getAllFilesGivenRef("446D8080");
		for (int i = 0; i < 5; i++) {
			String^ teststring = context.marshal_as<String^>(modelListStd[i]);
			MessageBox::Show(teststring);
		}
		*/
	}
	public: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = textBox1->Text;
		MyForm::PackageID = textBox1->Text;
	}
	public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//String^ PackagesPath = label1->Text;
		//String^ PackageID = MyForm::PackageID;
		msclr::interop::marshal_context context;
		//std::string pkgsPath = context.marshal_as<std::string>(PackagesPath);
		//std::string pkgID = context.marshal_as<std::string>(PackageID);
		//MessageBox::Show(PackagesPath + ", " + PackageID);
		Package pkg("0342", "H:/Steam SSD Games/steamapps/common/Destiny 2/packages");
		pkg.readHeader();
		String^ head = "PatchID: " + pkg.header.patchID + " Entry Table Offset: " + pkg.header.entryTableOffset + " Entry Table Size: " + pkg.header.entryTableSize;
		MessageBox::Show(head);
		
		if (!pkg.initOodle())
		{
			MessageBox::Show("Failed to initialize oodle.");
			exit(80);
		}
		pkg.modifyNonce();
		pkg.getEntryTable();
		//String^ entrys = "Size: " + pkg.entries.size().ToString();
		//MessageBox::Show(entrys);
		MessageBox::Show(pkg.entries.size().ToString());
		for (int i = 0; i < pkg.entries.size(); i++)
		{
			//int fileSize = 0;
			//unsigned char* data = nullptr;
			Entry entry = pkg.entries[i];
			if (entry.numType == 32 && entry.numSubType == 1) {
				String^ HeaderHash = context.marshal_as<String^>(entry.reference);
				//MessageBox::Show(HeaderHash);
				//System::ComponentModel::Component^ comp;
				listBox1->Items->Add(HeaderHash);
				//std::string dataHash = pkg.getEntryReference(entry.reference);
				//data = pkg.getEntryData(entry.reference, fileSize);
			}
		}
	}
	private: System::Void listBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ClickedOn = listBox1->SelectedItem->ToString();
		MessageBox::Show(ClickedOn);
	}
};
}
