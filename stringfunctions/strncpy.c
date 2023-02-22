#include <stdio.h>
#include<string.h>

int main()
{
    int n,i=0;
    char str1[20];
    char str2[20];
    
    scanf("%s",str1);
    printf("Number of letters to be copied: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)        //to copy the first n letters
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("%s",str2);      //printing the required string
    return 0;
}

