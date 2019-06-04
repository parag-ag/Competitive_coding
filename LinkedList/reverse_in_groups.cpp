/*************************************************************************


Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list.

Input:
First line of input contains number of testcases T. For each testcase, first line contains length of linked list and next line contains the linked list elements.

Output:
For each testcase, there will be a single line of output which contains the linked list with every k group elements reversed.

Example:
Input:
1
8
1 2 2 4 5 6 7 8
4

Output:
4 2 2 1 8 7 6 5

Explanation:
Testcase 2: Since, k = 4. So, we have to reverse everty group of two elements. Modified linked list is as 4, 2, 2, 1, 8, 7, 6, 5.


*******************************************************************************/


struct node *reverse (struct node *head, int k)

{

    int size=0;

    struct node *temp=head,*new_head=NULL,*tail=NULL;

    while(temp!=NULL)

    {

        tail=temp;

        temp=temp->next;

        size++;

    }

    struct node *a[size];

    temp=head;

    int i=0;

    while(temp!=NULL)

    {

        a[i]=temp;

        i++;

        temp=temp->next;

    }

    new_head=a[k-1];

    temp=new_head;

    
    for(int j=1;j<=(size/k);j++)

    {

        for(i=j*k-2;i>=(j-1)*k;i--)

        {

            temp->next=a[i];

            temp=temp->next;

        }

        if(j==size/k)

        {

            if(size%k==0)

                temp->next=NULL;

            else

                temp->next=tail;

        }

        else

        {

        temp->next=a[(j+1)*k-1];

        temp=temp->next;

        }

    }

    if(temp->next!=NULL)

    {

        temp=temp->next;

        for(int j=size-2;j>=(size/k)*k;j--)

        {

            temp->next=a[j];

            temp=temp->next;

        }

        temp->next=NULL;

    }

    return new_head;

}