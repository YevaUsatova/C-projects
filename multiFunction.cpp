// Written by Yeva Usatova
// PROGRAM: multiFunction.cpp
// This program will calculate the volume of sphere
// My important variables in this program are PI, radius, volume, rad
#include <iostream>            // access to the library
#include <iomanip>
using namespace std;

// Seting global constant
const double PI = 3.14159;

// Function prototypes
double getRadius();           
double pow(double);

// Definition of main function
// This function gets the input for radius, displays it 
// and culculates volume of sphere.
int main()
{
	// setting variables
	double radius;        // to hold a radius 
	double volume;        // to hold a volume
	
	// setting numeric output formating
	cout << fixed << showpoint << setprecision(2);
	
	// Getting the radius of the circle
	cout << "This programm calculates the volume ";         // output message
	cout << "a sphere.\n";
	radius = getRadius();                                  //call for radius function to display radius calculation
	
	// Calculate volume
	volume =( (4.0 / 3.0) * PI * pow(radius) );            // formula for volume calculation
	
	// Displaying volume
	cout << "The volume of sphere is ";                    // Displaying the results of the calculation for volume
	cout << volume << endl;
	return 0;
}

// Definition of getRadius fanction
// This fanction will ask and display the entered radius value
double getRadius()                                        // Beggining of function
{
	// setting variables
	double rad;
	
	// getting radius from the user
	cout << "Enter the radius of sphere: ";
	cin >> rad;                                          // getting the value of radius from user
	return rad;                                          // returns the definition of radius
}

// Definition of pow(double) function
// This function accepts double argument and returns
// the cube of the argument as double
double pow(double number)
{
	// set the calculation
	return number* number* number;
}
