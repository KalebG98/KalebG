#include <iostream>
#include <cmath>
using namespace std;

#include "Complex.h"


Complex_Number::Complex_Number(double _r, double _i)
{
	r = _r;
	i = _i;
}


Complex_Number::Complex_Number(double _r)
{
	r = _r;
	i = 0.0;
}


Complex_Number::Complex_Number()
{
	r = 0.0;
	i = 0.0;
}


Complex_Number Complex_Number::add(Complex_Number &right)
{

	double a = r;
	double b = i;

	double c = right.r;
	double d = right.i;

	double nr = a + c;
	double ni = b + d;

	Complex_Number tmp(nr, ni);
	return tmp;
}

//overloading operators
Complex_Number Complex_Number::operator+ (Complex_Number &right)
{
	return Complex_Number(r + right.r, i + right.i);
}

// Overloaded '-' 
Complex_Number Complex_Number::operator- (Complex_Number &right)
{
	return Complex_Number(r - right.r, i - right.i);
}

// Overloaded '*' 
Complex_Number Complex_Number::operator* (Complex_Number &right)
{

	return Complex_Number((r * right.r) - (i * right.i), (r * right.i) + (i * right.r));
}


Complex_Number Complex_Number::operator/ (double right)
{
	return Complex_Number(r / right, i / right);
}



void Complex_Number::print_Data()
{
	if (i < 0)
		cout << r << " - " << (-i) << "i" << endl;
	else
		cout << r << " + " << i << "i" << endl;
}