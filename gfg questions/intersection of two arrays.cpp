// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        if(n>m)
   {
       int sum=0;
    unordered_set<int> s;
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i])!=s.end())
        {
            sum++;
            s.erase(a[i]);
        }
        
    }
    return sum;
   }
   else if(m>=n)
   {
      int sum1=0;
    unordered_set<int> s1;
    for(int i=0;i<n;i++)
    {
        s1.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(s1.find(b[i])!=s1.end())
        {
            sum1++;
            s1.erase(b[i]);
        }
        
    }
    return sum1; 
   }
        // Your code goes here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}  // } Driver Code Ends