#include<iostream>
#include<cstring>
using namespace std;
struct stringy
{
	char * str;
	int ct;
};
void set(stringy & my, const char * test);
void show(const stringy & my, int n = 1);
void show(const char *my, int n = 1);
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done");
	return 0;
}
void set(stringy & my, const char * test)
{
	my.ct = strlen(test);
	my.str = new char[my.ct + 1];
	strcpy_s(my.str,my.ct + 1, test);
}
void show(const stringy & my, int n)
{
	for (int i = 0; i < n; i++)
		cout << my.str << endl;
}
void show(const char * my, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < strlen(my); j++)
			cout << my[j];
		cout << endl;
	}
}