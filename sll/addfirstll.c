#include <stdio.h>
#include <stdlib.h>
  
typedef struct Node {
    int key;
    struct Node* next;
} Node;
Node* head=NULL;
Node* tail=NULL;
  
Node* newNode(int key)
{
   Node* temp=(Node*)malloc(sizeof(Node));
   temp->key=key;
   if(head==NULL)
   {
       head=temp;
       tail=head;
   }
   tail->next=temp;
   tail=temp;
   tail->next=NULL;
}

void printList(Node* head)
{
    while (head != NULL) {
        printf("%d  ", head->key);
        head = head->next;
    }
    printf("\n");
}
int main()
{
    int n,t;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("the elements in the list\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        newNode(t);
    }
    printList(head);
}
