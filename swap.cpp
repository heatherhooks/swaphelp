// Swap.cpp - This program determines the minimum and maximum of three values input by 
// the user and performs necessary swaps.  
// Input:  Three int values. 
// Output:  The numbers in numerical order. 

#include <iostream>
using namespace std;

int main()
{
   // Declare variables
   int first = 0;	// First number
   int second = 0;	// Second number
   int third = 0;	// Third number
   int temp; 		// Used to swap numbers
	   const string SENTINEL = "done"; // Named constant for sentinel value
   string repeat; 
   bool notDone = true; //loop control  
   
   // Get user input 		
   cout << "Enter first number: ";
   cin >> first;
   cout << "Enter second number: ";
   cin >> second;
   cout << "Enter third number: ";
   cin >> third;
   
	while(notDone == true){	
      if(first > second);
      else if(second > third);
      else if(third > first);   
      
      // Test to see if the first number is greater than the second number
   temp = first;
   first = second;
   second = temp;

   // Test to see if the second number is greater than the third number
   temp = second;
   second = third;
   third = temp;
				
   // Test to see if the first number is greater than the second number again
   	temp = first;
    first = second;
    first = temp;	
  

   // Print numbers in numerical order
   cout << "Smallest: " << first << endl;
   cout << "Next smallest: " << second << endl;
   cout << "Largest: " << third << endl; 
   
   cout << "Enter any letter to continue or done to quit: ";
   cin >> repeat;}
   if (repeat == SENTINEL){
       notDone = false;
   } else {
   cout << "Enter first number: ";
   cin >> first;
   cout << "Enter second number: ";
   cin >> second;
   cout << "Enter third number: ";
   cin >> third;
   }

   return 0;
} // End of main function
