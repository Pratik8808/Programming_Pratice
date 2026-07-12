#include  <stdio.h>
#include <stdlib.h>
#pragma pack(1)

struct node 
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first, PNODE last)
{
    
}

int count (PNODE first,PNODE last)
{
    return 0;
}

void Insertfirst(PPNODE first,PPNODE last,int iNO)
{}

void Insertlast(PPNODE first,PPNODE last,int iNo)
{}

void InsertAtPos(PPNODE first,PPNODE last,int iNo,int iPost)
{}

void DeleteAtFirst(PPNODE first,PPNODE last)
{}

void DeleteAtLast(PPNODE first,PPNODE last)
{}

void DeleteAtPos(PPNODE first,PPNODE last,int iPos)
{}

int main()
{ PNODE head=NULL;
  PNODE tail=NULL;


    return 0;
}