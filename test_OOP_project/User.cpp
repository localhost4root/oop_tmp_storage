#include "User.h"
#include "Account.h"
#include "Administrator.h"
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

void User::addAdministrator(Administrator* administrator)
{
	administrators.push_back(administrator);
	administrator->addUser(this);
}
void User::addOrder(Order* order)
{
    orders.push_back(order);
}
void User::addAccount(Account account)
{
	accounts.push_back(account);
}
void User::addCredit_card(Credit_card Cred)
{
	CC.push_back(Cred);
}
string User::getCCBal()
{
	return CC[0].getMyCCBalance();
}
bool User::CheckMyCC()
{
	return CC[0].checkCC();
}
bool User::isMyCCblocked()
{
	return CC[0].isMyCCblocked_();
}
bool User::Payment(double sum)
{
	if (accounts[0].getMyBalance() - sum < 0)
	{
		return 0;
	}
	else
		accounts[0].withdraw_money(sum);
	return 1;
}
void User::BlockUnblockCC()
{
	CC[0].blockCC();
}
bool User::payToCC(double sum)
{
	
	if (accounts[0].getMyBalance() - sum < 0)
	{
		return 0;
	}
	else
	{
		CC[0].payToCC(sum);
		accounts[0].withdraw_money(sum);
		return 1;
	}
	
}
double User::getCCLImit()
{
	return CC[0].getLimit();
}
void User::withdrawMoneYCC(double sum)
{
	CC[0].withdrawMoney(sum);
}
void User::addMoneyAccount(double sum)
{
	accounts[0].add_money(sum);
}
int User::getOrderPrice()
{
	return orders[0]->getOrderPrice();
}
string User::getPaymentsData()
{
	
		return accounts[0].getNumber_of_Account();
	
}
void User::dumpData()
{
	int i = 0;
	ofstream DATA("Information.txt");
	DATA << "Name and surname: " << client_j.name << "  " << client_j.surname << endl;
	DATA << "With identification number: " << client_j.identification_number<< endl ;
	
	while (i < (accounts.size()))
	{
		DATA << "User account #" << i + 1 << endl;
		DATA <<"Balance of account: " << accounts[i].getMyBalance() << endl;
		
		i++;
	}
	i = 0;
	while (i < (CC.size()))
	{
		DATA << "Balance of credit card: " << CC[i].getMyCCBalance() << "  with credit limit: " << CC[i].getLimit() << endl;
		i++;
	}
	DATA.close();

}
void User::payFromOneAccount_ToOther(int number_of_sender, int number_of_recipient, double sum)
{
	if (accounts[number_of_sender-1].getMyBalance() - sum < 0)
	{
		cout << "Not enough money!" << endl;
	}
	else
	{
		accounts[number_of_sender-1].withdraw_money(sum);
		accounts[number_of_recipient-1].add_money(sum);
		cout << "Succesfully paid!" << endl;
	}
	
	//cout << name;
}
string User::getUserName()
{
	return client_j.name;
}
string User::getAccountBal()
{
	return std::to_string(accounts[0].getMyBalance());
}

void User::ResetBalance()
{
	accounts[0].cancelMyAccount();
}
