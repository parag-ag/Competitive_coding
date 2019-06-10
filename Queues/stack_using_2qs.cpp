/*************************************************

Implement a Stack using two queues q1 and q2.

**************************************************/


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
    q2.push(x);

}
/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    if(q2.empty())
        return -1;
    int temp = q2.back();
    int n=q2.size();
    for(int i=1;i<n;i++)
    {
        q1.push(q2.front());
        q2.pop();
        //cout<<q1.front()<<"!";
    }
    q2.pop();

    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    //cout<<q2.back()<<"!!";
    return temp;
}
