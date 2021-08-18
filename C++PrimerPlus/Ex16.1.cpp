#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
bool judge(string & str);
string deal(string & str);
int main()
{
	string myStr,dealStr;
	cout << "Enter your string: ";
	while (getline(cin,myStr))
	{
		cout << myStr << " is huiwen? ";
		dealStr = deal(myStr);
		if (judge(dealStr) == true)
			cout << " Yes " << endl;
		else
			cout << " No " << endl;
		cout << "Enter your string: ";
	}
	 
	return 0;
}

bool judge(string & str)
{
	string temp;
	temp = str;
	reverse(temp.begin(), temp.end());
	return temp == str;
}

string deal(string & str)
{
	string nStr;
	for (int i = 0; i < str.size(); ++i)
	{
		if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			nStr.push_back(tolower(str[i]));
	}
	return nStr;
}