/*********************************************

Given an index k, return the kth row of the Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Input : k = 3

Return : [1,3,3,1]

**********************************************/

vector<int> Solution::getRow(int A) {
    vector<int> ret(A+1,0);
    if(A==0)
    {
        ret[0]=1;
        return ret;
    }
    else if(A==1)
    {
        ret[0]=1;
        ret[1]=1;
        return ret;
    }
    else if(A==2)
    {
        ret[0]=1;
        ret[1]=2;
        ret[2]=1;
        return ret;
    }
    else
    {
        ret[0]=1;
        ret[A]=1;
        vector<int> temp=getRow(A-1);
        for(int i=1;i<A;i++)
        {
            ret[i]=temp[i-1]+temp[i];
        }
        return ret;
    }
}
