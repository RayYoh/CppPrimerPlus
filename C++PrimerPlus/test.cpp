#include<iostream>
using namespace std;
int main()
{
	char a[] = "hello,11";
	cout << a << endl;
	cout << &a << endl;
	cout << &a + 1 << endl;
	cout << typeid(&a+1).name() << endl;
	char temp = 'C';
	char *ptr=&temp;
	cout << &ptr << endl;
	//cout << ptr + 1 << endl;
	cout << typeid(ptr+1).name() << endl;
	return 0;
}