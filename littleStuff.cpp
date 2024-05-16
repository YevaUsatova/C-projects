int main() {
   string codeWord;
   unsigned int i;
   
   cin >> codeWord;

   for(i = 0; i < codeWord.size(); ++i){
      if(isdigit(codeWord.at(i)) == false ){
         codeWord.replace(i, 1, "0") ;
      }
   }

   cout << "Valid password: " << codeWord << endl;


   int userNum;
   int i;
   int j;

   cin >> userNum;
   // To print space with numbers; 
   for(i = 0; i <= userNum; ++i){
      for(j = 0; j < i; j++){
         cout <<  " " ;
      }
      cout  << i << endl;
   }

    //To print out rows and cols
    int numRows;
   int numColumns;
   int currentRow;
   int currentColumn;
   char currentColumnLetter;

   cin >> numRows;
   cin >> numColumns;
     
   
   
   for(currentRow = 1; currentRow <= numRows ; currentRow++){  
      currentColumnLetter = 'A';
      for(currentColumn = 1; currentColumn <= numColumns; currentColumn++ ){ 
         cout << currentRow << currentColumnLetter << " ";
         currentColumnLetter = currentColumn + 'A';
      }  
    
   }
         
      

   cout << endl;


   
   return 0;
}


