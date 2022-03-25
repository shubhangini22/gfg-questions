// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector<string> dict,string p)
{
    vector<string> res;
    bool b=false;
    map<char,int> pt;
    for(int i=0;i<p.length();i++)
    {
        pt[p[i]]++;
    }
    for(string st:dict)
    {
        map<char,int> mp;
        for(char ch:st)
        {
            mp[ch]++;
        }
         if(mp.size()==pt.size())
        {
            for(int i=0;i<st.length();i++)
            {
                if(mp[st[i]]==pt[p[i]])
                {
                    //this represents that the frequency of the element 
                    //at that particular index is same
                    b=true;
                }
                else
                {
                    b=false;
                    break;
                    
                }
            }
             if(b==true)
        {
            res.push_back(st);
        }
        
            
        }
        
       
      
    }
    return res;
    
       //Your code here
}