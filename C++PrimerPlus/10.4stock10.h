// stock10.h -- Stock class declaration with constructors, destructor added
#ifndef  STOCK10_H
#define STOCK10_H_
#include <string>
using namespace std;
class Stock
{
private:
	//string company;
	char * company;
	long shares;
	double shares_val;
	double total_val;
	void set_tot() { total_val = shares * shares_val; }
public:
	// two constructors
	Stock();	//default constructors
	Stock(const char * co, long n = 0, double pr = 0.0);
	Stock(const Stock & s);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock & topval(const Stock & s) const;
	friend ostream & operator<<(ostream & os, const Stock &s);
	
};
#endif // ! STOCK10_H
