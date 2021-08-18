#include <iostream>
using namespace std;

class Complex
{
private:
	double real;
	double imag;
public:
	Complex(double re = 0, double im=0);
	Complex operator+(const Complex com)const;
	Complex operator-(const Complex com)const;
	Complex operator*(const Complex com)const;
	Complex operator~()const;
	friend Complex operator*(double mult,Complex & com);
	friend ostream & operator<<(ostream & os, const Complex & com);
	friend istream & operator>>(istream & in, Complex & com);
};