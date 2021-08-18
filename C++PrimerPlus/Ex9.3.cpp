#include<iostream>
#include<new>
#include<cstring>
using namespace std;

const int BUF = 512;
char buffer[BUF];
struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	char dro[20];
	// chaff *arr = new(buffer) chaff[2];
	chaff *arr = new chaff[2];
	for (int i = 1; i < 3; i++)
	{
		cout << "Enter the content of dross:\n";
		cin >> dro;
		strcpy_s(arr[i].dross, dro);
		cout << "Enter the content of slag:\n";
		cin >> arr[i].slag;
	}
	for (int i = 1; i < 3; i++)
	{
		cout << "The " << i << " chaff:\n";
		cout << "The content of dross: " << arr[i].dross << endl;
		cout << "The content of slag: " << arr[i].slag << endl;
	}
	delete [] arr;
	return 0;
}