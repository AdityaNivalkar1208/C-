#include<iostream>
using namespace std;

int main()
    {
        char c;
        cout<<"Enter the character :: ";
        cin>>c;
        int isLowercase, isUppercase;

        isLowercase = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
        isUppercase = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

        if(isLowercase || isUppercase)
            {
                cout<<"Entered character "<<c<<" is vowel."<<endl;
            }
        else{
            cout<<"Entered character "<<c<<" is consonant."<<endl;
        }
    }