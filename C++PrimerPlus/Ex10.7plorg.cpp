#include "Ex10.7plorg.h"
Plorg::Plorg()
{
	strcpy_s(name, "Plorg");
	CI = 50;
}
Plorg::Plorg(const char na[], int ci)
{
	strcpy_s(name, na);
	CI = ci;
}
void Plorg::showPlorg() const
{
	cout << "Plorg's name: " << name << endl;
	cout << "CI = " << CI << endl;
}
void Plorg::resetCi()
{
	double ci;
	cout << "Enter your CI: ";
	cin >> ci;
	CI = ci;
}