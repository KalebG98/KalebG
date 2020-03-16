#include <iostream>
#include <cmath>
using namespace std;

int intpower(int base, int exponent); //Initial function

int main() //Program start
{
	int base;
	int exponent;

	cout << "Enter the number you want to use as the base. \n"; //Enter base number 
	cin >> base;
	cout << "Enter the number you want to use as the exponent. \n"; //Enter exponent number 
	cin >> exponent;
	cout << base << " to the power of " << exponent << " is: " << intpower(base, exponent); //Calls function
	getchar();
	getchar();

}

int intpower(int base, int exponent) // Function
{
	if (exponent == 0)
		return 1;
	else
		return base * intpower(base, exponent - 1);

}