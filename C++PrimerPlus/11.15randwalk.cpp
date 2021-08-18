#include <iostream>
#include <cstdlib>	// rand(), srand() prototypes
#include <ctime>	//time() prototype
#include <fstream>
#include "11.13vector.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));	//seed random-number geneator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit): ";
	while (cin>>target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		ofstream fout;
		fout.open("thewalk.txt");
		fout << "Target Distance: " << target << ", Step Size: " << dstep << endl;
		while (result.magval()<target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			fout << steps <<": "<< result << endl;
			steps++;
		}
		fout << "After " << steps << " steps, the subject has the following location:\n";
		fout << result << endl;
		result.polar_mode();
		fout << " or\n" << result << endl;
		fout << "Average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get()!='\n')
	{
		continue;
	}
	return 0;
}