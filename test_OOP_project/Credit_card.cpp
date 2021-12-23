#include "Credit_card.h"
void Credit_card::addOrder(Order* order)
{
	orders.push_back(order);
	order->set_Credit_card(this);
}
void Credit_card::addAccount(Account* account)
{
	this->account = account;
	account->addCredit_card(this);
}
void Credit_card::blockCC()
{
	is_my_CC_blocked = true;
	
}
string Credit_card::getMyCCBalance()
{
	return std::to_string(balance);
}

void Credit_card::withdrawMoney(double sum)
{
	balance -= sum;
}

bool Credit_card::checkCC()
{
	if (balance > limit)
		return true;
	else
		return false;
}
void Credit_card::payToCC(double sum)
{
	balance += (int)round(sum);
	
}
bool Credit_card::isMyCCblocked_()
{
	return is_my_CC_blocked;
}
double Credit_card::getLimit()
{
	return limit;
}
std::ostream& operator<< (std::ostream& out, const Credit_card& n)
{
	out << n.balance;
	return out;
}
Credit_card& Credit_card::operator++()
{
	balance+=100;
	return *this;
}

Credit_card& Credit_card::operator--()
{
	balance-=100;
	return *this;
}
Credit_card Credit_card::operator++(int)
{
	Credit_card temp(balance);
	++(*this);
	return temp;
}

Credit_card Credit_card::operator--(int)
{
	Credit_card temp(balance);
	--(*this); 
	return temp;
}

Credit_card operator+(const Credit_card& d1, const Credit_card& d2)
{
	
	return Credit_card(d1.balance + d2.balance);
}

Credit_card operator-(const Credit_card& d1, const Credit_card& d2)
{
	
	return Credit_card(d1.balance - d2.balance);
}




Credit_card operator*(const Credit_card& d1, const Credit_card& d2)
{

	return Credit_card(d1.balance * d2.balance);
}



Credit_card& Credit_card::operator += (Credit_card c2)
{
	balance += c2.balance;
	return *this;
}
Credit_card& Credit_card::operator -= (Credit_card c2)
{
	balance -= c2.balance;
	return *this;
}
Credit_card& Credit_card::operator *= (Credit_card c2)
{
	balance *= c2.balance;
	return *this;
}
