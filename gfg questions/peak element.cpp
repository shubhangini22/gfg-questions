// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdbool.h>


 // } Driver Code Ends
//User function Template for C

int peakElement(int a[], int n)
{ int j=0;
   int m=a[0];
   for(int i=0;i<n;i++)
   {
       if(m<a[i])
       {
           m=a[i];
           j=i;
       }
   }
   return j;
   // Your code here
}

// { Driver Code Starts.

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
			tmp[i] = a[i];
		}
		bool f=0;
		
		int A = peakElement(tmp,n);
		
		if(A<0 && A>=n)
		    printf("0\n");
		else
		{
		if(n==1 && A==0)
		f=1;
		else
		if(A==0 && a[0]>=a[1])
		f=1;
		else if(A==n-1 && a[n-1]>=a[n-2])
		f=1;
		else if(a[A]>=a[A+1] && a[A]>= a[A-1])
		f=1;
		else
		f=0;
		printf("%d\n", f);
		}
		
	}

	return 0;
}  // } Driver Code Ends