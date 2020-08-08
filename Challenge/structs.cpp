//
// structs.cpp
//
// Tyler Rodgers
// 7/30/2020
// Assignment 10
// Part 1
//

#include <bits/stdc++.h>
using namespace std;

struct MenuItem
{
    string name;
    float price;
};

void ReadItem(istream& in,MenuItem &m)
{
    cout<<"Enter Name: ";
    getline(in,m.name);
    cout<<"Enter Price: ";
    in>>m.price;
    in.ignore();
}

void PrintItem(ostream& out,MenuItem m)
{
    out<<"Name: "<<m.name<<"   Price: "<<m.price<<"\n";
}

int main()
{
    MenuItem m,m1,m2;
    ReadItem(cin,m);
    PrintItem(cout,m);
    ReadItem(cin,m1);
    PrintItem(cout,m1);
    ReadItem(cin,m2);
    PrintItem(cout,m2);
    
    return 0;
}