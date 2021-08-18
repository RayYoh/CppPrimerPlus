#include<iostream>
using namespace std;
struct CandyBar
{
	const char *name;
	float weight;
	int heat;
};
void set(CandyBar &one, const char *name = "Millennium",float weight = 2.85, int heat = 350);
void show(const CandyBar & one);
int main()
{
	CandyBar one;
	set(one,"Ray");
	show(one);
	return 0;
}
void set(CandyBar &one, const char *name, float weight, int heat)
{
	//strncpy_s(one.name, name, 50);
	one.name = name;
	one.weight = weight;
	one.heat = heat;
}
void show(const CandyBar & one)
{
	cout << "CandyBar's name: " << one.name << endl;
	cout << "Weight: " << one.weight << endl;
	cout << "Heat: " << one.heat << endl;
}