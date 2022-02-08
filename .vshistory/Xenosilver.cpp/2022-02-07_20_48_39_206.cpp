#include "Xenosilver.h"

using namespace Xenosilver;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{
    FolderBrowserDialog folderDialog;
    String^ Description = "Choose your Destiny 2 Packages path.";

    folderDialog.Description = Description;

    DialogResult result = folderDialog.ShowDialog();

    String^ FolderPath = folderDialog.SelectedPath;

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Xenosilver::MyForm form;

    Application::Run(% form);

}