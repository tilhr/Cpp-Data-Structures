//
// time.cpp
//
// Tyler Rodgers
// 6/29/2020
// Lab 3
// The purpose of this program is to compute small time calculations.
//

#include <iostream>
using namespace std;

int main()
{
    int seconds;
    float num_mins;

    cout << "\nEnter time in seconds : ";
    cin >> seconds;
    cout << "\nThat is " << seconds << " seconds" << endl;

    // calculations
    if (seconds <= 59)
    {
        cout << seconds;
        cout << " is less that 60 seconds." << endl;
    }
    else if (seconds >= 60 && seconds < 3600)
    {
        num_mins = seconds / 60.0;
        cout << num_mins << " minutes in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 3600 && seconds < 86400)
    {
        num_mins = seconds / 3600.0;
        cout << num_mins << " hours in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 86400)
    {
        num_mins = seconds / 86400.0;
        cout << num_mins << " days in ";
        cout << seconds << " seconds" << endl;
    }

    return 0;
}