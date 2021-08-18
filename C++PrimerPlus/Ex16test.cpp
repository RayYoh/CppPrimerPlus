#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void ToUpper(string & str);
int main()
{
	string youStr;
	cout << "Enter the string: ";
	while (cin>>youStr)
	{
		ToUpper(youStr);
		cout << youStr << endl;
		cout << "Enter the string: ";
	}
	return 0;
}
void ToUpper(string & str)
{
	for (int i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
}