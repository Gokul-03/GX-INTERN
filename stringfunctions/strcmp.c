#include <stdio.h>
#include <stdlib.h>

int stringcomp(char *string1,char*string2)
{
    int length=0;
    while(string1[length]!='\0')
    {
        length++;
    }
    for(int j=0;j<(length+1);j++)
    {
        if(string1[j]!=string2[j])
        {
            printf("the strings are different");
            return 0;
        }
    }
    printf("Both the strings are same");
    return 1;
}
int main()
{
    int n,comp;
    char str1[20],str2[20];
    printf("enter the first string: ");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
    stringcomp(str1,str2);
    
    return 0;
}
