#include <iostream>
#include "11.1mytime0.h"

using namespace std;

int main()
{
	Time planning;
	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total, diff, adjusted;

	cout << "weeding time = ";
	weeding.Show();
	cout << endl;

	cout << "waxing time = ";
	waxing.Show();
	cout << endl;

	total = weeding + waxing;
	cout << "total work time = ";
	total.Show();
	cout << endl;

	diff = weeding - waxing;
	cout << "diff  time = ";
	diff.Show();
	cout << endl;
	
	adjusted = total * 1.5;
	cout << "adjusted work time = ";
	adjusted.Show();
	cout << endl;

	cout << "Adjuested: "<<adjusted;
	return 0;
}