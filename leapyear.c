#include<stdio.h>
void leap_year(int year)
{
    if(year%4==0)
    {
        if(year%400==0||year%100!=0)
        {
          printf("S");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
}
int main()
{
  int   n;
  printf("Enter the Year");
  scanf("%d",&n);
  leap_year(n);
}
