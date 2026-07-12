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
    while(first!=last)
    {
        printf("|%d|->",first->data);
        first=first->next;
    }
    printf("NULL\n");
    
}

int count (PNODE first,PNODE last)
{
    return 0;
}

void Insertfirst(PPNODE first,PPNODE last,int iNo)
{
    PNODE temp=NULL;
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if((*first)==NULL && *last==NULL)
    {
        // *first=*last=newn;
        *first=newn;
        *last=newn;
        
    }
    else 
    {
        newn->next=*first;
       // (*last)->next=newn; Not required as given in else
        *first=newn;

    }
    (*last)->next=*first;
}

void Insertlast(PPNODE first,PPNODE last,int iNo)
{

   
    PNODE newn=NULL;
    
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if((*first)==NULL && *last==NULL)
    {
        // *first=*last=newn;
        *first=newn;
        *last=newn;
        
    }
    else 
    {
       (*last)->next=newn;
       (*last)=(*last)->next;
        
       

    }
    (*last)->next=*first;
}

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

  Insertfirst(&head,&tail,51);
  Insertfirst(&head,&tail,21);
  Insertfirst(&head,&tail,11);

  Insertlast(&head,&tail,111);
   Insertlast(&head,&tail,121);
    Insertlast(&head,&tail,151);


  


  


    return 0;
}