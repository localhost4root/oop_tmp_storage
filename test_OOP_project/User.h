#pragma once
#include "Person.h"
#include "Administrator.h"
#include "Account.h"
#include "Order.h"
#include "Junior_client.h"
#include "Retirement_client.h"
#include "Credit_card.h"
#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;
class Administrator;
class Order;
class Account;
template<typename T, typename A, typename B>

class Junior_client;
class Retirement_client;
class User  
{
    
    Junior_client<string, string, string> client_j;
    Retirement_client client_r;
    vector<Administrator*> administrators;
    vector<Order*>orders;
    vector<Account>accounts;
    vector<Credit_card>CC;
public:
    User(string name, string surname, string identification_number)
    {
        client_j.name = name;
        client_j.surname = surname;
        client_j.surname;
        int tmp;
       
    };
   
    
    virtual ~User()
    {
        cout << "User virtual destructor works"<< endl;
    }
    
    void addOrder(Order* order);
    void addAdministrator(Administrator* administrator);
    void addAccount(Account account);
    void addCredit_card(Credit_card Cred);
    void dumpData();
    void payFromOneAccount_ToOther(int number_of_account, int number_of_recipient, double sum);
    string getUserName();
    string getCCBal();
    string getAccountBal();
    void ResetBalance();
    bool CheckMyCC();
    bool Payment(double sum);
    void BlockUnblockCC();
    bool payToCC(double sum);
    double getCCLImit();
    void withdrawMoneYCC(double sum);
    void addMoneyAccount(double sum);
    int getOrderPrice();
    string getPaymentsData();
    

    friend class Administrator;
   
};

