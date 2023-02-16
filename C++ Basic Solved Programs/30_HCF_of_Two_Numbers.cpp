#include<iostream>
using namespace std;

void gcd(int a,int b) {
    int m,n;
    m=a;
    n=b;
    while(m!=n) 
        {
            if(m>n)
                {
                    m=m-n;
                }
            else{
                    n=n-m;
                }
        }
    cout<<"HCF of "<<a<<" & "<<b<<" is "<<m<<endl;
}

int main()
    {
        int a,b;
        cout<<"Enter first Number :: ";
        cin>>a;
        cout<<"Enter Second Number :: ";
        cin>>b;
        gcd(a,b);
    }