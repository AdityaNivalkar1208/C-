#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string str = "afghHJKFGHjk";
        sort(str.begin(), str.end());
        transform(str.begin(), str.end(),str.begin(), :: toupper);
        cout << str << endl;
        transform(str.begin(), str.end(),str.begin(), :: tolower);
        cout << str << endl;
    }