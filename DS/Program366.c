#include <stdio.h>
#pragma pack(1)
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;

void Display(PNODE first)
{
    
    while(first!=NULL) 
  {
     printf("%d\n",first->data);
      first=first->next; 

  }
  
}

int  Count(PNODE first)
{
    int iCount=0;
    while(first!=NULL) // Time complexity is O(n)
  {
     iCount++;
      first=first->next; 

  }
  return iCount;
}

int main()
{ 
    PNODE head=NULL;
 
    NODE  obj1,obj2,obj3;
    int iRet=0;

    head=&obj1;
  
    obj1.data=11;
    obj1.next=&obj2;

    obj2.data=21;
    obj2.next=&obj3;

    obj3.data=51;
    obj3.next=NULL;

    Display(head);
    iRet=Count(head); //count(100)

    printf("Number of Nodes are %d \n",iRet);
     

 
    return 0;
}