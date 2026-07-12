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
{   //ISSUE
    if(first==NULL && last ==NULL)
    {
        return;
    }
   do{
        printf("|%d|->",first->data);
        first=first->next;
   }
   while(first!=last->next);
   printf("\n");
}

int count (PNODE first,PNODE last)
{
    int iCount=0;
    if(first==NULL && last ==NULL)
    {
        return 0;
    }
    do{
        
        first=first->next;
        iCount++;

    }while(first!=last->next);
    return iCount;
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
{   
    if(*first==NULL && *last==NULL)
    {
        return;
    }
    else if(*first==*last)
    {
        free(*first);
        *first=NULL;
        *last=NULL;
    }
    else
    {
         *first=(*first)->next;
         free((*last)->next);  //Changed
         (*last)->next=*first;
    }
    

}

void DeleteAtLast(PPNODE first,PPNODE last)
{   PNODE temp=NULL;
     if(*first==NULL && *last==NULL)
    {
        return;
    }
    else if(*first==*last)
    {
        free(*first);
        *first=NULL;
        *last=NULL;
    }
    else
    {   temp=*first;
        while(temp->next!=(*last))
        {
            temp=temp->next;


        }
        free((*last)); // free(temp->next);
        *last=temp;
        (*last)->next=*first;


        
    }
}

void DeleteAtPos(PPNODE first,PPNODE last,int iPos)
{}

int main()
{ PNODE head=NULL;
  PNODE tail=NULL;
  int iRet=0;
  Display(head,tail);

  Insertfirst(&head,&tail,51);
  Insertfirst(&head,&tail,21);
  Insertfirst(&head,&tail,11);

  Insertlast(&head,&tail,111);
  Insertlast(&head,&tail,121);
  Insertlast(&head,&tail,151);

  Display(head,tail);

  iRet=count(head,tail);
  if(iRet!=0)
  {
      printf("Total Count of Nodes are %d\n",iRet);

  }
  else 
  {
    printf("No Nodes");
  }

  DeleteAtFirst(&head,&tail); 
  Display(head,tail);

  iRet=count(head,tail);
  if(iRet)
  {
      printf("Total Count of Nodes are %d\n",iRet);

  }
  else 
  {
    printf("No Nodes");
  }

  DeleteAtLast(&head,&tail);

   Display(head,tail);

  iRet=count(head,tail);
  if(iRet)
  {
      printf("Total Count of Nodes are %d\n",iRet);

  }
  else 
  {
    printf("No Nodes");
  }


  


  


    return 0;
}