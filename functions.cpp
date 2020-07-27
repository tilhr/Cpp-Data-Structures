//
// looping.cpp
//
// Tyler Rodgers
// 7/14/2020
// Assignment 7 Part 1
// First functions assignment.
//

#include <iostream>
using namespace std;

bool IsOddDigit(char);

int main()
{
    char ch;
    cout << "Enter a character to check if it's odd: ";
    cin >> ch;

    if( IsOddDigit(ch))
    {
        cout << "The character is an odd digit." << endl;
    }
    else
    {
        cout << "The character is not an odd digit." << endl;
    }
    return 0;
}
bool IsOddDigit(char eval)
{
    if( eval >= '1' && eval <= '9' && eval % 2 )
        return true;
    else
        return false;
}