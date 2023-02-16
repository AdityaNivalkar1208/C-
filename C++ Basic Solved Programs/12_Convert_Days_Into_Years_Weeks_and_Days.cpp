#include<iostream>
using namespace std;

int main()
    {
        int y,w,d;
        cout<<"Enter Number of Days :: "; 
        cin>>d;

        y=d/365;
        d=d%365;
        w=d/7;
        d=d%7;

        cout<<"\nYears :: "<<y<<"\nWeeks :: "<<w<<"\nDays :: "<<d<<endl;
    }