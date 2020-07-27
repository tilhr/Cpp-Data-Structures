//
// loop.cpp
//
// Tyler Rodgers
// 7/02/2020
// Lab 4
// A simple loop.
//

#include <iostream>
using namespace std;
int main() {
    int input = 0;
    int sum = 0; 
    int count = 0;
    int largest = 0;
    int smallest;
    float arr [count];
    float average;
    cout << "This program accepts integers until you enter a non-positive value.\nPlease enter a value: ";
    cin >> input;
    while (input >= 0) {
    	arr [count] = input;
        sum += input;
        if (input <= smallest)
        	smallest = input;
        if (input >= largest)
        	largest = input;

        cout << "Enter another integer: ";
        cin >> input;
        count++;
    }

    average = sum / (count-1);

    cout << "\nSum : " << sum << ".\n";
    cout << "Count : " << count << ".\n";
    cout << "Largest Value : " << largest << ".\n";
    cout << "Smallest Value : " << smallest << ".\n";
    cout << "Average : " << average << ".\n";
}