#include<iostream>
using namespace std;

int main()
    {
        float a,b;
        char op;
        cout<<"Enter the Numbers :: ";
        cin>>a>>b;  
        cout<<"Enter the Operand :: ";
        cin>>op;
        switch(op)
            {
                case '+':cout<<"Sum of "<<a<<" + "<<b<<" = "<<a+b<<endl;
                         break;
                case '-':cout<<"Sum of "<<a<<" - "<<b<<" = "<<a-b<<endl;
                         break;
                case '*':cout<<"Sum of "<<a<<" * "<<b<<" = "<<a*b<<endl;
                         break;
                case '/':cout<<"Sum of "<<a<<" / "<<b<<" = "<<a/b<<endl;
                         break;
                default:cout<<"Error"<<endl;
                         break;
            }
    }