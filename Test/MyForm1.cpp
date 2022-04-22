#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void startGui1() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Test::MyForm1);
}
void main1(array<String^>^ args) {
	startGui1();
}


