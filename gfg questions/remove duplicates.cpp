// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string s) 
	{
	    string v;
	unordered_set<char> st;
    for(int i=0;i<s.length();i++)
    {
    if(st.find(s[i])==st.end())
    {
        st.insert(s[i]);
        v.push_back(s[i]);
    }
    }
    return v;
    //code here
	    // Your code goes here
	}
};

// { Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends