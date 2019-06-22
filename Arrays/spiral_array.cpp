/*********************************************

Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Given n = 3,

You should return the following matrix:

[
  [ 1, 2, 3 ],
  [ 8, 9, 4 ],
  [ 7, 6, 5 ]
]

*********************************************/

vector<vector<int> > Solution::generateMatrix(int A) {
    vector<int> col(A,0);
    vector<vector<int> > ret(A);
    for(int i=0;i<A;i++)
    {
        ret[i]=vector<int>(col) ;
    }
    char dir='r';
    int R=A-1,L=0,T=0,B=A-1,count=1;
    while(count<=A*A)
    {
        if(dir=='r')
        {
            for(int i=L;i<=R;i++)
            {
                ret[T][i]=count;
                count++;
            }
            T++;
            dir='d';
        }
        else if(dir=='d')
        {
            for(int i=T;i<=B;i++)
            {
                ret[i][R]=count;
                count++;
            }
            R--;
            dir='l';
        }
        else if(dir=='l')
        {
            for(int i=R;i>=L;i--)
            {
                ret[B][i]=count;
                count++;
            }
            B--;
            dir='u';
        }
        else if(dir=='u')
        {
            for(int i=B;i>=T;i--)
            {
                ret[i][L]=count;
                count++;
            }
            L++;
            dir='r';
        }
        
        
    }
    
    
    return ret;
}
