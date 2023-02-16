// #include<iostream>
#include<bits/stdc++.h>
// #include<math.h>
using namespace std;

int main()
    {
        int x,n,result;
        cout<<"Enter the number X :: "; 
        cin>>x;
        cout<<"\nEnter the number N :: "; 
        cin>>n;
        result = pow(x,n);
        
        cout<<"\nThe Power of Number [ "<<x<<" ^ "<<n<<" ] = "<<result<<"\n";
    }