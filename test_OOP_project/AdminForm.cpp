#include "AdminForm.h"
#include "User.h"
#include "Administrator.h"
#include "Account.h"
static User a("Andrew", "Martseniuk", "2");
static Administrator admin("Admin_name", "Admin_surname", "543");
static Account a2(2, 10000);
System::Void testOOPproject::AdminForm::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void testOOPproject::AdminForm::AdminForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    Credit_card* c1 = new Credit_card(100, 1000, false);
    Account a1(1, 1000);
  
    Order* o1 = new Order("test", 200);
    a.addAccount(a1);
    a.addAdministrator(&admin);
    admin.addUser(&a);
    a.addOrder(o1);
    a.addCredit_card(*c1);
    o1->set_Credit_card(c1);
    label1->Text = gcnew System::String(admin.getName().c_str());
    

}

System::Void testOOPproject::AdminForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    admin.dumpUserData();
}

System::Void testOOPproject::AdminForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    admin.checkUserCC();
    
}

System::Void testOOPproject::AdminForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void testOOPproject::AdminForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    admin.createAccount_for_user(a2);
    MessageBox::Show("Рахунок для користувача успішно створений!", "Bank system");
}

System::Void testOOPproject::AdminForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    admin.clear_balance_of_user();
    MessageBox::Show("Баланс рахунку успішно скинутий, всі кошти зараховані на благодійність!", "Bank system");
}

System::Void testOOPproject::AdminForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    admin.addMoney(100);
    MessageBox::Show("Кошти зараховані на рахунок", "Bank system");
}

System::Void testOOPproject::AdminForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
    admin.withdraw(100);
    MessageBox::Show("Кошти успішно зняті з рахунку", "Bank system");
}
