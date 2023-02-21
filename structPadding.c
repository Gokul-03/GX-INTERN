#include <stdio.h>

typedef struct mystruct
{
    int a;      //4 byte
    float b;    //4 byte
    char c;     //1 byte
}st;

int main()
{
    st t;
    printf("size of mystruct : %ld",sizeof(st));
    return 0;
}
/* In this ..according to the size of the datatype , the logical size must be 9 bytes.
but here the size is 12 
it's because due to the structure padding involved in this scenerio
*/


