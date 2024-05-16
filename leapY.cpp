#include <iostream>
using namespace std;

int main() {
   int inputYear;
  
   
   cin >> inputYear;
   
   if(inputYear > 0){
      if (inputYear % 100 == 00){
         if(inputYear % 400 == 0){
            cout << inputYear << " - leap year" << endl;
         }
         else{
            cout << inputYear << " - not a leap year" << endl;
         }
      }
      else if (inputYear % 4 == 0){
         cout << inputYear << " - leap year" << endl;
      }
      else{
      cout << inputYear << " - not a leap year" << endl;
      }
   }
  

   return 0;
}