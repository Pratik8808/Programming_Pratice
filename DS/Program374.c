#include <stdio.h>

#include <stdlib.h>

// InsetAtFirst 
struct node {
    int data;
    struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while(first!=NULL)
    {
        printf("|%d|->",first->data);
        first=first->next;
    }
    printf("NULL \n");
    
}
int count (PNODE first)
{
    int icount=0;
    while(first!=NULL)
    {
        first=first->next;
        icount++;

    }
    return icount;
    
}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

    if(*first==NULL)// LinkedList is Empty
    {
        *first=newn;

    }
    else// LinkedList contain At least one Node 
    {
           newn->next=*first;
           *first=newn;
    }

    

}
void InsertLast(PPNODE first,int iNo)
{}

void InsertAtPos(PPNODE first,int iNo,int iPos)
{}


void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE first,int iNo)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
   

    if(*first==NULL)// LinkedList is Empty
    {
        *first=newn;

    }
    else// LinkedList contain At least one Node 
    {

    }
}

void DeleteAtPos(PPNODE first,int iPos)
{}




int main()
{
    PNODE head=NULL;
    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    Display(head);
    int iRet=0;
    iRet=count(head);
    printf("Number if node are : %d\n",iRet);
       

    return 0;
}