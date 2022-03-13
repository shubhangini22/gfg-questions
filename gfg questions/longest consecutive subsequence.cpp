// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int a[], int n)
    {
        sort(a,a+n);
        vector<int> v;
        int s=1,max=1;
        for(int i=0;i<n;i++)
        {
        if(a[i+1]==a[i]+1)
        {
            
            s++;
            v.push_back(s);
            
        }
        else if(a[i]==a[i+1])
        {
            v.push_back(s);
        }
        else
        {
            s=1;
        }
        
        }
       for(int i=0;i<v.size();i++)
       {
         
       if(v[i]>max)
       {
           max=v[i];
       }
       }
       return max;
      //Your code here
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends