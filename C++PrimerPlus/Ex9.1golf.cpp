#include<iostream>
#include "Ex9.1golf.h"
using namespace std;

Golf::Golf(const char * name, int hc)
{
	cout << "Using void set name and handicap: " << endl;
	strcpy_s(fullname, name);
	handicap = hc;

}

Golf::Golf()
{
	fullname[0] = '\0';
	handicap = 0;
}

void Golf::setGolf()
{
	char name[LEN];
	int hc;
	cout << "Please enter the name of this golf:\n";
	if (cin.get(name, LEN) && strlen(name) != 0)
	{
		cout << "Please enter the handocap of this golf:\n";
		cin >> hc;
		cin.get();
	}
	/*Golf golf(name,hc);
	strcpy_s(this->fullname, golf.fullname);
	this->handicap = golf.handicap;*/
	*this = Golf(name, hc);

}

void Golf::handiCap(int hc)
{
	handicap = hc;
}


void Golf::showGolf()
{
	cout << "This golf's name: " << fullname << endl;
	cout << "handicap: " << handicap << endl;
}