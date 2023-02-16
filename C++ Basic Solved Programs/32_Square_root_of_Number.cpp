#include<iostream>
#include<math.h>
using namespace std;

int main()
    {
        int num;
        double ans;

        cout<<"Enter the Number :: "; 
        cin>>num;

        ans = pow((double)num,(double)0.5);
    
        cout<<"Square Root of "<<num<<" is "<<ans<<endl;
    }