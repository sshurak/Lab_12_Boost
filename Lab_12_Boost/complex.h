#pragma once
#ifndef ComplexClasses_H
#define ComplexClasses_H
#include <iostream>
class Complex
{
	float re;
	float im;
public:
	Complex();
	Complex(float x, float y);
	~Complex();
	Complex operator=(float B);
	Complex operator+(Complex B);
	Complex operator*(Complex B);
	Complex operator-(Complex B);
	Complex operator/(Complex B);
	Complex operator+(float B);
	Complex operator/(float B);
	Complex operator*(float B);
	Complex operator^(int degree);
	friend std::ostream & operator<<(std::ostream & os, const Complex & c);
	void SetRe(float x) { re = x; };
	void SetIm(float x) { im = x; };
	void sopr();
};

#endif