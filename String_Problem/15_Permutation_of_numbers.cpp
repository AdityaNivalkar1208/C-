// #include<bits/stdc++.h>
// using namespace std;

// void permutation(string s,string ans)
//     {
//         if(s.length() == 0)
//             {
//                 cout << ans << endl;
//                 return;
//             }
//         for(int i = 0; i < s.length(); i++)
//             {
//                 char ch = s[0];
//                 string ros = s.substr(0,i)+s.substr(i+1);
//                 permutation(ros,ans+ch);
//             }
//     }

// int main()
//     {
//         permutation("ABC","");
//     }

// 2nd code 
// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
using namespace std;


// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
void permute(string a, int l, int r)
{
	// Base case
	if (l == r)
		cout<<a<<endl;
	else
	{
		// Permutations made
		for (int i = l; i <= r; i++)
		{

			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permute(a, l+1, r);

			//backtrack
			swap(a[l], a[i]);
		}
	}
}

// Driver Code
int main()
{
	string str = "ABC";
	int n = str.size();
	permute(str, 0, n-1);
	return 0;
}

// This is code is contributed by rathbhupendra
