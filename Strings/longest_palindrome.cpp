/***************************************************************************


Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, return the substring which occurs first ( with the least starting index ).

NOTE: Required Time Complexity O(n2).

Input:
The first line of input consists number of the testcases. The following T lines consist of a string each.

Output:
In each separate line print the longest palindrome of the string given in the respective test case.

Constraints:
1 ≤ T ≤ 100
1 ≤ Str Length ≤ 104

Example:
Input:
1
aaaabbaa

Output:
aabbaa

Explanation:
Testcase 1: The longest palindrome string present in the given string is "aabbaa"


*****************************************************************************/



#include <iostream>

using namespace std;



int is_palin(string s,int start,int size)

{

    char temp[size];

    for(int i=0;i<size;i++)

    {

        temp[i]=s[start+i];

    }

    for(int i=0;i<(size/2);i++)

    {

        if(temp[i]!=temp[size-i-1])

            return 0;

    }

    return 1;

}



int main() 
{
	int t;

	cin>>t;

	while(t--)

	{

	    string str;

	    cin>>str;

	    int size;

	    int n=str.length(),status=0,start=0;

	    for(size=n;size>0;size--)

	    {

	        for(int i=0;i<=n-size;i++)

	        {

	            if(is_palin(str,i,size))

	            {

	                status=1;

	                start=i;

	                break;

	            }

	        }

	        if(status==1)

	            break;

	    }

	    for(int i=start;i<size+start;i++)

	        cout<<str[i];

	    cout<<endl;

	}

	return 0;

}