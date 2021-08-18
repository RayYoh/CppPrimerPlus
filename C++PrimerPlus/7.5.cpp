#include<iostream>
using namespace std;
double biggest(const double arr[], int len);
int main()
{
	double arr[5] = { 0,1,2,3,4 };
	double max = biggest(arr, 0);
	cout << max;
	return 0;
}
double biggest(const double arr[], int len)
{
	double max;
	if (len < 1)
	{
		cout << "Invalid array size of " << len << endl;
		cout << "Returning a value of 0\n";
		return 0;
	}
	else
	{
		max = arr[0];
		for (int i = 1; i < len; i++)
			if (arr[i] > max)
				max = arr[i];
		return max;
	}
}