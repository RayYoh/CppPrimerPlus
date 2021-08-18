#include<iostream>
using namespace std;
const int Max = 5;
double * fill_array(double *, double *);
void show_array(double *,double *);
void revalue(double, double *, double *);
int main()
{
	double properties[Max];
	double * trueProperties = fill_array(properties, properties+Max);
	show_array(properties, trueProperties);
	if (trueProperties>properties)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin>>factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input;Please enter a number: ";
		}
		revalue(factor, properties, trueProperties);
		show_array(properties, trueProperties);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}
double *  fill_array(double *begin, double *end)
{
	double *nowpt;
	double temp;
	int i = 0;
	for (nowpt=begin; nowpt!=end; i++,nowpt++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input;input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		*nowpt = temp;
	}
	return nowpt;
}
void show_array(double *begin,double *end)
{
	double *now ;
	int i = 0;
	for (now = begin;now!=end;i++,now++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << *now << endl;
	}
}
void revalue(double r, double *begin, double * end)
{
	double * now;
	for (now=begin;now!=end;now++)
		*now *= r;
}