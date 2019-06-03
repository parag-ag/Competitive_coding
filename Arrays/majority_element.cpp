/*********************************************************************

Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Input:  
The first line of the input contains T denoting the number of testcases. The first line of the test case will be the size of array and second line will be the elements of the array.

Output: 
For each test case the output will be the majority element of the array. Output "-1" if no majority element is there in the array.

Constraints:
1 <= T<= 100
1 <= N <= 107
0 <= Ai <= 106

Example:
Input:
2
5
3 1 3 3 2
3
1 2 3

Output:
3
-1

Explanation:
Testcase 1: Since, 3 is present more than N/2 times, so it is the majority element.


**********************************************************************/


#include <iostream>

using namespace std;


int find_majority(int a[],int n)

{

    int major=-1;

    
int count[1000000]={0};

    for(int i=0;i<n;i++)

    {

        count[a[i]]++;

    }

    for(int i=0;i<n;i++)

    {

        if(count[a[i]]>(n/2))

            major=a[i];

    }

    return major;

}



int main()
{

	int t;

	cin>>t;

	while(t--)

	{
	    int n;

	    cin>>n;

	    int a[n];

	    for(int i=0;i<n;i++)

	    {

	        cin>>a[i];

	    }

	    cout<<find_majority(a,n)<<endl;

	}

	return 0;

}