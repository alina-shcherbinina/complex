#include "pch.h"
#include <iostream>
#include <cmath>
#include <conio.h>
#include <math.h>
#include "complex.h"
using namespace std;

Complex::Complex(double r) {
	re = r;
	im = 0;
}

Complex::Complex(double r, double i) {
	re = r;
	im = i;
}

Complex::Complex(const Complex &c)   // конструктор копирования
{
	re = c.re;
	im = c.im;
}


// Модуль комплексного числа
double Complex::abs(const Complex &c)
{
	return sqrt(re * re + im * im);
}

// оператор присваивания
Complex& Complex::operator = (const Complex &c)
{
	re = c.re;
	im = c.im;

	return (*this);
}

// оператор +=
Complex& Complex::operator += (const Complex &c)
{
	re = re + c.re;
	im = im + c.im;
	return *this;
}

// оператор сложения
Complex Complex::operator + (const Complex &c) const
{
	Complex res(*this);
	return res += c;
}

// оператор вычитания
Complex Complex::operator - (const Complex &c) const
{
	return Complex(re - c.re, im - c.im);
}

// оператор умножения
Complex Complex::operator * (const Complex &c) const
{
	return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
}

// оператор деления
Complex Complex::operator / (const Complex &c) const
{
	Complex temp;

	double r = c.re * c.re + c.im * c.im;
	temp.re = (re * c.re + im * c.im) / r;
	temp.im = (im * c.re - re * c.im) / r;

	return temp;
}
Complex Complex::power(const Complex &c, int n)  {
	Complex temp;
	temp.re = pow(sqrt(c.re*c.re + c.im * c.im), n) * cos(n * atan2(c.im, c.re));
	temp.im = pow(sqrt(c.re*c.re + c.im * c.im), n) * sin(n * atan2(c.im, c.re));
	return temp;
}

ostream &operator<<(ostream &out, const Complex &c)
{
	out << c.re;
	if (c.im > 0)
		out << "+";
	out << c.im << "i";

	return out;
}

istream &operator>>(istream &in, Complex &c)
{
	in >> c.re >> c.im;

	return in;
}

