#include<iostream>
using namespace std;

int main()
    {
        int b,no,r,rev=0;
        cout<<"Enter the number :: ";
        cin>>no;

        b=no;

        while(no>0)
            {
                r = no%10;
                no=no/10;
                rev = rev*10+r;
            }
        if(rev==b)
            {
                cout<<b<<" is Palindrome number."<<endl;
            }
        else{
            cout<<b<<" is not Palindrome number"<<endl;
        }
    }