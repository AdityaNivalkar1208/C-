#include<iostream>
using namespace std;

int main()
    {
        int n,sum=0,x;
        float avg;

        cout<<"How many digits u wants to enter :: ";
        cin>>n;

        for(int i=1;i<=n;i++)
            {
                cout<<"Enter Number "<<i<<" : ";
                cin>>x;

                sum+=x;
            }
        
        avg = sum/n;
        cout<<"Sum is "<<sum<<endl;
        cout<<"Average is "<<avg<<endl;
    }