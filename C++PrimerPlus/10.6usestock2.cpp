// usestock2.cpp -- using the Stock class
// compile with 10.4stock10.cpp
#include<iostream>
#include "10.4stock10.h"
using namespace std;

const int STKS = 4;
int main()
{
	Stock stocks[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Baffo Objects", 200, 2.0),
		Stock("Nifty Foods", 10, 50.0),
		Stock("Fleep Enterprises",60,6.5)
	};
	cout << "Stock holdings:\n";
	int st;
	for (st = 0; st < STKS; st++)
		stocks[st].show();
	// set pointer to first element
	const Stock *top = &stocks[0];
	for (st = 1; st < STKS; st++)
		top = & top->topval(stocks[st]);
	cout << "\nMost valuable holding:\n";
	top->show();

	return 0;
}