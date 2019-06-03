/**************************************************************************************

Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.
 
Input:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. Each test case contains a string str .

Output:
For each test case in a new line output will be an integer denoting the converted integer, if the input string is not a numerical string then output will be -1.
 
Constraints:
1<=T<=100
1<=length of (s,x)<=10

Example(To be used only for expected output) :
Input:
2
123
21a

Output:
123
-1

*******************************************************************************************/


int atoi(string str)

{
    
	int n=str.length();

    	int num=0,start=0,mult=1;

    if(str[0]=='-')

    {

        start=1;

        mult=-1;

    }

    for(int i=start;i<n;i++)

    {

        if(str[i]<=57&&str[i]>=48)

        {

            num=num*10+((int)str[i]-48);

        }

        else

        {

            return -1;

        }

    }

    return (num*mult);

}