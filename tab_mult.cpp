// Written by Yeva Usatova
// PROGRAM : table_mult.cpp
//This program will display the multiplication table
// The main variable and constants are NUM_ROWS, NUM_COL, rows, col, nums
// **********************************************************************
// I HAVE TRIED FOR NUMEROUS TIMES
// I NEED AN EXPLANATION ON WHERE ARE MY MISTAKES
// I DONT UNDERSTAND COMPLETELY WHAT IS WRITTEN IN THE BOOK
// WHATEVER I GOT FROM THERE IS IN THIS PROGRAM
// THE REST I DONT UNDERSTAND!!!
//**********************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

// Globas constant
    const int ROWS = 8;                             //setting up constant for row
    const int COL = 9;                              // setting up const for columns

// Creating second function
int getTable(const int [], const int [] );        // function prototype

// creating the main function
// this function will display tabales
int main ()
{
	// defining variables for table
	int nums [ROWS][COL];                                                  // arrays assignment
	
	//Displaying the output
	cout << " Here are the tables of multiplication: \n";
	getTable (nums, ROWS);                                            // calling for function
	
	return 0;
}

// Definition of function getTables
// This function identifies rows and
// columns and represents them in 
// multiplication table
int getTable ( const int nums1 [], const int nums2 [])
{
int culc, rows, col;
	// loop for calculation 
   for (rows=0; rows < ROWS; rows++)                           // setting up nested loop
    {
        for (col = 0; col < COL; col++)
     	{
			culc = rows *col;                                 // setting up a multiplication
			cout << (rows+1) << " * " << (col+1);
			cout << " = " << setw (4) << culc ;              // setting the spase between tables		
		}
	cout << endl;
	} 
}   
