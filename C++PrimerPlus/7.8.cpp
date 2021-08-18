#include<iostream>
using namespace std;
int replace(char *str, char c, char c2);
int main()
{
	/*char str[] = "abcde";
	int count = replace(str, 'c', 'd');
	cout << str << endl;
	cout << count << endl;*/
	cout << *"pizza" << endl;
	cout << "taco"[2] << endl;
	return 0;
}
int replace(char *str, char c1, char c2)
{
	int count = 0;
	while (*str)
	{
		if (*str == c1)
		{
			*str = c2;
			count++;
		}
		str++;
	}
	return count;
}