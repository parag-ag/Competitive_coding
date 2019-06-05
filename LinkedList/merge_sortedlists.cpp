/**********************************************************


Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.

Note: It is strongly recommended to do merging in-place using O(1) extra space.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains N and M, and next two line contains N and M sorted elements in two lines for each.

Output:
For each testcase, print the merged list in sorted form.

User Task:
The task is to complete the function sortedMerge() which takes references to the heads of two linked lists as the arguments and returns the head of merged linked list.

Constraints:
1 <= T <= 200
1 <= N, M <= 103
1 <= Node's data <= 103

Example:
Input:
2
4 3
5 10 15 40 
2 3 20
2 2
1 1
2 4 

Output:
2 3 5 10 15 20 40 
1 1 2 4

Explanation:
Testcase 1: After merging the two linked lists, we have merged list as 2, 3, 5, 10, 15, 20, 40.



****************************************************************/



Node* sortedMerge(Node* head1,   Node* head2)
{
    Node *temp1=head1,*temp2=head2,*pre1=head1,*pre2=head2,*new_head=NULL;
    int cur;
    if(temp1->data<temp2->data)
    {
        new_head=head1;
        cur=1;
    }
    else
    {
        new_head=head2;
        cur=2;
    }
    //Node *current=new_head;
    while(temp1!=NULL&&temp2!=NULL)
    {
        if(cur==1)
        {
            if(temp1->data<=temp2->data)
            {
                pre1=temp1;
                temp1=temp1->next;
            }
            else
            {
                if(temp1==head1)
                    temp1=temp1->next;
                pre1->next=temp2;
                cur=2;
            }
        }
        else
        {
            if(temp2->data<=temp1->data)
            {
                pre2=temp2;
                temp2=temp2->next;
            }
            else
            {
                if(temp2==head2)
                    temp2=temp2->next;
                pre2->next=temp1;
                cur=1;
            }
        }
    }
    if(cur==1)
        pre1->next=temp2;
    else
        pre2->next=temp1;
    return new_head;
}
