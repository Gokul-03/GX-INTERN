#include<stdio.h>
#include<string.h>
//function to diasplay the name of the student in the particular index number
void display_name(char **stu,int index)
{
    printf("The name of the student in %dth index is %s\n",index+1,stu[index]);
}

//function to print the number of vowel characters in the given index
void vowel_count(char **stu, int index)
{
    int count=0;
    for(int letter=0;stu[index][letter]!='\0';letter++)
    {
       
        if(stu[index][letter]=='a'||stu[index][letter]=='A'||stu[index][letter]=='e'||stu[index][letter]=='E'||stu[index][letter]=='i'||stu[index][letter]=='I'||
        stu[index][letter]=='o'||stu[index][letter]=='O'||stu[index][letter]=='u'||stu[index][letter]=='U')
        {
          count++;
         
        }
    }
    printf("Vowel Count in %s is %d\n",stu[index],count);
}

//function to print the longest name in the array
void longest_name(char **stu)
{
    int maximumLength=0,index=0;
    for(int i=0;i<10;i++)
    {
        int value=strlen(stu[i]);
        if(maximumLength<value)
        {
            maximumLength=value;
            index=i;
        }
    }
    printf("The longest name is %s\n",stu[index]);
}

//function to print the names that are starting and ending with a
void unique(char **stu)
{
    printf("The names starting and ending with 'a'\n");
   for(int index=0;index<10;index++)
   {
     if((stu[index][0]=='a')||(stu[index][0]=='A'))
     {
         int nullposition=strlen(stu[index]);
         if(stu[index][nullposition-1]=='a'||stu[index][nullposition-1]=='A')
         {
            printf("%s\n",stu[index]);
         }
     }
   }
}

int main()
{
    int indx=0;
    char *students[10][20] = {"Akash","Anirudha","Vikas","Vinay","Rakesh","Thomas","Jerry","Alekha","Daksh","Peter"};
    printf("Enter the n th index: ");
    scanf("%d",&indx);
    int index=indx-1;
    display_name(*students,  index);
    vowel_count(*students, index);
    longest_name(*students);
    unique(*students);
   
}
