#include<iostream>
#include<string>
using namespace std;
void string2Upper(string & myString);
int main()
{
	string myString;
	cout << "Enter a string (q to quit): ";
	while (getline(cin,myString))
	{
		if (myString.length() <= 1)
		{
			cout << "Bye!" << endl;
			break;
		}
		string2Upper(myString);
		cout << "Next string (q to quit): ";
	}
	return 0;
}
void string2Upper(string & myString)
{
	for (int i = 0; i < myString.length(); i++)
	{
		myString[i] = toupper(myString[i]);
		cout << myString[i];
	}
	cout << endl;
}