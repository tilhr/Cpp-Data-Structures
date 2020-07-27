//
// eratosthenes.cpp
//
// Tyler Rodgers
// 7/22/2020
// Assignment 9
// The Sieve of Eratosthenes program.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m=10000;
    int a[m+1];

    for(int i=0;i<=m;i++)
    {
        a[i]=1;
    }

    a[0]=0;
    a[1]=0;

    for(int i=2;i<=m/2;i++)
    {
        int j=2;
        while(i*j<=m)
        {
            a[i*j]=0;
            j++;
        }
    }

    int count=0;
    for(int i=2;i<=m;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
    }

    ofstream ouf;
    ouf.open("output.txt");
    int i=0;
    int count1=0;
    int j=2;

    while(i<count-1 && j<=m)
    {
        if(a[j]==1)
        {
            if(count1!=7)
            {
                ouf<<j<<'\t';
                count1++;
            }
            else
            {
                ouf<<j<<endl;
                count1=0;
            }
            i++;
        }
        j++;
    }
        
    while(j<=m)
    {
        if(a[j]==1)
        {
            ouf<<j;
            break;
        }
        j++;
    }
    return 0;
}