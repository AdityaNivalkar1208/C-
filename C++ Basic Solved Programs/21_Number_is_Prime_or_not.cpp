#include<iostream>
using namespace std;

int main()
    {
        int i,n;
        cout<<"Enter the number :: ";
        cin>>n;

        if(n==1)
            {
                cout<<"The smallest prime number is "<<n<<endl;
            }
        for(i=2;i<n;i++)
            {
                if(n%i==0)
                    {
                        cout<<"Entered Number "<<n<<" is not a prime number."<<endl;
                        break;
                    }
            }
        if(n==i)
            {
                cout<<"Entered Number "<<n<<" is prime number."<<endl;
            }
    }