#include<iostream>
using namespace std;

int main()
    {
        int n,i,first=0,second=1,next; 
        cout<<"Enter the Fibonacci Number :: ";
        cin >> n;
        cout<<"Fibonacci Series\n"<<endl;
        for(int i=0;i<n;i++){
            cout<<" "<<first<<" "<<endl;
            next = first + second;
            first = second;
            second = next;
        }

    }