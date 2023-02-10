/*
  Program: Pension_eligability.cpp
  Wrighten by Yeva Usatova
  This program decides rather person is elligible for recieving pension
  Last modification: 04/22/2020
*/
#include <iostream>                                    // preprocessor directive
using namespace std;                                  // access to the library

int main()                                           // beginning of function
{
	// assigning constants 
	const int MIN_YEARS_OLD = 55;                        
	const int MIN_SERVICE_YEARS = 15;
	
	// assigning variables
	int age, service_years;                         // input information from user
	int value1, value2;                            // for calculation of remaing years to become eligible
	
	// coolecting information from user
	cout << "How old are you? ";                   // program is asking for age of applicant
	cin >> age;                                  
	
	cout << "How many years of service do you have in company? ";      // program is asking for years of service
	cin >> service_years;
	
	value1 = (MIN_YEARS_OLD - age);	                                  // this operation will count years
	value2 = (MIN_SERVICE_YEARS - service_years);                     // this operation will count servis years
	
	if (age >= MIN_YEARS_OLD && service_years >= MIN_SERVICE_YEARS)    // setting a condition for execution of statemts
	   {
	   cout << "Congratulation! You are eligible for pension!\n";       // this statement will run if user meets all cretereas
       }
	
	else if (age < MIN_YEARS_OLD && service_years >= MIN_SERVICE_YEARS)
	   {
		cout << "You are too young. ";                                  // this statement will run if user isnt old enough
		cout << "You need to wait " << value1 << " years more.\n";
		} 
	
	else if (age >= MIN_YEARS_OLD && service_years < MIN_SERVICE_YEARS)
	   {
		cout << "You need more years of service. ";                      // this statement will run if user didnt work enough
		cout << "Come back in " << value2 << " years.\n";
		} 	
		
	else                                                                 // executes, if non of the cretera were met by user
	   {
		cout << "You are too young. ";                                
		cout << "You need to wait " << value1 << " years more.\n";
		cout << "You need more years of service. ";
		cout << "Come back in " << value2 << " years.\n";
		}
	
	return 0;		
	   

}


