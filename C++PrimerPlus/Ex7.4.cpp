#include<iostream>
using namespace std;
double probolity(int one, int two);
int main()
{
	int one = 47, two = 27;
	cout << probolity(one, two) << endl;
	return 0;
}
double probolity(int one, int two)
{
	double result1 =1.0, result2 = 1.0;
	int n, p;
	for (n = one, p = 5; p > 0; n--, p--)
		result1 *= n / p;
	for (n = two, p = 1; p > 0; n--, p--)
		result2 *= n / p;
	double result = result1 * result2;
	return result;
}