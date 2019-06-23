/**********************************************

The count-and-say sequence is the sequence of integers beginning as follows:

1, 11, 21, 1211, 111221, ...
1 is read off as one 1 or 11.
11 is read off as two 1s or 21.

21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

Example:

if n = 2,
the sequence is 11.

*********************************************/

string Solution::countAndSay(int A) {
    string ret,temp;
    if(A==1)
        return "1";
    else
        temp=countAndSay(A-1);
    int count=0,fig,i=0;
    while(temp[i]!='\0')
    {
        fig=temp[i];
        count=0;
        while(temp[i]==fig)
        {
            count++;
            i++;
        }
        ret.push_back(count+48);
        ret.push_back(fig);
    }
    return ret;
}
