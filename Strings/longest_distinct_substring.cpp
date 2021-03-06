/**********************************************************

Given a string S, find length of the longest substring with all distinct characters.  For example, for input "abca", the output is 3 as "abc" is the longest substring with all distinct characters.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is String str.

Output:
Print length of smallest substring with maximum number of distinct characters.
Note: The output substring should have all distinct characters.

Constraints:
1 ≤ T ≤ 100
1 ≤ size of str ≤ 10000

Example:
Input:
2
abababcdefababcdab
geeksforgeeks

Output:
6
7

**************************************************************/



#include <iostream>

using namespace std;


int const MAX_CHAR=26;


int main() 
{
	

	int t;

	cin>>t;

	while(t--)

	{

	    int ch[MAX_CHAR]={0};

	    string str;

	    cin>>str;

	    cout<<str;

	    int count=0;

	    for(int i=0;i<str.length();i++)

	    {

	        ch[str[i]-'a']=1;

	    }

	    for(int i=0;i<26;i++)

	    {

	        if(ch[(char)i]==1)

	        {

	            count++;
	        }

	    }

	    cout<<count<<endl;

	}

	return 0;

}








