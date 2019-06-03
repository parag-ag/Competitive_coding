/*****************************************************************************************


Given a string s, recursively remove adjacent duplicate characters from the string s. The output string should not have any adjacent duplicates.
 

Input:
The first line of input contains an integer T, denoting the no of test cases. Then T test cases follow. Each test case contains a string str.

Output:
For each test case, print a new line containing the resulting string.

Constraints:
1<=T<=100
1<=Length of string<=50

Example:
Input:
2
geeksforgeek
acaaabbbacdddd

Output:
gksforgk
acac

*******************************************************************************************/

#include <iostream>

using namespace std;



int main() 
{

	int t;

	cin>>t;

	while(t--)

	{

	    string str;

	    cin>>str;

	    int n=str.length();

	    int a[n],count=0;

	    while(1)

	    {

	        count=0;

	        int flag=0;

    	    	for(int i=0;i<n;i++)

    	    {

    	        if((i>0&&str[i]==str[i-1])||(i<n-1&&str[i]==str[i+1]))

    	        {

    	            flag=1;

    	            continue;

    	        }

    	        a[count]=i;

    	        count++;

    	    }

    	    n=count;

    	    for(int i=0;i<count;i++)

    	        str[i]=str[a[i]];

    	    
    	    if(flag==0)

    	        break;

	    }

	    for(int i=0;i<n;i++)

	        cout<<str[i];

	    cout<<endl;

	}

	return 0;

}