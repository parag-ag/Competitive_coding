/********************************************************

Given a string, the task is to remove duplicates from it. Expected time complexity O(n) where n is length of input string and extra space O(1) under the assumption that there are total 256 possible characters in a string.

Note: that original order of characters must be kept same. 

Input: 
First line of the input is the number of test cases T. And first line of test case contains a string.

Output:  
Modified string without duplicates and same order of characters.

Constraints: 
1 <= T <= 15
1 <= |string|<= 1000

Example:
Input:
2
geeksforgeeks
geeks for geeks

Output:
geksfor
geks for



*********************************************************/

#include <iostream>
#include <string>
using namespace std;

int const MAXCHAR=256;

int main() {
	//code
	int ch[MAXCHAR] = {0};
	int t,temp=1;
	cin>>t;
	t++;
	while(t--)
	{
	    
	    string str;
	    getline(cin,str);
	    //cout<<"####"<<str<<"###"<<endl;
	    if(temp==1)
	    {
	        temp=0;
	        continue;
	    }
	    for(int i=0;i<str.length();i++)
	    {
	        ch[str[i]]=1;
	    }
	    for(int i=0;i<str.length();i++)
	    {
	        if(ch[str[i]]==1)
	        {
	            cout<<str[i];
	            ch[str[i]]=0;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
