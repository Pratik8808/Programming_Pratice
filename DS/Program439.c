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
void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if((*first == NULL) && (*last == NULL))
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }

    (*last)->next = *first;
    (*first)->prev = *last;
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
    else if((*first)==(*last))
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
{
    int iCount=0;
    PNODE newn=NULL;
    iCount=Count(*first,*last);
    PNODE temp=NULL;
    int i=0;

    if(iPost<1 ||iPost>iCount+1)
    {
        printf("Wrong Postion");
        return;
    }
    if(iPost==1)
    {
        InsertFirst(first,last, iNo);

    }
    else if(iPost==iCount+1)
    {
        InsertLast(first,last,iNo);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=iNo;
        newn->next=NULL;
        newn->prev=NULL;

        temp=*first;
        for(i=1;i<iPost-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;

    }
}

void DeleteAtFirst(PPNODE first,PPNODE last)
{
    if(*first ==NULL && *last ==NULL)
    {
        return;
    }
    else if((*first)==(*last))
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
        (*last)->next=*first;
         (*first)->prev=(*last);

        

    }
  
}

void DeleteAtPos(PPNODE first,PPNODE last,int iPost)
{
   int iCount=0;
   
    iCount=Count(*first,*last);
    PNODE temp=NULL;
    int i=0;

    if(iPost<1 ||iPost>iCount)
    {
        printf("Wrong Postion");
        return;
    }
    if(iPost==1)
    {
        DeleteAtFirst(first,last);

    }
    else if(iPost==iCount)
    {
        DeleteLast(first,last);
    }
    else
    {
        

        temp=*first;
        for(i=1;i<iPost-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }
}

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
    // DeleteAtFirst(&head,&tail);

    // Display(head,tail);
    // iRet=Count(head,tail);

    // if(iRet!=0)
    // {
    //     printf("Count of total Nodes after Delete is : %d\n ",iRet);
    // }

    // DeleteLast(&head,&tail);

    //  Display(head,tail);
    // iRet=Count(head,tail);

    // if(iRet!=0)
    // {
    //     printf("Count of total Nodes after Delete is : %d\n ",iRet);
    // }

    InsertAtPost(&head,&tail,105,4);

    Display(head,tail);
    iRet=Count(head,tail);

    if(iRet!=0)
    {
        printf("Count of total Nodes after Insertat postis : %d\n ",iRet);
    }

    DeleteAtPos(&head,&tail,4);

     Display(head,tail);
    iRet=Count(head,tail);

    if(iRet!=0)
    {
        printf("Count of total Nodes after Dleete At post is : %d\n ",iRet);
    }










  return 0;
}