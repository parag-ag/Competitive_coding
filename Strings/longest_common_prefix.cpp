/*********************************************************************************


Given a array of N strings, find the longest common prefix among all strings present in the array.

Input:
The first line of the input contains an integer T which denotes the number of test cases to follow. Each test case contains an integer N. Next line has space separated N strings.

Output:
Print the longest common prefix as a string in the given array. If no such prefix exists print "-1"(without quotes).

Constraints:
1 <= T <= 103
1 <= N <= 103
1 <= |S| <= 103

Example:
Input:
2
4
geeksforgeeks geeks geek geezer
3
apple ape april

Output:
gee
ap

Explanation:
Testcase 1: Longest common prefix in all the given string is gee.

************************************************************************************/



#include <iostream>

using namespace std;


int main() 
{
		
	int t;

	cin>>t;

	while(t--)

	{

	    int n;

	    cin>>n;

	    int min_len=0,min_i=0,status=1;

	    string str[n];

	    cin>>str[0];

	    if(n==1)

	    {

	        cout<<str[0]<<endl;

	        continue;

	    }

	    min_len=str[0].length();

	    for(int i=1;i<n;i++)

	    {

	        cin>>str[i];

	        if(str[i].length()<min_len)

	        {

	            min_len=str[i].length();

	            min_i=i;

	        }

	    }

	    int max=min_len,flag=0;

	    for(int i=0;i<min_len;i++)

	    {

	        for(int j=0;j<n;j++)

	        {

	            if(str[j][i]!=str[min_i][i])

	            {

	                max=i-1;

	                int flag=1;

	                if(i==0)

	                    status=0;

	                break;

	            }

	        }

	        if(flag==1)

	            break;

	    }

	    if (status==1)

	    {

	    for(int i=0;i<=max;i++)

	        cout<<str[min_i][i];

	    cout<<endl;

	    }

	    else

	    cout<<"-1"<<endl;

	}

	return 0;

}