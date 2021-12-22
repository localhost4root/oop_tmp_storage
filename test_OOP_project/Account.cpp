#include "Account.h"

void Account::addCredit_card(Credit_card* credit_card)
{
	this->credit_card = credit_card;

}
void Account::addOrder(Order* order)
{
	orders.push_back(order);
}
void Account::printMyBalance()
{
	cout << "Balance credit card is: " << credit_card->balance;
}
void Account::cancelMyAccount()
{
	balance = 0;
}
double Account::getMyBalance()
{
	return balance;
}
void Account::withdraw_money(double money)
{
	balance -= money;
}
void Account::add_money(double money)
{
	balance += money;
}

string Account::getNumber_of_Account()
{
	return std::to_string(number_of_account);
}
