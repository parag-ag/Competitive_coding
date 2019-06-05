/*****************************************************************


Given a linked list of N nodes where nodes can contain values 0s, 1s and 2s only. The task is to segregate 0s, 1s and 2s linked list such that all zeros segregate to headside, 2s at the end of the linked list and 1s in the mid of 0s and 2s.

Input Format:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list and next line contains N elements as the data in the linked list.

Output Format:
For each testcase, segregate the 0s, 1s and 2s and display the linked list.

Your Task:
The task is to complete the function segregate() which segregate the nodes in the linked list as asked in the problem statement. The printing is done automatically by the driver code.

Constraints:
1 <= T <= 100
1 <= N <= 103

User Task:
The task is to complete the function sortList() which takes head reference as the argument and returns void.

Example:
Input:
2
8
1 2 2 1 2 0 2 2
4
2 2 0 1

Output:
0 1 1 2 2 2 2 2
0 1 2 2

Explanation:
Testcase 1: All the 0s are segregated to left end of the linked list, 2s to the right end of the list and 1s in between.


*************************************************************/


Node* segregate(Node *head) {

    Node *newhead=NULL,*temp=head,*e0=NULL,*b1=NULL,*e1=NULL,*b2=NULL,*b0=NULL,*e2=NULL;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            if(e0==NULL)
            {
                e0=temp;
                b0=temp;
                newhead=temp;
                
            }
            else
            {
            e0->next=temp;
            e0=temp;
            }
        }
        else if(temp->data==1)
        {
            if(b1==NULL)
            {
                b1=temp;
                e1=temp;
            }
            else
            {
            e1->next=temp;
            e1=temp;
            }
        }
        else
        {
            if(b2==NULL)
            {
                b2=temp;
                e2=temp;
            }
            else
            {
            e2->next=temp;
            e2=temp;
            }
        }
        temp=temp->next;
    }
    if(e2!=NULL)
    e2->next=NULL;
    if(e1!=NULL)
    e1->next=b2;
    if(e0!=NULL&&b1!=NULL)
        e0->next=b1;
    if(e0!=NULL&&b1==NULL)
        e0->next=b2;
    
    if(b0==NULL)
    {    if(b1==NULL)
            newhead=b2;
        else
            newhead=b1;}
    return newhead;
}
