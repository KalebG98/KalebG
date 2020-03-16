#include<iostream>
#include<cmath>
using namespace std;


#include"Complex.h"

int main()
{
	//a = 5 + 3i
	Complex_Number a(5, 3);
	cout << "Constructor: two values:\na = ";
	a.print_Data();

	// b = 3 - 4i
	Complex_Number b(3, -4);
	cout << "b = ";
	b.print_Data();

	cout << endl;

	Complex_Number c(4);
	cout << "Constructor: one value:\nc = ";
	c.print_Data();

	// c = a.add(b);
	c = a + b;
	cout << "\na + b = ";
	c.print_Data();

	Complex_Number d;
	cout << "constructor:\n d = ";
	d.print_Data();

	d = a - b;
	cout << "\na - b = ";
	d.print_Data();

	Complex_Number e = a * b;
	cout << "\na * b = ";
	e.print_Data();


	return 0;
}