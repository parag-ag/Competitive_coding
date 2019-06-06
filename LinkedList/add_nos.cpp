/*******************************************************************


Given two numbers represented by two linked lists of size N and M. The task is to return a sum list. The sum list which is a linked list representation of addition of two input numbers.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains length of first linked list and next line contains N elements of the linked list. Again, next line contains M, and following line contains M elements of the linked list.

Output:
Output the resultant linked list.

User Task:
The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of new list.

Constraints:
1 <= T <= 100
1 <= N, M <= 100

Example:
Input:
2
2
4 5
3
3 4 5
2
6 3
1
7

Output:
0 9 3  
0 7

Explaination:
5->4 // linked list repsentation of 45.
5->4->3 // linked list representation of 345.
0->9 ->3 // linked list representation of 390 resultant linked list.


************************************************************************/


Node* addTwoLists(Node* first, Node* second) {
    Node *temp1=first,*temp2=second,*newhead=NULL,*temp=NULL,*tail=NULL;
    int carry=0,num1,num2;
    while(temp1!=NULL||temp2!=NULL)
    {
        temp = (struct Node*) malloc(sizeof(struct Node));
        if(newhead==NULL)
        {
            newhead=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
        if(temp1==NULL)
            num1=0;
        else
            num1=temp1->data;
        if(temp2==NULL)
            num2=0;
        else
            num2=temp2->data;
        int sum=num1+num2+carry;
        if(sum>9)
        {
            carry=1;
            sum=sum%10;
        }
        else
            carry=0;
        tail->data=sum;
        tail->next=NULL;
        if(temp1!=NULL)
            temp1=temp1->next;
        if(temp2!=NULL)
            temp2=temp2->next;
    }
    if(carry==1)
    {
        temp=(struct Node*) malloc(sizeof(struct Node));
        tail->next=temp;
        tail=temp;
        tail->data=1;
        tail->next=NULL;
    }
    
    return newhead;
}