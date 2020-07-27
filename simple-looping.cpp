//
// simple-looping.cpp
//
// Tyler Rodgers
// 7/06/2020
// Assignment 5 Part 1
// Prints a table of ASCII characters from ' ' to '~'.
//

#include <iostream>
using namespace std;

int main()
{
  int count = 0;
  
  for (char ch = ' '; ch != '~' + 1; ch++)
  {
    cout << ch;
    if (count == 15)
    {
      count = 0;
      cout << endl;
    }
    else
    {
      cout << " ";
      count++;
    }
  }
}