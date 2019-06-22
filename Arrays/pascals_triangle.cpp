/*********************************************

Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]

*******************************************/

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > ret(A);
    for(int i=0;i<A;i++)
        ret[i].resize(i+1);
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if(j==0||j==i)
                ret[i][j]=1;
            else
            {
                ret[i][j]=ret[i-1][j-1]+ret[i-1][j];
            }
        }
    }
    return ret;
}
