/*******************************************************

Implement a Queue using Linked List.

Input Format:
The first line of the input contains an integer 'T' denoting the number of test cases. Then T test cases follow.
First line of each test case contains an integer Q denoting the number of queries . 
A Query Q is of 2 Types
(i) 1 x   (a query of this type means  pushing 'x' into the queue)
(ii) 2     (a query of this type means to pop element from queue and print the poped element)
The second line of each test case contains Q queries seperated by space.

Output Format:
The output for each test case will  be space separated integers having -1 if the queue is empty else the element poped out from the queue . 
You are required to complete the two methods push which takes one argument an integer 'x' to be pushed into the quee  and pop which returns a integer poped out from othe queue.

Your Task:
Since this is a function problem, you don't need to take inputs. Just complete the provided functions. The printing is done automatically by the driver code.

Constraints:
1 <= T <= 100
1 <= Q <= 100
1 <= x <= 100

Example:
Input:
2
5
1 2 1 3 2 1 4 2
4
1 2 2 2 1 3   
Output:
2 3
2 -1

Explanation:
Testcase1:
1 2    the quee will be {2}
1 3    the queue will be {2 3}
2       poped element will be 2 the queue will be {3}
1 4    the queue will be {3 4}
2       poped element will be 3



*******************************************************************/


/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */
/* The method push to push element into the queue*/
void MyQueue:: push(int x)
{
    struct QueueNode* node = (struct QueueNode*) malloc(sizeof(struct QueueNode));
    if(front==NULL)
        front = node;
    if(rear!=NULL)
    rear->next=node;
    rear=node;
    rear->data=x;
    rear->next=NULL;
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
    if(front==NULL)
        return -1;
    struct QueueNode* node=front;
    front=front->next;
    if(front==NULL)
        rear=NULL;
    node->next=NULL;
    int num=node->data;
    free(node);
    return num;
    
}
