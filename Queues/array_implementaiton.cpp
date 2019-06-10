/******************************************

Implement a Queue using Array. Your task is only to complete the functions push and pop.

******************************************/


void MyQueue :: push(int x)
{
    if(rear<10000)
    {
        rear++;
        arr[rear]=x;
        if(front==0)
            front++;

    }
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
    if(front==0||front>rear)
        return -1;
    else
    {

        front++;
        return arr[front-1];
    }
}
