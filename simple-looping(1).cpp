//
// simple-looping(1).cpp
//
// Tyler Rodgers
// 7/06/2020
// Assignment 5 Part 2
// Calculates how much a person would earn over a period of days.
//

#include<iostream>
using namespace std;

int main()
{
  int numOfDays;

  do
  {
    cout<<"How many days? ";
    cin>>numOfDays;
    
    if(numOfDays<1)
      cout<<"\nInvalid input!\n";
  }

  while(numOfDays<1);
    int pay=1;
    
  double total =0.01;
  
  for(int i=1;i<=numOfDays;i++)
  {
    cout<<"Pay for day "<<i<<" = "<<pay<<endl; //display pay
    total+=pay; //compute total
    pay+=pay; //compute next day's pay
  }
  cout<<"---------------------\n";
  printf("Total pay is $%.2f", total/100);  
}