#include <iostream>
using namespace std;
unsigned int c_in_char(const char *str, char ch);
int main()
{
	char mmm[15] = "minimum";
	//char * wail = "ululate";
	unsigned int ms = c_in_char(mmm, 'm');
	cout << ms << " m in characters " << mmm << endl;
	return 0;

}
unsigned int c_in_char(const char str[], char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}