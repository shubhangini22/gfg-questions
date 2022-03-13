// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int i=l,mid=(l+r)/2,j=mid+1;
        vector<int> t;
        //l and r are the positions for the given array.
        while(i<=mid && j<=r)
        {
            if(arr[i]<arr[j])
            //now we do have to compare the two values of the elements 
            {
                t.push_back(arr[i]);
                i++;
            }
            else
            {
                t.push_back(arr[j]);
                j++;
            }
        }
        //this loops we are writing to insert the remaining elements of the two 
        // parts of the array respectivly
        while(i<=mid)
        {
            t.push_back(arr[i++]);
            //we need to increment the positions
            //otherwis you willl get runtime error;
        }
        while(j<=r)
        {
            t.push_back(arr[j]);
            j++;
        }
        //we can't return here a new vector or an array 
        //since it is a void function so we need to modify the same array
        //this can be done by modifying each element of the current array with 
        //the value we got
        int k=0;
        for(int idx=l;idx<=r;idx++)
        {
            //int the vector indexing will start from 0 only
            //but in the array given the indexing will be from start to end
            //so we have to give the index accordingly
            arr[idx]=t[k++];
            //think how recursion works
        }
            //important step for modifying the same array for void function;
        return;
         // Your code here
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)
        //this if statement confirms about the base case at which recursive calls
        //are not required
        {
            return; 
        }
        
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        return merge(arr,l,r-l+1,r);
        
        //code here
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends