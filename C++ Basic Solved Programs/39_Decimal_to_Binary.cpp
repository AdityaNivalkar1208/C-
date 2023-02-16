#include<iostream>
using namespace std;

int main()
    {
        int n,d,i,j,a[50];
        cout<<"Enter Decimal Number :: "; 
        cin>>n;

        for(i=1;n!=1;++i)
            {
                d=n%2;
                a[i]=d;
                n=n/2;
            }
        cout<<"Decimal to Binary : 1";
        for(j=i-1;j>0;--j)
            {
                cout<<a[j];
            }
    }