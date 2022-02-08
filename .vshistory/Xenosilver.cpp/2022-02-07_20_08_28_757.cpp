#include "Xenosilver.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{
    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Xenosilver::MyForm form;

    Application::Run(% form);

}