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
	public: System::Windows::Forms::Button^ button2;

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
	private: System::Windows::Forms::ListView^ listView1;
	public:
	private:

	private:
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 53);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Select Packages Path";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 905);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Packages Path";
			// 
			// textBox1
			// 
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
			this->button3->Text = L"Get List of Main Models";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->UseWaitCursor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 934);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Package ID";
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 241);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(179, 577);
			this->listView1->TabIndex = 8;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1043, 966);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		folderBrowserDialog1->ShowDialog();
		MyForm::PackagesPath = folderBrowserDialog1->SelectedPath;
		label1->Text = PackagesPath;
		MessageBox::Show(String::Format("{PackagesPath}, 0342", PackagesPath));
		msclr::interop::marshal_context context;
		std::string pkgsPath = context.marshal_as<std::string>(PackagesPath);
		Package pkg("0342", pkgsPath);

		std::vector<std::string> modelListStd = pkg.getAllFilesGivenRef("446D8080");
		for (int i = 0; i < 5; i++) {
			String^ teststring = context.marshal_as<String^>(modelListStd[i]);
			MessageBox::Show(teststring);
		}

	}
	public: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = textBox1->Text;
		MyForm::PackageID = textBox1->Text;
	}
	public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ PackagesPath = label1->Text;
		String^ PackageID = MyForm::PackageID;
		msclr::interop::marshal_context context;
		std::string pkgsPath = context.marshal_as<std::string>(PackagesPath);
		std::string pkgID = context.marshal_as<std::string>(PackageID);
		Package pkg(pkgID, pkgsPath);
		std::vector<std::string> modelListStd = pkg.getAllFilesGivenRef("446D8080");
		for (int i = 0; i < 5; i++) {
			String^ teststring = context.marshal_as<String^>(modelListStd[i]);
			MessageBox::Show(teststring);
		}
	}
};
}
