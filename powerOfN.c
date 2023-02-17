#include<stdio.h>
#include<math.h>
void power(int x,int n)
{
     x=pow(x,n);
     printf("%d",x);
}
int main()
{
    int x,n;
    printf("Enter the Value of X: ");
    scanf("%d",&x);
    printf("Enter the Value of n: ");
    scanf("%d ",&n);
    power(x,n);
}
