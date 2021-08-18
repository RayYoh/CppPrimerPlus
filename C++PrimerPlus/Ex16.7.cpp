#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;

vector<int> Lotto(int m, int n);
void show(int n) { cout << n << " "; }

int main()
{
	srand((int)time(0));
	cout << "Display the random number: " << endl;
	vector<int> winner;
	winner = Lotto(51, 6);
	for_each(winner.begin(), winner.end(), show);

	return 0;
}
vector<int> Lotto(int m, int n)
{
	vector<int> temp;
	for (int i = 0; i <= m; i++)
		temp.push_back(i);
	for_each(temp.begin(), temp.end(), show);
	cout << endl;
	random_shuffle(temp.begin(), temp.end());
	for_each(temp.begin(), temp.end(), show);
	cout << endl;
	/*vector<int>::iterator last;
	last = (temp.begin(), temp.begin() + n);
	temp.erase(last, temp.end());*/
	temp.resize(n);
	return temp;
}