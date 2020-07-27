//
// coffee.cpp
//
// Tyler Rodgers
// 7/20/2020
// Assignment 8
// The coffee shop program.
//

#include <iostream>
using namespace std;

const double coffee = 1.25;
const double bagels = 1.50;
const double danishPastry = 2.25;

void prompt(int &numOfCoffee, int &numOfBagels, int &numOfPastries) 
{
    cout << "Please enter the number of Coffees: ";
    cin >> numOfCoffee;
    while (numOfCoffee < 0) {
        cout << "Please enter a value greater than equal to zero: ";
        cin >> numOfCoffee;
    }
    cout << "Please enter the number of Bagels: ";
    cin >> numOfBagels;
    while (numOfCoffee < 0) {
        cout << "Please enter a value greater than equal to zero: ";
        cin >> numOfBagels;
    }
    cout << "Please enter the number of Danish Pastries: ";
    cin >> numOfPastries;
    while (numOfCoffee < 0) {
        cout << "Please enter a value greater than equal to zero: ";
        cin >> numOfPastries;
    }
}

void calculateBill(int &numOfCoffee, int &numOfBagels, int &numOfDanish, double &coffeeCost, double &bagelsCost,
                   double &danishCost, double &subTotal, double &tax, double &total) 
{
    coffeeCost = numOfCoffee * coffee;
    bagelsCost = numOfBagels * bagels;
    danishCost = numOfDanish * danishPastry;
    subTotal = coffeeCost + bagelsCost + danishCost;
    tax = (subTotal * 9) / 100;
    total = subTotal + tax;
}

void printBill(int &numOfCoffee, int &numOfBagels, int &numOfDanish, double &coffeeCost, double &bagelsCost,
               double &danishCost, double &subTotal, double &tax, double &total) 
{
    printf("\n%22s\n", "My Coffee Shop");
    printf("%s %15s %10s\n", "Item", "Quantity", "Price");
    cout << endl;
    printf("%s %10d %9s%.2f\n", "Coffee", numOfCoffee, "$ ", coffeeCost);
    printf("%s %10d %9s%.2f\n", "Bagels", numOfBagels, "$ ", bagelsCost);
    printf("%s %10d %9s%.2f\n", "Danish", numOfDanish, "$ ", danishCost);
    cout << endl;
    printf("%s %17s%.2f\n", "Sub Total", "$ ", subTotal);
    cout << endl;
    printf("%s %23s%.2f\n", "Tax", "$ ", tax);
    cout << endl;
    printf("%s %21s%.2f\n", "Total", "$ ", total);
}

int main() 
{
    int numOfCoffee, numOfBagels, numOfDanish;
    double coffeeCost = 0, bagelsCost = 0, danishCost = 0, subTotal = 0, tax = 0, total = 0;
    prompt(numOfCoffee, numOfBagels, numOfDanish);
    calculateBill(numOfCoffee, numOfBagels, numOfDanish, coffeeCost, bagelsCost,
                  danishCost, subTotal, tax, total);
    printBill(numOfCoffee, numOfBagels, numOfDanish, coffeeCost, bagelsCost,
              danishCost, subTotal, tax, total);
}