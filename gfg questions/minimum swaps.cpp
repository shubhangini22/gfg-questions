// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{ 
	  vector<pair<int,int>> mp;
	  for(int i=0;i<nums.size();i++)
	  {
	      
	      mp.push_back({nums[i],i});
	     
	  }
	  int res=0;
	  sort(mp.begin(),mp.end());
	  for(int i=0;i<mp.size();i++)
	  {
	        int num = mp[i].first;
	        int idx = mp[i].second;
	        if(i!=idx){
	            //not in position
	         res++;
	            
	            swap(mp[i],mp[idx]);
	            i -= 1;
	        }
	  }
	 
	  return res;
	  
	    // Code here
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends