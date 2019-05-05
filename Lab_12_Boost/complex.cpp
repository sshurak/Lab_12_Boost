#include "complex.h"

Complex::Complex()
{
	re = 0.0;
	im = 0.0;
}


Complex::~Complex()
{
}

Complex::Complex(float x, float y)
{
	re = x;
	im = y;
}

Complex Complex::operator+(Complex B)
{
	return Complex(re + B.re, im + B.im);
}

Complex Complex::operator+(float B)
{
	return Complex(re + B, im);
}

Complex Complex::operator*(Complex B)
{
	Complex X;
	X.re = (re*B.re) - (im*B.im);
	X.im = (re*B.im) + (im*B.re);
	return X;
}

Complex Complex::operator/(Complex y)
{
	Complex x;
	x.re = ((re*y.re) + (im*y.im)) / ((y.re*y.re) + (y.im*y.im));
	x.im = ((im*y.re) - (re*y.im)) / ((y.re*y.re) + (y.im*y.im));
	return x;
}

Complex Complex::operator/(float y)
{
	Complex x;
	x.re = (re*y) / (y*y);
	x.im = (im*y) / (y*y);
	return x;
}

Complex Complex::operator-(Complex y)
{
	Complex x;
	x.re = re - y.re;
	x.im = im - y.im;
	return x;
}

Complex Complex::operator*(float B)
{
	Complex X;
	X.re *= B;
	X.im *= B;
	return X;
}

Complex Complex::operator=(float B)
{
	return Complex(re = B, 0.0);
}

Complex Complex::operator^(int degree)
{
	Complex X;
	X.re = re;
	X.im = im;
	for (int i = 1; i < degree; i++)
	{
		X = X * (*this);
	}
	return X;
}

std::ostream& operator<<(std::ostream& os, const Complex &c)
{
	os << c.re;
	if (c.im > 0) os << " + ";
	if (c.im != 0) os << c.im << "i";
	return os;
}

void Complex::sopr()
{
	if (im > 0)
	{
		im = im * (-1);
	}
	else
	{
		im = im * (-1);
	}
}