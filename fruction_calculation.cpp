/* PROGRAM: FRUCTION.CPP
   Wrighten by Yeva Usatova
   This program calculates fractions
   Last modification: 3/30/2020
*/
#include <iostream>                               //preprocessor directive
using namespace std;                              //acess to the library

int main()                                        //beginning of function
{
	int numerator, denominator, remainder;       //variables
	
	cout << "Enter numerator and denominator: "; //output information
	cin >> numerator >> denominator;             //input informtion
	cout << "Quotient is: ";
	cout << (numerator/denominator) << endl;    
	cout << "Remainder is ";
	cout << (numerator % denominator ) << endl;
	return 0;                                   //sends 0 to opperating system
}   
