#include<iostream>
using namespace std;

int main()
    {
        int i,n,table;
        cout<<"Enter the number :: ";
        cin >> n;
        for(i=1;i<=10;i++)
            {
                table = n * i;
                cout<<n<<" X "<<i<<" = "<<table<<endl;
            }
    }