/*******************************************************************************


Given a singly linked list of size N. The task is to rotate the linked list counter-clockwise by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.

Input Format:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list and next line contains linked list elements and last line contains k, by which linked list is to be rotated.

Output Format:
For each testcase, print the rotated linked list.

User Task:
The task is to complete the function rotate() which takes head reference as the first argument and k as the second argument. The printing is done automatically by the driver code.

Constratints:
1 <= T <= 100
1 <= N <= 103
1 <= k <= 103

Example:
Input:
2
8
1 2 3 4 5 6 7 8
4
5
2 4 7 8 9
3

Output:
5 6 7 8 1 2 3 4
8 9 2 4 7

Explanation:
Testcase 1: After rotating the linked list by 4 elements (anti-clockwise), we reached to node 5, which is (k+1)th node from beginning, now becomes head and tail of the linked list is joined to the previous head.


****************************************************************************************/



struct Node* rotate(struct Node* head, int k) 
{

    struct Node* temp=head;

    struct Node* new_head=head;

    struct Node* previous=NULL;

    int t=1;

    while(temp->next!=NULL)

    {

        temp=temp->next;

    }

    temp->next=head;

    while(t<=k)

    {

        previous=new_head;

        new_head=new_head->next;

        t++;

    }

    previous->next=NULL;

    return new_head;

}