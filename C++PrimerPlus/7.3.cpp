#include<iostream>
using namespace std;
void setArray(int arr[], int len, int value);
int main()
{
	int arr[6];
	int len = 6;
	setArray(arr, len, 5);
	for (int i = 0; i < 6; i++)
		cout << arr[i] << endl;
	return 0;
}
void setArray(int arr[], int len, int value)
{
	for (int i = 0; i < len; i++)
		arr[i] = value;
}