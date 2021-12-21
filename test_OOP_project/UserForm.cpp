#include "UserForm.h"
#include "User.h"
System::Void testOOPproject::UserForm::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void testOOPproject::UserForm::UserForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    User a("Andrew", "Martseniuk","2");
    Credit_card* c1 = new Credit_card(100, 1000, false);
    Account a1(1);
    Order* o1 = new Order("test", 20);
    a.addAccount(a1);
    a.addOrder(o1);
    a.addCredit_card(*c1);
    o1->set_Credit_card(c1);
    this->label1->Text = gcnew System::String(a.getUserName().c_str());
    label2->Text = "Баланс Вашої кредитної карти: " + gcnew System::String((a.getCCBal()).c_str());
    if (a.CheckMyCC())
    {
        label3->Text = gcnew System::String("Ваша кредитна картка заблокована!");
    }
    else
    {
        label3->Text = gcnew System::String("Ваша кредитна картка доступна для використання");
    }
}

System::Void testOOPproject::UserForm::кредитнаКартаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->button1->Visible = true;
    this->button1->Enabled = true;
    this->button2->Visible = true;
    this->button2->Enabled = true;
    this->button3->Visible = true;
    this->button3->Enabled = true;
    this->label2->Visible = true;
    this->label3->Visible = true;
    
}
