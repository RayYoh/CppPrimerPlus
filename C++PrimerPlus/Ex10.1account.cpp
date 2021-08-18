#include "Ex10.1account.h"
using namespace std;

Account::Account(const string  na, const string  ac, double mon)
{
	name = na;
	account = ac;
	if (mon < 0)
	{
		cout << "Money < 0";
		money = 0.0;
	}
	else
		money = mon;
}
void Account::show() const
{
	cout << "Name: " << name << endl;
	cout << "Account: " << account << endl;
	cout << "Money: " << money << endl;
}

void Account::in(double mon)
{
	money += mon;
}

void Account::out(double mon)
{
	money -= mon;
}