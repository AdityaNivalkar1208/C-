#include<iostream>
#include<math.h>
using namespace std;

int main()
    {
        int num;
        double ans;

        cout<<"Enter the Number :: "; 
        cin>>num;

        ans=(double)pow((double)num,(double)1/(double)3);

        cout<<"Square Root of "<<num<<" is "<<ans<<endl;
    }