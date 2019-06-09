/***************************************************************

Given a stack, the task is to sort it such that the top of the stack has the greatest element.

****************************************************************/


void SortedStack :: sort()
{
    vector<int> a;
    while(!s.empty())
    {
        a.push_back(s.top());
        s.pop();
    }
    //int n=a.size();
    std::sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        s.push(a[i]);
    }
}