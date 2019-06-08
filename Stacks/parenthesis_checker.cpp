/******************************************************

Given an expression string exp. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])”


******************************************************/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    int flag=0;
	    cin>>str;
	    stack<char> s;
	    for(int i=0;i<str.size();i++)
	    {
	        if(s.empty()||str[i]=='('||str[i]=='['||str[i]=='{')
	            s.push(str[i]);
	        else
	        {
	            
	            if((str[i]==')'&&s.top()=='(')||(str[i]==']'&&s.top()=='[')||(str[i]=='}'&&s.top()=='{'))
	                s.pop();
	            else
	            {
	                flag=1;
	                break;
	            }
	        }
	            
	    }
	    if(flag==1||!s.empty())
	        cout<<"not balanced"<<endl;
	    else
	        cout<<"balanced"<<endl;
	}
	return 0;
}