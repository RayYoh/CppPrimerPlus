#include "Ex11.7complex.h"

Complex::Complex(double re,double im)
{
	real = re;
	imag = im;
}
Complex Complex::operator+(const Complex com)const
{
	Complex result;
	result.real = real + com.real;
	result.imag = imag + com.imag;
	return result;
}
Complex Complex::operator-(const Complex com)const
{
	Complex result;
	result.real = real - com.real;
	result.imag = imag - com.imag;
	return result;
}
Complex Complex::operator*(const Complex com)const
{
	Complex result;
	result.real = real * com.real - imag * com.imag;
	result.imag = real * com.imag + imag * com.real;
	return result;
}
Complex Complex::operator~()const
{
	Complex result;
	result.real = real;
	result.imag = -imag;
	return result;
}
Complex operator*(double mult, Complex & com)
{
	Complex result;
	result.real = mult*com.real;
	result.imag = mult*com.imag;
	return result;
}
ostream & operator<<(ostream & os, const Complex & com)
{
	os << "(" << com.real << ", " << com.imag << "i)";
	return os;
}
istream & operator>>(istream & in, Complex & com)
{
	cout << "real: ";
	in >> com.real;
	cout << "imaginary: ";
	in >> com.imag;
	return in;
}