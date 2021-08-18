#include<iostream>
using namespace std;
struct application
{
	char name[30];
	int credit_rating[3];
};
void showApplication(application *ap);
int main()
{
	application ap = { "Ray",{1,2,3} };
	showApplication(&ap);
	return 0;
}
void showApplication(application *ap)
{
	cout << "Name: " << ap->name << endl;
	cout << "Credit Rating: ";
	for (int i = 0;i < 3; i++)
		cout << ap->credit_rating[i] << endl;
}