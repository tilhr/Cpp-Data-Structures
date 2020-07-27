//
// looping.cpp
//
// Tyler Rodgers
// 7/08/2020
// Assignment 6
// Looping exercise with stars and spaces.
//

#include <iostream>
using namespace std;

int main() {
   int nRows = -1; // run a loop to get input
   do {
       cout << "Enter number of rows: ";
       cin >> nRows;
       if(nRows < 3)
           cout << "More rows are needed to make a diamond. Try again...\n";
       else if(nRows > 23)
           cout << "TOops! You entered too many rows. Try again...\n";
   } while(nRows < 3 || nRows > 23);
   if(nRows % 2 == 0) 
       ++nRows; 
   for(int row = 1; row <= nRows; ++row) { 
       int nSpaces = abs(nRows/2 - row + 1); // calculate spaces
       for(int space = 1; space <= nSpaces; ++space) // print spaces
           cout << " ";
       int nStars = min(2*row-1, 2*(nRows-row+1)-1); // calculate stars
       for(int star = 1; star <= nStars; ++star) // print stars
           cout << "*";
       cout << "\n"; 
   }
   return 0;
}