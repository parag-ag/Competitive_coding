/******************************************************************************

Given an string in roman no format (s)  your task is to convert it to integer .

Input:
The first line of each test case contains the no of test cases T. Then T test cases follow. Each test case contains a string s denoting the roman no.

Output:
For each test case in a new line print the integer representation of roman number s. 

Constraints:
1<=T<=100
1<=roman no range<4000

Example:
Input
2
V
III 
Output
5
3


*******************************************************************************/



#include <iostream>

using namespace std;



int main() 
{
	
	
	int t;

	cin>>t;

	while(t--)

	{

	    string s;

	    cin>>s;

	    int n=s.length();

	    int a[n];

	    for(int i=0;i<n;i++)

	    {

	        if(s[i]=='I')

	            a[i]=1;

	        else if(s[i]=='V')

	            a[i]=5;

	        else if(s[i]=='X')

	            a[i]=10;

	        else if(s[i]=='L')

	            a[i]=50;

	        else if(s[i]=='C')

	            a[i]=100;

	        else if(s[i]=='D')

	            a[i]=500;

	        else if(s[i]=='M')

	            a[i]=1000;

	        else

	        {

	            cout<<"-1";

	            return 0;

	        }

	    }

	    int num=0;

	    for(int i=0;i<n-1;i++)

	    {

	        if(a[i]>=a[i+1])

	            num=num+a[i];

	        else

	            num=num-a[i];

	    }

	    num = num + a[n-1];

	    cout<<num<<endl;

	}

	
return 0;

}