#include<iostream>
using namespace std;
const int SIZE = 5;
int TrueSize = 0;
void Fill_array(double *, int len);
void Show_array(const double *, int len);
void Reverse_array(double *, int len);
int main()
{
	double ar[SIZE];
	Fill_array(ar, SIZE);
	Show_array(ar, TrueSize);
	Reverse_array(ar, TrueSize);
	Show_array(ar, TrueSize);
	return 0;
}
void Fill_array(double * ar, int len)
{
	cout << "Please input an array: ";
	int i = 0;
	while (i<len)
	{
		if (cin >> ar[i])
		{

		}
		else
		{
			TrueSize = i;
			break;
		}
		TrueSize = i+1;
		i++;
	}
}
void Show_array(const double * ar, int len)
{
	for (int i = 0; i < len; i++)
		cout << ar[i] << " ";
	cout << endl;
}
void Reverse_array(double *ar, int len)
{
	double temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = ar[i];
		ar[i] = ar[len - 1 - i];
		ar[len - 1 - i] = temp;
	}
}