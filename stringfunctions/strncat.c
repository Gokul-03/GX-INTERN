#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void stringncat(char * string1,char *string2,int n)
{
    int i=0;
    int si=0;
    while(string1[i]!='\0')
    {
        i++;
    }
    for(int j=i;j<(i+n);j++,si++)
    {
        string1[j]=string2[si];
    }
    printf("%s",string1);
}
int main()
{
    int n;
    char str1[20],str2[20];
    printf("enter the first string: ");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
    printf("enter the number of letters to be considered: ");
    scanf("%d",&n);
    stringncat(str1,str2,n);
    //printf("%s",str1);
    return 0;
}
