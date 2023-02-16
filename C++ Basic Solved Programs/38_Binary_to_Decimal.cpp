#include<iostream>
#include<math.h>
using namespace std;

int main()
    {
        int n,d,num=0,i;
        cout<<"Enter the Binary Number : "; 
        cin>>n;
        for(i=0;n!=0;++i)
            {
                d=n%10;
                num = (d)*(pow(2,i)) + num;
                n = n/10;
            }
        cout<<"Binary To Decimal :: "<<num<<endl;
    }