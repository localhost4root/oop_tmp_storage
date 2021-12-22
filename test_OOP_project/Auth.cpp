#include "Auth.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	testOOPproject::Auth form;
	Application::Run(% form);
}

System::Void testOOPproject::Auth::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
