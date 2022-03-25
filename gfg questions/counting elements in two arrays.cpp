// { Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


 // } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
         sort(arr2, arr2+n);
   vector<int>ans;
   
   int mx = INT_MIN;
   for(int i = 0; i < n; i++){
       mx = max(mx, arr2[i]);
   }
   
   for(int i = 0; i < m; i++){
        int start = 0;
        int end = n-1;
   while(start < end){
       int mid = start + (end - start)/2;
       if(arr2[mid] <= arr1[i]){
           start = mid+1;
       }
       else
           end = mid;
       
   }
       if(arr1[i] >= mx){
           ans.push_back(n);
       }
       else
           ans.push_back(end);
   }
   return ans;
    //Your code goes here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends