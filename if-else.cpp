//
// if-else.cpp
//
// Tyler Rodgers
// 7/02/2020
// Assignment 4
// Practicing if/else programming.
//

#include <iostream>
using namespace std;

int main()
{
   char ch;

   cout << "Enter a single letter and I will tell you the digit\nit corresponds to on the telephone keypad "
    << endl;
   cin >> ch;

   if (ch == 'a' || ch == 'b' || ch == 'c'
       || ch == 'd' || ch == 'e' || ch == 'f'
       || ch == 'g' || ch == 'h' || ch == 'i'
       || ch == 'j' || ch == 'k' || ch == 'l'
       || ch == 'm' || ch == 'n' || ch == 'o'
       || ch == 'p' || ch == 'r' || ch == 's'
       || ch == 't' || ch == 'u' || ch == 'v'
       || ch == 'w' || ch == 'x' || ch == 'y'
       ||ch=='!' || ch=='?'||ch=='.'||ch=='@'||ch=='_')
   {
       cout << "The character " << ch << " is not a capital letter" << endl;
   }

   else
   {
       if (ch == 'A' || ch == 'B' || ch == 'C')
       {
           cout << "The character " << ch << " corresponds to the digit 2 on the keypad" << endl;
       }
       else if (ch == 'D' || ch == 'E' || ch == 'F')
       {
           cout << "The character " << ch << " corresponds to the digit 3 on the keypad" << endl;
       }
       else if (ch == 'G' || ch == 'H' || ch == 'I')
       {
           cout << "The character " << ch << " corresponds to the digit 4 on the keypad" << endl;
       }
       else if (ch == 'J' || ch == 'K' || ch == 'L')
       {
           cout << "The character " << ch << " corresponds to the digit 5 on the keypad" << endl;
       }
       else if (ch == 'M' || ch == 'N' || ch == 'O')
       {
           cout << "The character " << ch << " corresponds to the digit 6 on the keypad" << endl;
       }
       else if (ch == 'P' || ch == 'R' || ch == 'S')
       {
           cout << "The character " << ch << " corresponds to the digit 7 on the keypad" << endl;
       }
       else if (ch == 'T' || ch == 'U' || ch == 'V')
       {
           cout << "The character " << ch << " corresponds to the digit 8 on the keypad" << endl;
       }      
       else if (ch == 'W' || ch == 'X' || ch == 'Y')
       {
           cout << "The character " << ch << " corresponds to the digit 9 on the keypad" << endl;
       }
       else if (ch == 'Z' || ch == 'z' || ch == 'Q' || ch == 'q' )
       {
           cout << ch << " does'nt corresponds to any digit on the telephone" << endl;
       }
   }
}