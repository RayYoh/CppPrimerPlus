#include<iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
void show(string & str) { cout << "name: " << str << endl; }
int main()
{
	list<string> Mat, Pat;
	
	cout << "Enter Mat's friend, quit to quit: " << endl;
	string temp;
	while (getline(cin,temp)&&temp!="quit")
	{
		Mat.push_back(temp);
		cout << "Enter Mat's friend, quit to quit: " << endl;
	}
	Mat.sort();
	cout << "Mat's friends: " << endl;
	for_each(Mat.begin(), Mat.end(), show);
	cout << endl;

	cout << "Enter Pat's friend, quit to quit: " << endl;
	while (getline(cin, temp) && temp != "quit")
	{
		Pat.push_back(temp);
		cout << "Enter Pat's friend, quit to quit: " << endl;
	}
	Pat.sort();
	cout << "Pat's friends: " << endl;
	for_each(Pat.begin(), Pat.end(), show);
	cout << endl;

	cout << "-------friends--------" << endl;
	Mat.splice(Mat.end(), Pat);
	Mat.sort();
	Mat.unique();
	cout << "All friends: " << endl;
	for_each(Mat.begin(), Mat.end(), show);

	return 0;
}