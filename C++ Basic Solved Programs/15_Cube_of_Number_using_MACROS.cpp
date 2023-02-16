#include<iostream>
using namespace std;

#define CUBE(x) (x*x*x)

int main()
    {
        int n,cube;  
        cout<<"Enter the number :: ";
        cin >> n;
        cube = CUBE(n);
        cout<<"The Cube of ["<<n<<"] is "<<cube<<endl;
    }