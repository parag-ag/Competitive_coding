/************************************

Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.

*************************************/


#include <iostream>
#include <queue>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n=0;
	    cin>>n;
	    queue<string> q;
	    q.push("1");
	    while(n--)
	    {
	        string s1=q.front();
	        q.pop();

	        cout<<s1<<" ";

	        string s2=s1;
	        q.push(s1.append("0"));
	        q.push(s2.append("1"));
	    }
	    cout<<endl;
	}
	return 0;
}
