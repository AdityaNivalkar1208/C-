// #include<bits/stdc++.h>
// using namespace std;

// int main()
//     {
//         string str;
//         cout << "Enter the String : "; 
//         cin >> str;
//         string str_rev;
//         for(int i=str.size()-1; i>=0;--i)
//             {
//                 str_rev += str[i];
//             }
//         cout << str_rev << endl;
//         if(str==str_rev)
//             {
//                 cout<<str<<" is palindrome"<<endl;
//             }
//         else{
//             cout<<str<<" is not palindrome"<<endl;
//         }
//     }

#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main()
    {
        reverse("binod");
    }