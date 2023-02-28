#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
int pop()
{
    int temp;
    if(top==-1)
    {
        printf("stack is empty");
        return -1;
    }
    temp=stack[top];
    top--;
    return temp;
}
void push(int data)
{
    if(top==MAX-1)
    {
        printf("stack overflow");
        return;
    }
    top++;
    stack[top]=data;
}
int main()
{
   push(5);
   push(2);
   push(3);
   int t=pop();
   printf("the pop valueis :%d",t);
   return 0;
    
}
