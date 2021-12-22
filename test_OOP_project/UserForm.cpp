#include "UserForm.h"
#include "User.h"
static User a("Andrew", "Martseniuk", "2");
System::Void testOOPproject::UserForm::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void testOOPproject::UserForm::UserForm_Load(System::Object^ sender, System::EventArgs^ e)
{
   
    Credit_card* c1 = new Credit_card(100, 1000, false);
    Account a1(1, 1000);
    Order* o1 = new Order("test", 200);
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
    label4->Text = "Баланс вашого рахунку: " + gcnew System::String((a.getAccountBal()).c_str());
    this->label6->Text = gcnew System::String(o1->getNameOrder().c_str());
    this->label7->Text = gcnew System::String((o1->getOrderPrice()).ToString());
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    
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
    this->label2->Enabled = true;
    this->label3->Enabled = true;
    this->button4->Visible = false;
    this->button5->Visible = false;
    this->button6->Visible = false;
    this->label4->Visible = true;
    this->button7->Visible = false;
    this->label5->Visible = false;
    this->label6->Visible = false;
    this->label7->Visible = false;
    
}

System::Void testOOPproject::UserForm::рахунокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->button1->Visible = false;
    this->button2->Visible = false;
    this->button3->Visible = false;
    this->button4->Visible = true;
    this->button5->Visible = true;
    this->button6->Visible = true;
    this->label4->Visible = true;
    this->button7->Visible = false;
    this->label5->Visible = false;
    this->label6->Visible = false;
    this->label7->Visible = false;
}

System::Void testOOPproject::UserForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    a.ResetBalance();
    label4->Text = "Баланс вашого рахунку: " + gcnew System::String((a.getAccountBal()).c_str());
}

System::Void testOOPproject::UserForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (a.Payment(100))
    {
        MessageBox::Show( "Successfull", "Payment");
        label4->Text = "Баланс вашого рахунку: " + gcnew System::String((a.getAccountBal()).c_str());
    }
    else
    {
        MessageBox::Show("Not successfull", "Payment" );
    }
}

System::Void testOOPproject::UserForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show(gcnew System::String(a.getPaymentsData().c_str()), "Your number of account: ");
}

System::Void testOOPproject::UserForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    a.BlockUnblockCC();
    label3->Text = gcnew System::String("Ваша кредитна картка не доступна для використання");
}

System::Void testOOPproject::UserForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (a.payToCC(100))
    {
        MessageBox::Show("You succesfully payed money to your credit card", "Successfull");
        label4->Text = "Баланс вашого рахунку: " + gcnew System::String((a.getAccountBal()).c_str());
        label2->Text = "Баланс Вашої кредитної карти: " + gcnew System::String((a.getCCBal()).c_str());
    }
    else
    {
        MessageBox::Show("Not enough money", "Payment");
    }
}

System::Void testOOPproject::UserForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (abs((stoi((a.getCCBal()))) - 100 )!=a.getCCLImit())
    {
        a.withdrawMoneYCC(100);
        a.addMoneyAccount(100);
        MessageBox::Show("You succesfully payed money from your credit card", "Successfull");
        label4->Text = "Баланс вашого рахунку: " + gcnew System::String((a.getAccountBal()).c_str());
        label2->Text = "Баланс Вашої кредитної карти: " + gcnew System::String((a.getCCBal()).c_str());

    }
    else
    {
        MessageBox::Show("Your payment was not succesfull(Credit limit)", "Payment");
    }
}

System::Void testOOPproject::UserForm::платежіToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->button7->Visible = true;
    this->label5->Visible = true;
    this->label6->Visible = true;
    this->label7->Visible = true;
    this->button1->Visible = false;
    this->button2->Visible = false;
    this->button3->Visible = false;
    this->label2->Visible = false;
    this->label3->Visible = false;
    this->button4->Visible = false;
    this->button5->Visible = false;
    this->button6->Visible = false;
    this->label4->Visible = false;
}

System::Void testOOPproject::UserForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (a.getOrderPrice() > stoi(a.getAccountBal()))
    {
        MessageBox::Show("Not enough money to pay your order", "Order");
    }
    else
    {
        MessageBox::Show("Succesfully payed", "Order");
        a.Payment(a.getOrderPrice());
        label4->Text = "Баланс вашого рахунку: " + gcnew System::String((a.getAccountBal()).c_str());

    }
}
