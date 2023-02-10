/* 
   PROGRAM: CIRLCE.CPP
   Wrighten by Yeva Usatova
   This program calculates area and circumference of circle
   Last modification: 3/30/2020
*/
#include <iostream>                          //preprocessor directive
using namespace std;                         //access to the library

int main()                                   //begining of function
{
   const double PI= 3.14159;                 //constant for Pi
   
   unsigned int radius;                      //a set range of positive numbers
   double area;                             //variables
   double circumference; 
    
   cout << "Enter radius: ";                //Output information
   cin >> radius;                           //Input information
   area = PI * radius * radius;            //formulas for calcutation
   cout << "Area is: " << area << endl;
   circumference = 2 * PI * radius;
   cout << "Circumference is " << circumference << endl;
   return 0;
}
