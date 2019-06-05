/***********************************************

Given a linked list of N positive integers. You need to swap elements pairwise. Your task is to complete the function pairwise_swap().

Input Format:
The input line contains T, denoting the number of testcases. Each testcase contains two lines, the first line contains N(size of linked list). The second line contains N elements of linked list separately.

Output Format:
For each testcase, in new line, print the modified linked list.

User Task:
Since this is a functional problem you don't have to worry about input and output, you just have to complete the function pairwise_swap(). The printing is done automatically by the driver code.

Constraint:
1 <= T <= 100
1 <= N <= 100
1 <= Node values <= 1000

Example:
Input:
2
7
1 2 3 4 5 6 7
6
1 2 3 4 5 6

Output:
2 1 4 3 6 5 7
2 1 4 3 6 5

Explanation:
Testcase 1: The linked list after swapping becomes: 1 2 3 4 5 6 7 -> 2 1 4 3 6 5 7


*************************************************/


struct Node* pairwise_swap(struct Node* head)
{
    struct Node *pre=head;
    struct Node *cur=NULL;
    if(head!=NULL)
        cur=pre->next;
    while(1)
    {
        int temp=cur->data;
        cur->data=pre->data;
        pre->data=temp;
        for(int i=0;i<2;i++)
        {
            pre=cur;
            cur=cur->next;
            if(cur==NULL)
                return head;
        }
        
    }
}