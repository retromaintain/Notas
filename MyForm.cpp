#include "MyForm.h"
#include "MyForm1.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Notas::MainForm form;
	Application::Run(%form);
}