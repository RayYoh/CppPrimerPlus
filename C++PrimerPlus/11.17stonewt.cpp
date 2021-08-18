#include "11.16stonewt.h"

Stonewt::Stonewt(double lbs,int stn ,Mode form)
{
	mode = form;
	if (mode == INT_B)
	{
		stone = int(lbs) / Lbs_Per_stn;
		pds_left = int(lbs) % Lbs_Per_stn + lbs - int(lbs);
		pounds = lbs;
	}
	else if(mode == STONE)
	{
		stone = stn;
		pds_left = lbs;
		pounds = stn * Lbs_Per_stn;
	}
	else
		stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt()
{

}
void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}
void Stonewt::show_lbs()const
{
	cout << pounds << " pounds\n";
}
ostream & operator<< (ostream & os, const Stonewt & s)
{
	if(s.mode == s.STONE)
		os << s.stone << " stone, " << s.pds_left << " pounds\n";
	else
		os << s.pounds << " pounds\n";
}