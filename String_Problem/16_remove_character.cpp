#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string my_str = "Happy Ending";
        char ch;
        cin>>ch;

        cout << "Initial string: " << my_str << endl;

        my_str.erase(remove(my_str.begin(), my_str.end(), ch), my_str.end()); //remove A from string
        cout << "Final string: " << my_str;

    }