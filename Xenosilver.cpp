#include "Xenosilver.h"

using namespace Xenosilver;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{
    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    //FolderBrowserDialog folderDialog;
    //String^ Description = "Choose your Destiny 2 Packages path.";
    //folderDialog.Description = Description;
    //DialogResult result = folderDialog.ShowDialog();
    //Xeno::FolderPath = folderDialog.SelectedPath;

    Xenosilver::MyForm form;

    Application::Run(% form);

}