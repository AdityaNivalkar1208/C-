#include<bits/stdc++.h>
using namespace std;

string subsuq(string s,string ans){
    if(s.length() == 0)
        {
            cout<<ans<<endl;
            return "";
        }
    char ch = s[0];
    string ros = s.substr(1); 
    subsuq(ros,ans);
    subsuq(ros,ans+ch);
}

int main()
    {
        subsuq("ABC","");
        cout <<endl;
    }