#include <iostream>
#include "Ex10.6move.h"

using namespace std;

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}

Move Move::add(const Move & m) const
{
	double a, b;
	a = this->x + m.x;
	b = this->y + m.y;
	Move newObj(a, b);
	return newObj;
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}