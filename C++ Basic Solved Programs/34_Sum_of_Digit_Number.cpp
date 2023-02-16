#include<iostream>
using namespace std;

int main()
    {
        int no,r,rev=0;
        cout<<"Enter the number :: ";
        cin>>no;

        while(no>0)
            {
                r = no%10;
                no = no/10;
                rev = rev + r;
            }
        cout<<"Sum of the numbers "<<rev<<endl;
    }