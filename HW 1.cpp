#include<iostream>

#include <cmath> //Math library

using std::endl;

using std::cout;

double hypotenuse(double, double); // Function declaration

int main() //Program start
{
	{ 
		cout << "Hypotenuse of the first triangle is " << hypotenuse(3.0, 4.0) << endl; //Equation for the first triangle
	}

	{
		cout << "Hypotenuse of the second triangle is " << hypotenuse(5.0, 12.0) << endl; //Equation for the second triangle
	}

	{
		cout << "Hypotenuse of the third triangle is " << hypotenuse(8.0, 17.0) << endl; //Equation for the third triangle 
		getchar();
		getchar();
		return 0;
	}

}

double hypotenuse(double x, double y) //Function 

{
	double hypotenuse = sqrt(x*x + y*y);

	return hypotenuse;

}


