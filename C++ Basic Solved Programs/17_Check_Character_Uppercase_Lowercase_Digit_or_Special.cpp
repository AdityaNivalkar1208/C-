// 65-90 uppercase
// 48-57 digits
// 97-122 lowercase
// else special character
#include<iostream>
using namespace std;

int main()
    {
        char ch;
        cout<<"Enter the character :: ";
        cin>>ch;

        if(ch>=65&&ch<=90)
            {
                cout<<"\n The Entered Character [ "<<ch<<" ] is an UPPERCASE character.\n"<<endl;
            }
        else if(ch>=48&&ch<=57)
            {
                cout<<"\n The Entered Character [ "<<ch<<" ] is a DIGIT.\n"<<endl;
            }
        else if(ch>=97&&ch<=122)
            {
                cout<<"\n The Entered Character [ "<<ch<<" ] is a LOWERCASE character.\n"<<endl;
            }
        else
            {
                cout<<"\n The Entered Character [ "<<ch<<" ] is an SPECIAL character.\n"<<endl;
            }
    }