#include<iostream>
using namespace std;

int main()
    {
        int n,no,count=0;
        cout<<"Enter the number :: ";
        cin>>n;  

        no=n;
        while(no>0)
            {
                no=no/10;
                count++;
            }
        
        cout<<"Digit count :: "<<count<<endl;
    }