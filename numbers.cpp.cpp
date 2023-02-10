// Whritten by Yeva Usatova
// PROGRAM: numbers.cpp
// This program reads the file and counts numbers
// My important variables are number, total, count
#include <iostream>         // Access to the library
#include <fstream>          // File access heder
#include <iomanip>         
using namespace std;

int main ()
{	
    // Set up variables
	double number;          // represents numbers from the file
	double total = 0.0;     // total set to 0 
	int count = 0;          // to count every number
	
	// Set up numeric output formating
	cout << fixed << showpoint << setprecision(2);
	
	// Open the file
	ifstream inputFile;
	inputFile.open ("numbers.txt");
	
	if (inputFile)                // to check if file is working
	{
	
	// Read the number from the file
	// Dispaly them
	cout << "I will display and count numbers: \n";
	
    // Set up a loop for reading numbers from file
	while (inputFile >> number)
	   {
	    total+= number;                   // to count sum of the numbers
	    count++;                          // to count numbers read from the file
		cout << count << ": "<< number << endl;  // display the output
		
    	}
    
    cout << "Sum of the numbers is " << total << endl;     // dispaly sum of the numbers
	
	// Close the file
	inputFile.close();
    }
    else 
       {
          cout << "Error. File is missing\n";      // error output if file is unawailable
       }
	return 0;                                     // return value 0
}
