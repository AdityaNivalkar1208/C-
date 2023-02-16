#include<iostream>
using namespace std;

int main()
    {
        int year; 
        cout<<"Enter the Year :: ";
        cin>>year;

        if(year%400==0 && year%100==0 && year%4==0)
            {
                cout<<"Entered Year "<<year<<" is Leap Year."<<endl;
            }
        else{
            cout<<"Entered Year "<<year<<" is not Leap Year."<<endl;
        }
    }

// another method

// int main()
//     {
//         if(year%100==0){
//             if(year%400==0){
//                 cout<<"Entered year "<<year<<" is Leap Year."<<endl;
//             }
//         }

//         else{
//             if(year%4==0){
//                 cout<<"Entered year "<<year<<" is Leap Year."<<endl;
//             }
//             else{
//                 cout<<"Entered year "<<year<<" is not a Leap Year."<<endl;
//             }
//         }
//     }