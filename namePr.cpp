#include <iostream>
#include <string>
using namespace std;

int main() {

   string firstName;
   string middleName;
   string lastName;
   
   
   cin >> firstName;
   cin >> middleName;
   cin >> lastName;
   
 
   
   if(lastName.size() > 0){
      cout << lastName << ", " << firstName.at(0) << "." << middleName.at(0) << "." << endl;
   }
   else{
      lastName = middleName;
      cout << lastName << ", " << firstName.at(0) << "." << endl; 
   }

   return 0;
}