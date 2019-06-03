/*********************************************************

Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.

Input:
The first line contains T denoting the number of testcases. T testcases follow. Each case contains a string S containing characters.

Output:
For each test case, in a new line, output a single line containing the reversed String.

Constraints:
1 <= T <= 100
1 <= |S| <= 2000

Example:
Input:
2
i.like.this.program.very.much
pqr.mno

Output:
much.very.program.this.like.i
mno.pqr




**********************************************************/

#include <iostream>

#include <string>

using namespace std;


int main() 
{
	
	int t;

	cin>>t;

	while(t--)

	{

	    string str,s,temp;

	    cin>>str;
	    int count=0;

	    for (int i=0;i<=str.length();i++)

	    {

	        if(str[i]!='.'&&i!=str.length())

	        {
	            
			temp.push_back(str[i]);
	        
		}

	        else if(str[i]=='.'||i==str.length())

	        {

	            if(!s.length())

	                s=temp;

	            else

	                s=temp+'.'+s;

	            temp.resize(0);

	        }

	    }

	    cout<<s<<endl;

	}

	return 0;

}