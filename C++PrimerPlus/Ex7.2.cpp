#include<iostream>
using namespace std;
const int SIZE = 10;
int TrueSize = 0;
void inputArr(double ar[]);
void showArr(const double ar[]);
double average(const double ar[]);
int main()
{
	double ar[SIZE];
	inputArr(ar);
	showArr(ar);
	double ave = average(ar);
	cout << endl;
	cout << "调和平均值：" << ave << endl;
	return 0;
}
void inputArr(double ar[])
{
	int score;
	cout << "Please input 10 scores: ";
	for (int i = 0; i < SIZE; i++)
	{
		if(cin>>ar[i])
		{ 
		}
		else
		{
			TrueSize = i;
			break;
		}
		TrueSize = i;
	}
}
void showArr(const double ar[])
{
	int i = 0;
	cout << "All acores: ";
	while (i < TrueSize)
		cout << ar[i++] <<" ";
}
double average(const double ar[])
{
	double sum=0;
	for (int i = 0; i < TrueSize; i++)
		sum += ar[i];
	return sum / TrueSize;
}