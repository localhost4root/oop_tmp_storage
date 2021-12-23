#include "HelpInfo.h"

System::Void testOOPproject::HelpInfo::HelpInfo_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
}

System::Void testOOPproject::HelpInfo::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}
