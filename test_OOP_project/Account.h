#pragma once
#include "Credit_card.h"
#include "Order.h"
#include "User.h"
class Credit_card;
class Order;
class Account
{
	double balance;
	int number_of_account;
	Credit_card* credit_card;
	vector <Order*> orders;
public:
	int a;
	Account( int number_of_account=0, double balance = 0) :  number_of_account(number_of_account), balance(balance)
	{			};
	void addOrder(Order* order);
	void addCredit_card(Credit_card* credit_card);
	void printMyBalance();
	void cancelMyAccount();
	double getMyBalance();
	void withdraw_money(double money);
	
	void add_money(double money);
	string getNumber_of_Account();

	friend class Credit_card;
	double get_number_of_account()
	{
		return number_of_account;
	}
	friend bool operator<(Account A, Account B)
	{
		return A.get_number_of_account() < B.get_number_of_account();
	}
	friend bool operator == (Account A, Account B)
	{
		return A.get_number_of_account() == B.get_number_of_account();
	}
};

