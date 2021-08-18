#include<iostream>
using namespace std;

template<typename T>
T maxn(T arr[], int n );
template<> char * maxn(char * arr[], int n);
int main()
{
	int arr1[6] = { 1,2,3,4,5,6 };
	double arr2[4] = { 2.1,3.2,5.4,6.5 };
	int max_int = maxn(arr1,6);
	double max_double = maxn(arr2,4);
	cout << max_int << endl;
	cout << max_double << endl;
	char a[] = "a", b[] = "ab", c[] = "abc", d[] = "abcd", e[] = "abcde";
	char * arr3[5] = { a,b,c,d,e };
	char * max_add = maxn(arr3, 5);
	cout << static_cast <const  void  *>(arr3[4]) << endl;
	cout << static_cast <const  void  *>(max_add) << endl;
	return 0;
}
template<typename T>
T maxn(T arr[], int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
template<> char * maxn(char * arr[], int n)
{
	char * max = arr[0];
	int max_len = strlen(arr[0]);
	for (int i = 1; i < n; i++)
	{
		if (strlen(arr[i]) > max_len)
		{
			max = arr[i];
			max_len = strlen(arr[i]);
		}
	}
	return max;
}