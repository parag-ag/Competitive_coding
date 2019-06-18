/******************************************

Given an array A and an integer K. Find the maximum for each and every contiguous subarray of size K.

Example:
Input:
2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13

Output:
3 3 4 5 5 5 6
10 10 10 15 15 90 90

Explanation:
Testcase 1: Starting from first subarray of size k = 3, we have 3 as maximum. Moving the window forward, maximum element are as 3, 4, 5, 5, 5 and 6.

***************************************************/


#include <iostream>
#include <queue>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    cin>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int max=0;
	    for(int j=0;j<=n-k;j++)
	    {
	        if(j==0||(max==a[j-1]))
    	    {
    	        max=0;
        	    for(int i=0;i<k;i++)
        	    {
        	        if(a[i+j]>max)
        	            max=a[i+j];
        	    }
    	    }
    	    else
    	    {
    	        if(max<a[j+k-1])
    	            max=a[k+j-1];
    	    }
    	    cout<<max<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}