#include<stdio.h>
void square(int n)
{
    static int sum=0;
    printf("Square of the n numers are: ");
    for(int i=1;i<=n;i++)
    {
        sum=sum+(i*i);
        printf("%d " ,i*i);
    }
    printf("\n");
    printf("sum of Square of n numbers: %d",sum);
}

int main()
{
    int n;
    printf("Enter The Value of N:");
    scanf("%d",&n);
    square(n);
    //sum(n);
}
