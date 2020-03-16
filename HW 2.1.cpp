#include <iostream>0
#include <cmath>
using namespace std;

unsigned long long int factorial(unsigned int number); //Function name

int main() //Program start
{
	for (unsigned int i = 0; i <= 21; ++i)
	{
		cout << i << "! = " << factorial(i) << "\n";
	}
	getchar();
	getchar();
	return 0;
}
unsigned long long int factorial(unsigned int number) //Function
{
	if (number <= 1)
	{
		return 1;
	}
	else
	{
		return (number * factorial(number - 1)); //Return function
	}
}