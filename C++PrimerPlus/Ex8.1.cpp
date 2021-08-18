#include<iostream>
#include<string>
using namespace std;
void show(const char *pa, int n = 0);
int main()
{
	char arr[] = "abcde";
	show(arr);
	show(arr, 10);
	show(arr, 5);
	show(arr, 0);
	show(arr, 1);
	return 0;
}
void show(const char *pa, int n)
{
	static int use = 0;
	use++;
	if (!n)
		cout << pa << endl;
	else
	{
		for (int i = 0; i < use; i++)
			cout << pa <<' ';
		cout << endl;
	}
}