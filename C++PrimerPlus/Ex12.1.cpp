#include "Ex12.1.h"
#include <iostream>

Cow::Cow()
{
	name[0] = '\0';
	hobby = NULL;
	weight = 0;
}
Cow::Cow(const char * num, const char * ho, double wt)
{
	strcpy_s(name, num);
	hobby = new char[20];
	strcpy_s(hobby,20, ho);
	weight = wt;
}
Cow::Cow(const Cow & c)
{
	strcpy_s(name,20, c.name);
	hobby = new char[20];
	strcpy_s(hobby,20, c.hobby);
	weight = c.weight;
}
Cow::~Cow()
{
	name[0] = '\0';
	delete[] hobby;
	weight = 0;
}
Cow & Cow::operator=(const Cow & c)
{
	if (this == &c)
		return *this;
	delete[] hobby;
	strcpy_s(name,20, c.name);
	hobby = new char[20];
	strcpy_s(hobby,20, c.hobby);
	weight = c.weight;
	return *this;
}
void Cow::ShowCow() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Hobby: " << hobby << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}