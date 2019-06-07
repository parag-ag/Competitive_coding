/************************************************************

Design a data-structure SpecialStack (using the STL of stack) that supports all the stack operations like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. Your task is to complete all the functions, using stack data-Structure.


*************************************************************/

void push(int a)
{
    s.push(a);
}
bool isFull(int n)
{
    if(s.size()==n)
        return 1;
    else
        return 0;
}
bool isEmpty()
{
    return s.empty();
}
int pop()
{
    int temp=s.top();
    s.pop();
    return temp;
}
int getMin()
{
   int min=s.top();
   s.pop();
   while(!s.empty())
   {
       if(s.top()<min)
       {
           min=s.top();
       }
       s.pop();
   }
   return min;
}