#pragma once
#include "Person.h"
#include "User.h"
#include "Account.h"
#include "Credit_card.h"

#include <vector>
using namespace::std;
class Account;
class User;
class Credit_card;
class Administrator : protected Person
{
	vector<User*> users;
	vector<Credit_card*>user_credit_cards;
	
public:
	Administrator(string name, string surname, string identification_number) : Person(name, surname, identification_number)
	{		};
	void addUser(User* user);
	void addUser_credit_card(Credit_card* credit_card);
	void checkUserCC();
	/*void addNewAccount(Account new_acc);*/
	void createAccount_for_user(Account new_account);
	void clear_balance_of_user();
	void addMoney(double sum);
	void  withdraw(double sum);
	void dumpUserData();
	string getName();
	friend class User;
	friend class Credit_card;
};

