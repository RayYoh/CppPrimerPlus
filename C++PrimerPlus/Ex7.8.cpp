#include<iostream>
#include<array>
#include<string>
using namespace std;

const int Seasons = 4;
const char * Snames[Seasons] = { "Spring","Summer","Fall","Winter" };
struct box
{
	double expenses[Seasons];
};
void fill(box * pa);
void show(box * da);

int main()
{
	box mybox;
	fill(&mybox);
	show(&mybox);
	return 0;
}
void fill(box * pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expemses: ";
		cin >> pa->expenses[i];
	}
}
void show(box * da)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da->expenses[i] << endl;
		total += da->expenses[i];
	}
	cout << "Total Exoenses: $" << total << endl;
}