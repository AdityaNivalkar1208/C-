#include<iostream>
using namespace std;

void lcm(int a,int b) {
    int m,n;
    m=a;
    n=b;
    while(m!=n) {
        if(m<n)
            {
                m=m+a;
            }
        else{
            n=n+b;
        }
    }
    cout<<"LCM of "<<a<<" & "<<b<<" is "<<m<<endl;
}

int main()
    {
        int a,b;
        cout<<"Enter first Number :: ";
        cin>>a;
        cout<<"Enter Second Number :: ";
        cin>>b;
        lcm(a,b);
    }