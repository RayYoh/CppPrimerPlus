#include <cstring>
#include "12.1strngbad.h"

int StringBad::num_strings = 0;

StringBad::StringBad(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len+1,s);
	num_strings++;
	cout << num_strings << ": \"" << str << "\" object created\n";
}
StringBad::StringBad()
{
	len = 4;
	str = new char[len];
	strcpy_s(str, len,"C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" default object created\n";
}
StringBad::~StringBad()
{
	cout << "\"" << str << "\" object deleted, ";
	--num_strings;
	cout << num_strings << " left\n";
	delete[] str;
}
ostream & operator<<(ostream & os, const StringBad & st)
{
	os << st.str;
	return os;
}