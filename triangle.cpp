//
// triangle.cpp
//
// Tyler Rodgers
// 6/30/2020
// Assignment 3
// Tests if triangle is a right triangle or not.
//

#include<bits/stdc++.h> 
using namespace std; 
  
bool checkValidity(int a, int b, int c) 
{ 
    if (a + b <= c || a + c <= b || b + c <= a) 
        return false; 
    else
        return true; 
} 

int main() 
{ 
	int a;
	int b;
	int c;

    cout << "Enter side a : ";
    cin >> a;
    cout << a;

    cout << "\nEnter side b : ";
    cin >> b;
    cout << b;

    cout << "\nEnter side c : ";
    cin >> c;
    cout << c;

      
    if (checkValidity(a, b, c)) 
        cout << "\nThe sides form a right triangle."; 
    else
        cout << "The sides do not form a right triangle.";     
} 