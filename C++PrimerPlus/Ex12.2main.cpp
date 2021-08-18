#include <iostream>
#include "12.4string1.h"
int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	String s1(" and I am a C++ stutent.");
	String s2 = "Please enter your name: ";
	String s3;
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.Stringup();
	cout << "The string\n" << s2 << "\ncontains " << s2.num('A')
		<< " 'A' characters in it.\n";
	s1 = "red";
	String rgb[3] = { String(s1),String("green"),String("blue") };
	cout << "Enter the name of a primary color for mixing light: ";
	String ans;
	bool sucess = false;
	while (cin>>ans)
	{
		ans.Stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "That's right!\n";
				sucess = true;
				break;
			}
		}
		if (sucess)
			break;
		else
			cout << "Try again!\n";
	}
	cout << "Bye\n";
	return 0;
}