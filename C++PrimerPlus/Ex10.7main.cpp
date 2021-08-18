#include "Ex10.7plorg.h"

int main()
{
	Plorg one, two("Ray", 20);
	one.showPlorg();
	two.showPlorg();

	two.resetCi();
	two.showPlorg();

	return 0;
}