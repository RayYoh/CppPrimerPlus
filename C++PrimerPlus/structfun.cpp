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

polar rec2polar(rect xypos);
void showPolar(polar dapos);
int main()
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin>>rplace.x>>rplace.y)
	{
		pplace = rec2polar(rplace);
		showPolar(pplace);
		cout << "Next two numbers(q to quit): ";
	}
	cout << "Done\n";
	return 0;
}
polar rec2polar(rect xypos)
{
	polar answer;
	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}
void showPolar(polar dapos)
{
	const double Rad2deg = 57.29577951;
	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad2deg << " degrees\n";
}