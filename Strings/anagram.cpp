/**************************************************

Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are anagram of each other or not. An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other.

Input: 
The first line of input contains an integer T denoting the number of test cases. Each test case consist of two strings in 'lowercase' only, in a single line.

Output:
Print "YES" without quotes if the two strings are anagram else print "NO".

Constraints:
1 ≤ T ≤ 300
1 ≤ |s| ≤ 1016

Example:
Input:
2
geeksforgeeks forgeeksgeeks
allergy allergic

Output:
YES
NO

Explanation:
Testcase 1: Both the string have same characters with same frequency. So, both are anagrams.
Testcase 2: Characters in both the strings are not same, so they are not anagrams.


***************************************************/


#include <string>

#include<bits/stdc++.h>

using namespace std;
  


const int MAX_CHAR = 26; 
  

void sortString(string &str)

{ 
    
	int charCount[MAX_CHAR] = {0};
 
      
 for (int i=0; i<str.length(); i++)
 
       	charCount[str[i]-'a']++;
     
   int l=0;

	for (int i=0;i<MAX_CHAR;i++)
		for (int j=0;j<charCount[i];j++)
 
               {

	                str[l]= (char)('a'+i);
 
                	l++;

                }

}



int main() 
{
	
	int t;

	cin>>t;

	while(t--)

	{

	    string a,b;

	    cin>>a;

	    cin>>b;

	    if(a.capacity()!=b.capacity())

	    {

	        cout<<"NO"<<endl;

	        continue;

	    }

	    sortString(a);

	    sortString(b);

	    int f=1;

	    for (int i=0;i<a.capacity();i++)

	    {

	        if(a[i]!=b[i])

	        {

	            cout<<"NO"<<endl;

	            f=0;

	            break;

	        }

	    }

	    if(f==1)

	        cout<<"YES"<<endl;

	}

	return 0;

}














