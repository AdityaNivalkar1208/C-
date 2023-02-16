#include<iostream>
using namespace std;

int main()
    {
        int b,p,i,pow=1;
        cout<<"Enter the base : "; 
        cin >> b;
        cout<<"Enter the power : "; 
        cin >> p;

        for(i=p;i>0;i--)
            {
                pow = pow * b;
            }
        cout<<"Power Of Number :: "<<pow<<endl;
    }