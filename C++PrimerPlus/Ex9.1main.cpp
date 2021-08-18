#include<iostream>
#include "Ex9.1golf.h"
using namespace std;

int main()
{
	char name[40] = "Ray";
	int hc = 5;
	Golf one(name, hc), two[3];
	one.showGolf();

	int num = 0;
	for (int i = 0; i < 3; i++, num++)
		two[i].setGolf();
	for (int i = 0; i < num; i++)
		two[i].showGolf();
	return 0;
}