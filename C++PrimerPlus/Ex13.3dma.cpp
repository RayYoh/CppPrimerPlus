#include <iostream>
#include "Ex13.3dma.h"
using namespace std;

abcDMA::abcDMA(const char * l , int r )
{
	label = new char[strlen(l) + 1];
	strcpy_s(label, strlen(l) + 1, l);
	rating = r;
}
abcDMA::abcDMA(const abcDMA & rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
}
abcDMA::~abcDMA()
{
	delete[]label;
}
abcDMA & abcDMA::operator=(const abcDMA & rs)
{
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
	return *this;
}
void abcDMA::view()const
{
	cout << "Label: " << label << endl;
	cout << "Rating: " << rating << endl;
}
ostream & operator<<(ostream & os, const abcDMA & rs)
{
	os << "Label: " << rs.label << endl;
	os << "Rating: " << rs.rating << endl;
	return os;
}
baseDMA::baseDMA(const char * l, int r):abcDMA(l,r)
{
}
baseDMA::baseDMA(const baseDMA & rs) : abcDMA(rs)
{
}
baseDMA::~baseDMA()
{
}
void baseDMA::view()const
{
	abcDMA::view();
}
lacksDMA::lacksDMA(const char * c, const char * l, int r):abcDMA(l,r)
{
	strcpy_s(color, COL_LEN, c);
}
lacksDMA::lacksDMA(const char *c, const abcDMA & rs) : abcDMA(rs)
{
	strcpy_s(color, COL_LEN, c);
}
ostream & operator<<(ostream & os, const lacksDMA & rs)
{
	os << (abcDMA &)rs;
	os << "Color: " << rs.color << endl;
	return os;
}
void lacksDMA::view()const
{
	abcDMA::view();
	cout << "Color: " << color << endl;
}
hasDMA::hasDMA(const char * s, const char *l, int r) :abcDMA(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}
hasDMA::hasDMA(const char * s, const abcDMA & rs) : abcDMA(rs)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}
hasDMA::hasDMA(const hasDMA & hs):abcDMA(hs)
{
	style = new char[strlen(hs.style) + 1];
	strcpy_s(style, strlen(hs.style) + 1, hs.style);
}
hasDMA::~hasDMA()
{
	delete[] style;
}
hasDMA & hasDMA::operator=(const hasDMA & rs)
{
	if (this == &rs)
		return *this;
	delete[] style;
	abcDMA::operator=(rs);
	style = new char[strlen(rs.style) + 1];
	strcpy_s(style, strlen(rs.style) + 1, rs.style);
	return *this;
}
ostream & operator<<(ostream & os, const hasDMA & rs)
{
	os << (abcDMA &)rs;
	os << "Style: " << rs.style << endl;
	return os;
}
void hasDMA::view()const
{
	abcDMA::view();
	cout << "Style: " << style << endl;
}