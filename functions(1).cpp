//
// looping.cpp
//
// Tyler Rodgers
// 7/14/2020
// Assignment 7 Part 2
// First functions assignment.
//

#include <iostream>
#include<iomanip>
using namespace std;

int GetNRows(void)
{
    int rows;
    while(true)         
    {
        cout<<"Number of rows : ";
        cin>>rows;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(256,'\n');
            cout<<"Invalid number";
        }
        else if(rows%2==1 && 3<=rows && rows<=23)
        {
            return rows;
        }
        else 
        {
            cout<<"Invalid number of rows entered"<<endl;
            cout<<"Number of rows should be odd and between 3 and 23 inclusive"<<endl;
            cout<<"Please try again.\n";
        }
    }
}

int nSpaces(int nRows, int row)
{
    if(row<=(nRows-1)/2)
    {
        return (nRows-2*(row-1)+1)/2;
    }
    else if(row==1+(nRows-1)/2)
    {
        return 1;
    }
    else
    {
        return 2+((nRows-2*(nRows-row+1))-1)/2;
    }
}

int nStars(int nRows, int row) 
{
    if(row<=1+(nRows-1)/2)
    {
        return 2*(row-1)+1;
    }
    else
    {
        return 2*(nRows-row)+1;
    }
}

void PrintChars(int n, char c)
{
    for(int i=1; i<=n; i++)cout<<c;
}

void DrawShape (int nRows)
{
    int spaces=0, stars=0;

    for(int row=1; row<=nRows; row++)
    {
        spaces = nSpaces(nRows,row);
        stars = nStars(nRows, row);
        PrintChars(spaces,' ');
        PrintChars(stars,'*');
        cout<<endl;
    }       
}

int main()
{
    int rows = GetNRows();
    DrawShape(rows);
}