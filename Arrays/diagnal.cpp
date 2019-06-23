/*********************************************

Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.

Example:

		
Input: 	

1 2 3
4 5 6
7 8 9

Return the following :

[ 
  [1],
  [2, 4],
  [3, 5, 7],
  [6, 8],
  [9]
]


Input : 
1 2
3 4

Return the following  : 

[
  [1],
  [2, 3],
  [4]
]


***********************************************/

vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<int> col={0};
    vector<vector<int> > ret(2*A.size()-1,col );
    int size=1,status=0;
    for(int i=0;i<ret.size();i++)
    {
        ret[i].resize(size);
        if(size==A.size())
            status=1;
        if(status==0)
            size++;
        else
            size--;
    }
    char dir='r';
    int n=A.size(),i=0;
    while(i<ret.size())
    {
        if(dir=='r')
        {
            status=i;
            int start=0;
            for(int j=0;j<ret[i].size();j++)
            {
                ret[i][j]=A[start][status];
                status--;
                start++;
            }
            if(ret[i].size()==n)
            {
                dir='d';
            }
        }
        else if(dir=='d')
        {
            int start=n-1;
            status=i-n+1;
            for(int j=0;j<ret[i].size();j++)
            {
                ret[i][j]=A[status][start];
                status++;
                start--;
            }
        }
        i++;
    }
    
    return ret;
}