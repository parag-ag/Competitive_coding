/*******************************************************

Given a stack of integers of size N, your task is to complete the function pairWiseConsecutive(), that checks whether numbers in the stack are pairwise consecutive or not. The pairs can be increasing or decreasing, and if the stack has an odd number of elements, the element at the top is left out of a pair. The function should retain the original stack content.

*********************************************************/


bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    if(s.size()%2==1)
        s.pop();
    while(!s.empty())
    {
        int temp=s.top();
        s.pop();
        if(abs(temp-s.top())!=1)
            return 0;
        s.pop();
    }
    return 1;
}