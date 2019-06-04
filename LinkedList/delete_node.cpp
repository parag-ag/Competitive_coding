/***************************************************************

Delete xth node from a single linked list. Your task is to complete the method deleteNode which takes two arguments:  the address of the head of the linked list and an integer x. The function returns the head of the  modified linked list.
 

Input:
The first line of input contains an element T, denoting the no of test cases. Then T test cases follow. Each test case contains three lines. The first line of each test case contains an integer N denoting the no of elements of the linked list. Then in the next line are N space separated values of the linked list. The third line of each test case contains an integer x.

Output:
The output for each test case will be the space separated value of the returned linked list.

Constraints:
1<=T<=300
2<=N<=100
1<=x<=N

Example(To be used only for expected output):

Input:
2
3                       
1 3 4               
3                       
4
1 5 2 9                    
2

Output:
1 3           
1 2 9


***********************************************************************************/




#include <stdio.h>

#include <stdlib.h>

#include<iostream>

using namespace std;


/* Link list Node */

struct Node

{

    int data;

    struct Node* next;

};


void append(struct Node** head_ref, struct Node **tail_ref,
int new_data)

{

    struct Node* new_node = new Node;

    new_node->data  = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)

       *head_ref = new_node;

    else

       (*tail_ref)->next = new_node;

    *tail_ref = new_node;

}


/* Function to get the middle of the linked list*/


struct Node* deleteNode(struct Node *head,int );


void printList(Node *head)

{

   while (head != NULL)

   {

      cout << head->data << " ";

      head = head->next;

   }

   cout << "
";

}


/* Driver program to test above function*/


int main()

{

  int T,i,n,l;

  // TO BE REMOVED
  
	for (int i=0; i<2000; i++);

    cin>>T;

    while(T--)
    {

 	struct Node *head = NULL,  *tail = NULL;

        cin>>n;

        for(i=1;i<=n;i++)

        {

            cin>>l;

            append(&head, &tail, l);

        }

	int kk;

	cin>>kk;

    	head = deleteNode(head,kk);

    	printList(head);

    }

    return 0;

}




Node* deleteNode(Node *head,int x)

{

	Node* temp=head;

	Node* previous=NULL;

    if(x==1)

    {

        head = head->next;

        temp->next=NULL;

        free(temp);

        return head;

    }

    while(x>1)

    {

        x--;

        previous = temp;

        temp = temp->next;

    }

    previous->next = temp->next;

    temp->next = NULL;

    free(temp);

    return head;

}
