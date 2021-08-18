#include<iostream>
using namespace std;
const int ArSize = 8;
int sumArr(int *begin, int *end);
int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,126 };
	int sum = sumArr(cookies, cookies + ArSize);
	cout << "Total cookies eaten: " << sum << endl;
	sum = sumArr(cookies, cookies + 3);
	cout << "First 3: " << sum << endl;
	sum = sumArr(cookies + 4, cookies + 8);
	cout << "Last 4: " << sum << endl;
	return 0;
}
int sumArr(int *begin, int *end)
{
	const int *pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
	{
		total += *pt;
	}
	return total;
}