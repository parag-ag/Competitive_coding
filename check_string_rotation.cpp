/**********************************************************************************************

Given two strings a and b. The task is to find if a string 'a' can be obtained by rotating another string 'b' by 2 places.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. In the next two line are two string a and b.

Output:
For each test case in a new line print 1 if the string 'a' can be obtained by rotating string 'b' by two places else print 0.

Constraints:
1 <= T <= 50
1 <= length of a, b < 100

Example:
Input:
2
amazon
azonam
geeksforgeeks
geeksgeeksfor

Output:
1
0

Explanation:
Testcase 1: amazon can be rotated anti-clockwise by two places, which will make it as azonam.

Testcase 2: geeksgeeksfor can't be formed by any rotation from the given word geeksforgeeks.

***********************************************************************************************/



#include <iostream>

#include <string>

using namespace std;


int main() 
{
	

	int t;

	cin>>t;

	while(t--)

	{
	    string a,b,c,d;

	    cin>>a;

	    cin>>b;

	    for(int i=a.length()-2;i<a.length();i++)

	        c.push_back(a[i]);

	    for(int i=0;i<a.length()-2;i++)

	        c.push_back(a[i]);

	    if(!b.compare(c))

	        cout<<"1"<<endl;

	    else

	    {

	        for(int i=2;i<a.length();i++)

    	        d.push_back(a[i]);

    	    for(int i=0;i<2;i++)

    	        d.push_back(a[i]);

    	    if(!b.compare(d))

    	        cout<<"1"<<endl;

    	    else

    	        cout<<"0"<<endl;

	    }

	}

	return 0;

}
























