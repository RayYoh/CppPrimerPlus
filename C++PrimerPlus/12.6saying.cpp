#include <iostream>
#include <cstdlib>
#include <ctime>
#include "12.4string1.h"
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	String name;
	cout << "Hi, what's your name?\n>> ";
	cin >> name;

	cout << name << ", please enter up tp " << ArSize
		<< " short sayings <empty line to quit>:\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	int total = i;
	if (total > 0)
	{
		cout << "Here are your sayings:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;
		/*int shorttest = 0;
		int first = 0;*/
		String * shorttest = &sayings[0];
		String * first = &sayings[0];
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < shorttest->length())
				shorttest = &sayings[i];
			if (sayings[i] < *first)
				first = &sayings[i];
		}
		cout << "Shortest saying:\n" << * shorttest << endl;
		cout << "First alphabetically:\n" << * first << endl;
		srand(time(0));
		int choice = rand() % total;
		String * favorite = new String(sayings[choice]);
		cout << "My favorite saying:\n" << *favorite << endl;
		cout << "This program used " << String::HowMany() << " String objects. Bye.\n";
		delete favorite;
	}
	else
		cout << "No input! Bye.\n";
	return 0;
}