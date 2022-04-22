#include "MyForm.h"
#include <unordered_map>
#include "User.h"
using namespace System;
using namespace System::Windows::Forms;
void startGui() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Test::MyForm);
}
[STAThread]
void main(array<String^>^ args) {
	startGui();
}



