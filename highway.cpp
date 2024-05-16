#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;

   if((highwayNumber % 100 == 00) || (highwayNumber < 1) || (highwayNumber > 1000)){
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }
   else if((highwayNumber > 100) && (highwayNumber <= 999 )){
      cout << "I-" << highwayNumber << " is auxiliary, ";
      highwayNumber = highwayNumber % 100;
      
      if((highwayNumber % 2 == 1) && (highwayNumber < 10)){
         cout << "serving I-" << highwayNumber % 10 << ", going north/south." << endl;
      }
      else if((highwayNumber % 2 == 1) && (highwayNumber >= 10)){
         cout << "serving I-" << highwayNumber << ", going north/south." << endl;
      }
      else if((highwayNumber % 2 == 0) && (highwayNumber >= 10)){
         cout << "serving I-" << highwayNumber << ", going east/west." << endl;
      }
      else if((highwayNumber % 2 == 0) && (highwayNumber < 10)){
         cout << "serving I-" << highwayNumber % 10 << ", going east/west." << endl;
      } 
      
   }
   else if ((highwayNumber > 0) && (highwayNumber < 100)){
       if((highwayNumber % 2 == 1) && (highwayNumber < 10)){
         cout << "I-" << highwayNumber % 10 << " is primary, going north/south." << endl;
      }
      else if((highwayNumber % 2 == 1) && (highwayNumber >= 10)){
         cout << "I-" << highwayNumber << " is primary, going north/south." << endl;
      }
      else if((highwayNumber % 2 == 0) && (highwayNumber >= 10)){
         cout << "I-" << highwayNumber << " is primary, going east/west." << endl;
      }
      else if((highwayNumber % 2 == 0) && (highwayNumber < 10)){
         cout << "I-" << highwayNumber % 10 << " is primary,  going east/west." << endl;
      } 
   }
      

   return 0;
}