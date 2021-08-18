#include<iostream>
#include"Ex10.6move.h"
using namespace std;

int main()
{
	Move one(1,2), two(10,20);
	one.showmove();
	two.showmove();

	Move three = one.add(two);
	three.showmove();
	return 0;
}