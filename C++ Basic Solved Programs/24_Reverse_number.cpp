#include<iostream>
using namespace std;

int main()
    {
        int no,rev=0,n,r;
        cout<<"Enter the number :: ";
        cin>>n;  

        no = n;

        while(no>0)
            {
                r = no%10;
                rev = rev*10 + r;
                no = no/10;
            }
        cout<<"\nReverse of a Number [ "<<n<<" ] is :: [ "<<rev<<" ] \n";
    }