#include<string>
#include<iostream>
using namespace std;

class Account
{
private:
	string name;
	string account;
	double money;

public:
	Account(const string na,const string ac,double mon);
	Account() {};
	void show() const;
	void in(double money);
	void out(double money);
};