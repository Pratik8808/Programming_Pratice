#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};


int main()
{
    struct node obj;
    printf("%d\n",sizeof(obj)); // 16 Bytes
//4(int)+4(padding)+8(Pointer)
    return 0;
}