#include <iostream>
#include "Ex12.1.h"
using namespace std;

int main()
{
	Cow a("Ray", "Fishing", 75.0);
	Cow b = a;
	b.ShowCow();
	Cow c("Yoh", "Ok", 60);
	b = c;
	b.ShowCow();
	return 0;
}