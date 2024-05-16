#include <iostream>
using namespace std;

int main() {

   int num;
   
   cin >> num;
   
   if(num <= 0){
      cout << "No change" << endl;
   }
   if (num > 0){
      if (num / 100 == 1){
         cout << "1 Dollar" << endl;
      }
      else if (num > 100) { 
         cout << num / 100 << " Dollars" << endl;
      } 
      num = num % 100;
      if ( ((num % 100) > 0) && ((num % 100) < 99) ){
         if (num >= 25){
            if (num / 25 == 1){
               cout << "1 Quarter" << endl;
            }
            else{
               cout << num / 25 << " Quarters" << endl;
            }
         }
         num = num - (25 * (num / 25));
         if (num >= 10){
            if (num / 10 == 1){
               cout << "1 Dime" << endl;
            }
            else{
               cout << num / 10 << " Dimes" << endl;
            }
         }
         num = num - (10 * (num / 10));
         if (num >= 5){
            cout << "1 Nickel" << endl;
         }
         num = num - 5;
         if ((num >= 1)){
            if(num == 1){
              cout << "1 Penny" << endl;
            }
            else{
               cout << num << " Pennies" << endl;
            }
         } 
      }
   }
   
   return 0;
}