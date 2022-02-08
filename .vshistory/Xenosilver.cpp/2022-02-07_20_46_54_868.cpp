#include "Xenosilver.h"

using namespace Xenosilver;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{
    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);
    DialogResult result;
    Xenosilver::MyForm form;

    Application::Run(% form);

}