// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    //using dynamic programming 
	    if(n==0)
	    {
	        return 0;
	        //base cases
	    }
	    if(n==1)
	    {
	        return arr[0];
	    }
	    vector<int> dp(n);
	    dp[0]=arr[0];
	    dp[1]=max(arr[0],arr[1]);
	    //for dynamic proggraming we require a dp array
	    for(int i=2;i<n;i++)
	    {
	        dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
	    }
	    return dp[n-1];
	    //dp[n-1] here will store the maximum sum ;
	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends