/**************************************************


Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.

Constraints:
1 = T = 200
1 = N = 107
1 = C[i] = 107

Example:
Input:
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output:
4
9

Explanation:
Testcase 1: Given array : 1 2 3 5. Missing element is 4.
***************************************************/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,status=0,sum=0;
	    cin>>n;
	    int a[n-1];
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    int sum_r=n*(n+1)/2;
	    cout<<(sum_r-sum)<<endl;
	}
	return 0;
}