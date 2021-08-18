#include <iostream>
using namespace std;
class StringBad
{
private:
	char * str;
	int len;
	static int num_strings;		//number of objects
public:
	StringBad(const char * s);
	StringBad();
	~StringBad();

	friend ostream & operator<<(ostream & os, const StringBad & st);
};