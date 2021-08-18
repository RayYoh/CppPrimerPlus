#include <iostream>
using namespace std;

class Stonewt
{
public:
	enum Mode{STONE,INT_B,FLOAT_B};
private:
	enum {Lbs_Per_stn = 14};
	int stone;
	double pds_left;
	double pounds;
	Mode mode;
public:
	Stonewt(double lbs, int stn = 0, Mode form = FLOAT_B);
	~Stonewt();
	void show_lbs() const;
	void show_stn() const;
	friend ostream & operator<<(ostream & os, const Stonewt & s);
};