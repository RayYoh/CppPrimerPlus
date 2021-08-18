#include <cstring>
#include "12.4string1.h"
using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	num_strings++;
}
String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}
String::String(const String & st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
}
String::~String()
{
	--num_strings;
	delete[]str;
}
String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	delete[]str;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	return *this;
}
String & String::operator=(const char *s)
{
	delete[]str;
	len = std::strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	return *this;
}
char & String::operator[](int i)
{
	return str[i];
}
const char & String::operator[](int i)const
{
	return str[i];
}
void String::Stringlow()
{
	for (int i = 0; i < len; i++)
		str[i] = tolower(str[i]);
}
void String::Stringup()
{
	for (int i = 0; i < len; i++)
		str[i] = toupper(str[i]);
}
int String::num(char c) const
{
	int num = 0;
	for (int i = 0; i < len; i++)
	{
		if (c == str[i])
			num++;
	}
	return num;
}
String operator+(const String &st1, const String &st2)
{
	String m;
	m.len = st1.len + st2.len;
	m.str = new char[m.len + 1];
	strcat_s(m.str,m.len+1, st1.str);
	strcat_s(m.str,m.len+1, st2.str);
	return m;
}
bool operator<(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
	return st2 < st1;
}
bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}
ostream & operator<<(ostream & os, const String &st)
{
	os << st.str;
	return os;
}
istream & operator>>(istream & is, String &st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}