#include<iostream>
using namespace std;

class Plorg
{
private:
	static const int LEN = 19;
	char name[LEN];
	int CI;
public:
	Plorg();
	Plorg(const char na[], int ci = 50);
	void showPlorg() const;
	void resetCi();
};