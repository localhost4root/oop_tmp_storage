#include "Administrator.h"
#include "Account.h"
#include "User.h"
using namespace System;
using namespace System::Windows::Forms;
void Administrator::addUser(User* user)
{
	users.push_back(user);
}
void Administrator::addUser_credit_card(Credit_card* credit_card)
{
	user_credit_cards.push_back(credit_card);
}
void Administrator::checkUserCC()
{
	int i = 0;
	while (i < (user_credit_cards.size()))
	{
		if (user_credit_cards[i]->checkCC())
		{
			user_credit_cards[i]->blockCC();
			MessageBox::Show("Credit card #" + i.ToString() + "was blocked", "Bank system");
		}
			i++;
	}
	MessageBox::Show("Credit cards were checked!", "Bank system");
}
//void Administrator::addNewAccount(Account new_acc)
//{
//
//}
void Administrator::createAccount_for_user(Account new_account)
{
	users[0]->addAccount(new_account);
}

void Administrator::clear_balance_of_user()
{
	users[0]->ResetBalance();
}

void Administrator::addMoney(double sum)
{
	users[0]->addMoneyAccount(sum);
}

void Administrator::withdraw(double sum)
{
	users[0]->Payment(sum);
}

void Administrator::dumpUserData()
{
	users[0]->dumpData();
	MessageBox::Show("Інформація успішно збережена!", "Bank system");
}

string Administrator::getName()
{
	return name;
}
