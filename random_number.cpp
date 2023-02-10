/*
  Program: Random_num.cpp
  Wrighten by Yeva Usatova
  This program provides random numbers
  Last modification: 04/22/2020
*/
#include <iostream>                        // preprocessor directive
#include <cstdlib>                        // for rand and srand
#include <ctime>                         // for time function
using namespace std;                    // access to the library

int main()                            // beginning of function
{
	// assigning constants
	const int MIN_VALUE = 1;               // smallest random number
	const int MAX_VALUE = 3;              // largest random number
	
	// assigning variables
	int number, value;                // number chosed by user and value chosed by computer
	
	// geting system time
	unsigned seed = time(0);
	
	// seeding random number generator
	srand(seed);
	
	// geting number from user
	cout << "Guess a number between 1 and 3: ";
	cin >> number;
	
	value = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;       // setting formula for random number
	
	if (value == number)                         // seting conditions for exexution of statements
	  {
	  	cout << "Congratulations! You picked " << number;         // this statement will be executed in case
	  	cout << " and the computer picked " << value << " also!\n";  // user will gues the random number
	  }
	else
	  {
	  	cout << "Sorry! You picked " << number;                         // this statement will be executed if user is wrong
	  	cout << ", but the computer chose " << value << ". Try again!\n";
		}  
	return 0;	
}
