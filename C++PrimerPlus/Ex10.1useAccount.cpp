#include<iostream>
#include"Ex10.1account.h"
using namespace std;

int main()
{
	Account Ray("Ray Yoh", "13027141958", 255);
	Ray.show();
	Ray.in(1);
	Ray.show();
	Ray.out(55);
	Ray.show();

	return 0;
}