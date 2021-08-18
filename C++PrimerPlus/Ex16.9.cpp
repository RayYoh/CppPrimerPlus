#include<iostream>
#include<vector>
#include<list>
#include<ctime>
#include<algorithm>
using namespace std;
const int SIZE = 100000;

int main()
{
	vector<int> vi0;
	vector<int> vi;
	list<int> li;

	srand((int)time(0));
	for (int i = 0; i < SIZE; i++)
	{
		int temp = rand();
		vi0.push_back(temp);
		vi.push_back(temp);
		li.push_back(temp);
	}

	cout << "The time of sort() by sort: " << endl;
	clock_t start1 = clock();
	sort(vi.begin(), vi.end());
	clock_t end1 = clock();
	cout << (double)(end1 - start1) / CLOCKS_PER_SEC;
	cout << endl;

	cout << "The time of sort() by list: " << endl;
	clock_t start2 = clock();
	li.sort();
	clock_t end2 = clock();
	cout << (double)(end2 - start2) / CLOCKS_PER_SEC;
	cout << endl;

	cout << "The time of sort() by copy: " << endl;
	copy(vi0.begin(), vi0.end(), li.begin());
	clock_t start3 = clock();
	copy(li.begin(), li.end(), vi.begin());
	sort(vi.begin(), vi.end());
	copy(vi.begin(), vi.end(), li.begin());
	clock_t end3 = clock();
	cout << (double)(end3 - start3) / CLOCKS_PER_SEC;
	cout << endl;
	return 0;
}