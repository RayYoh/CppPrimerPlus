#include<iostream>
#include<cmath>
using namespace std;
struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

void rec2polar(const rect * pxy, polar * pda);
void showPolar(const polar * pda);
int main()
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rec2polar(&rplace,&pplace);
		showPolar(&pplace);
		cout << "Next two numbers(q to quit): ";
	}
	cout << "Done\n";
	return 0;
}
void rec2polar(const rect *pxy, polar * pda)
{
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}
void showPolar(const polar *pda)
{
	const double Rad2deg = 57.29577951;
	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * Rad2deg << " degrees\n";
}