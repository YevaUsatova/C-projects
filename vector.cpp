// Written by Yeva Usatova
// PROGRAM: vector.cpp
// This program will calculate dot product of two vectors.
// Main constants and variables: ARRAY_SIZE, total
#include <iostream>
using namespace std;

// Setting up global constants
const int ARRAY_SIZE = 3;                                               // Size of the set of arrays

// creating function
int dotProduct (int [],int [], int);                                   // function prototype

//Function definition Main
//This function calls in the other function
//that performs culculation and outpits the result
int main ()
{
	//Setting up arrays
	int set1 [ARRAY_SIZE]= {2, 4, 6};                                         // first row of array
    int set2 [ARRAY_SIZE]= {1, 3, 5};                                        // second row of array
	
	// Setting the otput for set 1 and 2
	cout << "Here is the product of two sets of numbers : ";                 // displaying output statement
	dotProduct (set1, set2, ARRAY_SIZE);                                         // calling the function
     
    return 0;
}

// Definition of function showV
// This function calculates dot product
//and recievs arrays information

int dotProduct (int nums1 [], int nums2 [] , int size)                          // head of a second function
{
	//setting total to 0
	int total = 0;
	
	// setting up a for loop for culculations
	for (int index = 0; index < size; index++ )
	
    total += nums1 [index] * nums2 [index];                               // calculating total     
	
	cout << total;                                                        // displaying total
}
