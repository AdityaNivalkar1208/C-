#include<iostream>
using namespace std;

int main()
    {
        int dividend,divisor,quotient,remainder;
        cout<<"Enter the dividend : ";
        cin >> dividend;
        cout<<"Enter the divisor : ";
        cin >>divisor;

        quotient = dividend / divisor;
        remainder = dividend % divisor;

        cout<<"quotient is "<<quotient<<endl;
        cout<<"remainder is "<<remainder<<endl;
    }