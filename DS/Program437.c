#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE first, PNODE last)
{
    if(first==NULL && last ==NULL)
    {
        return;
    }
    printf("<=>");
    do{
        printf("|%d|<=>",first->data);
        first=first->next;

    }while(first!=last->next);
    printf("\n");
  
}

int Count (PNODE first, PNODE last)
{
    int iCount=0;
     if(first==NULL && last ==NULL)
    {
        return 0;
    }
    do{
        iCount++;
        first=first->next;

    }while(first!=last->next);
    return iCount;
}
void InsertFirst(PPNODE first,PPNODE last,int iNO)
{
    PNODE newn=NULL;
    newn=(PNODE) malloc(sizeof(NODE));
    newn->data=iNO;
    newn->next=NULL;
    newn->prev=NULL;
    if(*first==NULL && *last==NULL )
    {
        *first=newn;
        *last=newn;
    }
    else 
    {
        newn->next=*first;
        (*first)->prev=newn;
        *first=newn;

    }
    (*last)->next=*first;
    (*first)->prev=*last;

}

void InsertLast(PPNODE first,PPNODE last,int iNO)
{
    PNODE newn=NULL;
    newn=(PNODE) malloc(sizeof(NODE));
    newn->data=iNO;
    newn->next=NULL;
    newn->prev=NULL;
     if(*first==NULL && *last==NULL )
    {
        return;
    }
    else if((*first)->next ==*last)
    {
        free(*first);
    }
    else 
      (*last)->next=newn;
      newn->prev=*last;
      *last=newn;
    {  
        
        
    }
    (*last)->next=*first;
    (*first)->prev=*last;
}
void InsertAtPost(PPNODE first,PPNODE last,int iNo ,int iPost)
{}

void DeleteAtFirst(PPNODE first,PPNODE last)
{
    if(*first ==NULL && *last ==NULL)
    {
        return;
    }
    else if((*last)==(*last))
    {
        free(*first);
        *first=NULL;
        *last=NULL;
    }
    else
    {
        *first=(*first)->next;
        free((*first)->prev);
        (*first)->prev=*last;
        (*last)->next=*first;

       

    }
 

    
}

void DeleteLast(PPNODE first,PPNODE last)
{
   
    if(first ==NULL && last ==NULL)
    {
        return;
    }
    else if((*last)->next==*first)
    {
        free(*first);
    }
    else
    {
         (*last)=(*last)->prev;
        free((*last)->next);
        

    }
     (*last)->next=*first;
    (*first)->prev=*last;

   

}

void DeleteAtPos(PPNODE first,PPNODE last,int iPost)
{}



int main()
{
    PNODE head=NULL;
    PNODE tail=NULL;
    int iRet=0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);


    Display(head,tail);
    iRet=Count(head,tail);

    if(iRet!=0)
    {
        printf("Count of total Nodes is : %d\n ",iRet);
    }
    DeleteAtFirst(&head,&tail);

    Display(head,tail);
    iRet=Count(head,tail);

    if(iRet!=0)
    {
        printf("Count of total Nodes after Delete is : %d\n ",iRet);
    }







  return 0;
}