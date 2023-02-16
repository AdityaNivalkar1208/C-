// The formula for annual compound interest, including principal sum, is:
// A = P (1 + r/n) ^ (nt)
// A = the future value of the investment/loan, including interest
// P = the principal investment amount (the initial deposit or loan amount)
// r = the annual interest rate (decimal)
// n = the number of times that interest is compounded per year
// t = the number of years the money is invested or borrowed for
// Total compounded interest = P (1 + r/n)^(nt) – P

#include<iostream>
#include<math.h>
using namespace std;

int main()
    {
        float p,r,t,ci;
        cout<<"Principal Amount : ";
        cin>>p;    
        cout<<"Interest Rate : ";
        cin>>r;
        cout<<"Rate of Time : ";
        cin>>t;

        ci=p*pow((1+r/100),t);

        cout<<"The compound interest is "<<ci<<endl;
    }