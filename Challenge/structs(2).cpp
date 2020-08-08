//
// structs(2).cpp
//
// Tyler Rodgers
// 7/30/2020
// Assignment 10
// Part 3
//

#include<iostream>
#include<string>
#include<iomanip>
#include <fstream>
using namespace std;

struct Menu_Item
{
    string name;
    float price;
};

void Read_Item(istream&, Menu_Item&);
void Print_Item(ostream&,Menu_Item);
int get_Order(Menu_Item[],int[]);
void print_Check(Menu_Item[],int[],int,ostream&);

int main()
{
    Menu_Item order1[10];
    ifstream in;
    ofstream out;
    int i1=0,chosenvalue,options[10];
    in.open("menu.txt");           
    if(in.fail())            
    { 
        cout<<"could not open the file\n";
    }

    cout<<"Welcome Restaurant\n My menu items\n     Item\t     price\n";

    for(i1=0;i1<10;i1++)
        Read_Item(in,order1[i1]);

    for(i1=0;i1<10;i1++)
    {
        cout<<i1+1<<". ";
        Print_Item(cout,order1[i1]);
        cout<<endl;
    }

    chosenvalue=get_Order(order1,options);
    print_Check(order1,options,chosenvalue,cout);
    in.close();
    return 0;
}

void print_Check(Menu_Item order1[],int options[],int items1,ostream& out)
{
    int i1;
    float sum=0;
    out<<"\n\nsharmi Restaurant\n";

    for(i1=0;i1<items1;i1++)
    {
        sum+=order1[options[i1]].price;
        out<<setw(16)<<left<<order1[options[i1]].name<<"$"<<
        etprecision(2)<<fixed<<order1[options[i1]].price<<endl;
    }

    out<<"\n\ntotal due \t"<<"$"<<sum<<endl;

}

int get_Order(Menu_Item menu[],int options[])
{
    int n1,m1=0;
    bool chosenvalue[10]={false},data;
    do
    {
        cout<<"please Enter order item number(-1 to exit): ";
        cin>>n1;
        if(n1==-1)
            return m1;

        while(n1<1||n1>10)
        {
            cout<<"invalid \n";
            cout<<"please Enter order item number: ";
            cin>>n1;
        }

        while(chosenvalue[n1-1])
        { 
            cout<<"you've already choosed\n";
            cout<<"please Enter order item number: ";
            cin>>n1;
     
            while(n1<1||n1>10)
            {
                cout<<"invalid\n";
                cout<<"Enter order item number: ";
                cin>>n1;
            }

        }

        chosenvalue[n1-1]=true;
        options[m1]=n1-1;
        m1++;
    }

    while(m1<10);
}

void Read_Item(istream& in, Menu_Item& order1)
{
    getline(in,order1.name );
    in>>order1.price;
    in.get();
}

void Print_Item(ostream& out,Menu_Item a1)
{
    out<<setw(16)<<left<<a1.name<<"$"<<setprecision(2)<<fixed<<a1.price;
}