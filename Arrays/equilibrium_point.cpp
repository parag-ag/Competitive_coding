/***************************************************************

Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array A.

Output:
For each test case in a new  line print the position at which the elements are at equilibrium if no equilibrium point exists print -1.

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= Ai <= 108

Example:
Input:
2
1
1
5
1 3 5 2 2

Output:
1
3

Explanation:
Testcase 1: Since its the only element hence its the only equilibrium point.
Testcase 2: For second test case equilibrium point is at position 3 as elements below it (1+3) = elements after it (2+2).


****************************************************************/



#include <iostream>

using namespace std;


int find_equilibrium(int a[],int n)

{

    int sum_p=0,sum_a=0;

    int eq=(n/2);

    for(int i=0;i<n;i++)

    {

        if(i<eq)

        {

            sum_p=sum_p+a[i];

        }

        else if(i>eq)

        {

            sum_a=sum_a+a[i];

        }

    }

    int flag=-1;

    while(eq>-1&&eq<n)

    {

        if(sum_p==sum_a)

            return (eq+1);

        else if(sum_p>sum_a)

        {

            if (flag==1)

                return -1;

            sum_a=sum_a+a[eq];

            eq--;

            sum_p=sum_p-a[eq];

            flag=0;

        }

        else if(sum_a>sum_p)

        {

            if (flag==0)

                return -1;

            sum_p=sum_p+a[eq];

            eq++;

            sum_a=sum_a-a[eq];

            flag=1;

        }

    }

    return -1;

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

	    cout<<find_equilibrium(a,n)<<endl;

	}

	return 0;

}