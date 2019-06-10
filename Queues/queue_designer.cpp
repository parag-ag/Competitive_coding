/********************************************************************

You are given an array A of size N. You need to enqueue the elements of the array into a queue and then print them while dequeue .

*********************************************************************/


queue<int>_push(int arr[],int n)
{
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        q.push(arr[i]);
    }
    return q;
}
void _pop(queue<int>s)
{
    while(!s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
}
