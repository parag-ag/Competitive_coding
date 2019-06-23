/*********************************************

Given an integer array, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p
If such an integer is found return 1 else return -1.

***********************************************/

int Solution::solve(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end(),greater<int>());
    for(int i=0;i<A.size();i++)
    {
        if((A[i]==i&&A[i]!=A[i-1])||A[i]==0)
            return 1;
    }
    return -1;
}
