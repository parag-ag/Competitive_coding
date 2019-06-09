/*************************************************************

Given an integer N, remove consecutive repeated digits from it.

**************************************************************/


#include <iostream>
#include <stack>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    stack<int> s;
	    while(n!=0)
	    {
	        if(s.empty())
	            s.push(n%10);
	        else
	        {
	            if(s.top()!=n%10)
	                s.push(n%10);
	        }
	        n=n/10;
	    }
	    while(!s.empty())
	    {
	        n=n*10+s.top();
	        s.pop();
	    }
	    cout<<n<<endl;
	}
	return 0;
}