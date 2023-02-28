#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}st;

void printMiddle(st *head)
{
	st *slow  = head;
	st *fast  = head;

	if (head!=NULL)
	{
		while (fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next;
			if(fast->next!=NULL)
			{
			    fast=fast->next;
			}
		}
		printf("The middle element is [%d]\n\n", slow->data);
	}
}

void push(st** head, int data)
{
	st *node =(st*) malloc(sizeof(st));
    node->data = data;
	node->next = (*head);
	(*head) = node;
}

void printList(st *ptr)
{
	while (ptr != NULL)
	{
		printf("[%d]  ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

int main()
{
	st * head = NULL;
	int i=0;
	int n;
	printf("Enter the size of the LL:\n");
	scanf("%d",&n);
	printf("Enter the elements\n");

	for (int j=0; j<n; j++)
	{
	    scanf("%d",&i);
		push(&head, i);
	}
	printList(head);
	printMiddle(head);

	return 0;
}

