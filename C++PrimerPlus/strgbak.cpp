#include<iostream>
using namespace std;
char *buildstr(char ch, int n);
int main()
{
	char ch;
	int n;
	char pt[7] = "abcdef";
	cout << pt << endl;
	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> n;
	char *ps = buildstr(ch, n);
	cout << ps << endl;
	delete[]ps;
	ps = buildstr('+', 20);
	cout << ps << "DONE" << ps << endl;
	delete[]ps;
	return 0;
}
char *buildstr(char ch, int n)
{
	char *ptr = new char[n + 1];
	ptr[n] = '\0';
	while (n--)
		ptr[n] = ch;
	return ptr;
}