#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
void startGui() {
	Console::Write(1);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Test::MyForm);
}
[STAThread]
void main(array<String^>^ args) {
	Console::Write(1);
	startGui();
}



