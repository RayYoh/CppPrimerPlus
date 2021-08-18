#include<iostream>
using namespace std;
void setArray(int *begin, int *end, int value);
int main()
{
	int arr[6];
	int value = 3;
	setArray(arr, arr + 6, value);
	for (int i = 0; i < 6; i++)
		cout << arr[i] << endl;
	return 0;
}
void setArray(int *begin, int *end, int value)
{
	for (int *pt = begin; pt != end; pt++)
		*pt = value;
}