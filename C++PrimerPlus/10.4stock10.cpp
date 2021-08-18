#include<iostream>
#include"10.4stock10.h"

using namespace std;

// constructors(verbose versions)
Stock::Stock()	//dfault constructors
{
	//cout << "Default constructors called\n";
	//company = "no name";
	company = NULL;
	shares = 0;
	shares_val = 0;
	total_val = 0;
}

Stock::Stock(const char * co, long n, double pr)
{
	//cout << "Constructor using " << co << " called\n";
	//company = co;
	int len = strlen(co);
	company = new char[len + 1];

	if (n < 0)
	{
		cout << "Number of shares can't be negative; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	shares_val = pr;
	set_tot();
}
Stock::Stock(const Stock &s)
{
	int len = strlen(s.company);
	company = new char[len + 1];
	shares = s.shares;
	shares_val = s.shares_val;
	set_tot();
}
// class destructor
Stock::~Stock()
{
	//cout << "Bye, " << company << "!\n";
	delete[] company;
}
//other methods
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares purchased can't be negative. "
			<< "Transaction is absorted.\n";
	}
	else
	{
		shares += num;
		shares_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout<<"Number of shares sold can't be negative. "
			<<"Transaction is absorted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have! "
			<< "Transaction is absored.\n";
	}
	else
	{
		shares -= num;
		shares_val = price;
		set_tot();
	}
}
void Stock::update(double price)
{
	shares_val = price;
	set_tot();
}
void Stock::show() const
{
	// set format to #.###
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(3);

	cout << "Company: " << company
		<< " Shares: " << shares << '\n';
	cout << " Share Price: $" << shares_val;
	// set format to #.##
	cout.precision(2);
	cout << " Total Worth: $" << total_val << '\n';

	//restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}
ostream & operator<<(ostream & os, const Stock &s)
{
	// set format to #.###
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(3);

	cout << "Company: " << s.company
		<< " Shares: " << s.shares << '\n';
	cout << " Share Price: $" << s.shares_val;
	// set format to #.##
	cout.precision(2);
	cout << " Total Worth: $" << s.total_val << '\n';

	//restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
	return os;
}