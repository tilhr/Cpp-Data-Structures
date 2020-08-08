//
// structs(1).cpp
//
// Tyler Rodgers
// 7/30/2020
// Assignment 10
// Part 2
//

#include <bits/stdc++.h>
using namespace std;

struct MenuItem
{
    string name;
    float price;
};

void ReadItem(ifstream& in,MenuItem &m)
{
    float price=0;
    string line;
    getline(in,m.name);
    getline(in,line);
    
    //convert to float
    stringstream check(line);
    check>>price;
    m.price=price;
}

void PrintItem(ofstream& out,MenuItem m)
{
    out<<"Name:"<<left<<setw(20)<<m.name<<"Price:"<<left<<setw(10)<<m.price<<"\n";
}

int main()
{
    MenuItem m[10];

    int j=0;
    ifstream myfile ("example.txt");
    ofstream myfile2 ("output.txt");

    if (myfile.is_open())
    {
        for(int i=0;i<10;i++)
        {
            ReadItem(myfile,m[j++]);
        }
        myfile.close();

        for(int i=0;i<10;i++)
        {
            PrintItem(myfile2,m[i]);
        }
        myfile2.close();
    }
    else 
    cout << "Unable to open file"; 

    return 0;
}