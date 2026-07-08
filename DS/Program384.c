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
    while(first)
    {
        printf("|%d|->",first->data);
        first=first->next;
    }
    printf("NULL \n");
    
}
int count (PNODE first)
{
    int icount=0;
    while(first!=NULL) // Type 1
    {
        icount++;
        first=first->next;

    }
    return icount;
    
}

void InsertFirst(PPNODE first,int iNo) // why here not created temp pointer here then if call of by address becuse head wiill gone
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

    if(NULL==*first)// LinkedList is Empty
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
{   PNODE newn=NULL;
    PNODE temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
   


     if(NULL==*first)// LinkedList is Empty
    {
        *first=newn;

    }
   
    else 
    {
        temp=*first;
        while(temp->next!=NULL) // Type 2
        {
            temp=temp->next;

        }
        temp->next=newn;
    }
}

void InsertAtPos(PPNODE first,int iNo,int iPos)
{
    int iCount =0;
    int i=0;
    PNODE newn=NULL;
    PNODE temp=NULL;

    iCount=count(*first);// call by address 
    if((iPos<1)||(iPos>iCount+1))
    {
        printf("Invaild Postion ");
    }
    if(iPos==1)
    {
        InsertFirst(first,iNo);

    }
    else if(iPos==iCount+1)
    {
        InsertLast(first,iNo);

    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=iNo;
        newn->next=NULL;

        temp=*first;
        for(i=0;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

    }

}


void DeleteFirst(PPNODE first)
{

    PNODE temp=NULL;
    if(*first==NULL) //LL is Empty
    {
        return ;
    }
    else if((*first)->next==NULL) // LL contain one node 
    {
        free(*first);
        *first=NULL;
    }
    else                        // LL contains more than one Node
    {
        temp=*first;
        *first=(*first)->next;
        free(temp);


    }

}

void DeleteLast(PPNODE first)
{
    PNODE temp=NULL;
    if(*first==NULL) //LL is Empty
    {
        return ;
    }
    else if((*first)->next==NULL) // LL contain one node 
    {
        free(*first);
        *first=NULL;
    }
    else
    {
        temp=*first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }

        free(temp->next);
        temp->next=NULL;
    }
}

    void DeleteAtPos(PPNODE first,int iPos)
    {
        int iCount =0;
        int i=0;
        PNODE temp=NULL;
        PNODE target=NULL;


        iCount=count(*first);// call by address 
        if((iPos<1)||(iPos>iCount))
        {
            printf("Invaild Postion ");
        }
        if(iPos==1)
        {
            DeleteFirst(first);

        }
        else if(iPos==iCount)
        {
            DeleteLast(first);

        }
        else
        { temp=*first;
            

            for(i=1;i<iPos-1;i++)
            {
                temp=temp->next;
            }
            target=temp->next;
            temp->next=target->next;
            free(target);


        }
    }





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

    InsertLast(&head,111);
    InsertLast(&head,112);

    Display(head);

    DeleteFirst(&head);
    Display(head);
     iRet=count(head);
    printf("Number if node are : %d\n",iRet);

    DeleteLast(&head);
    iRet=count(head);

    InsertAtPos(&head,105,3);

    Display(head);
     iRet=count(head);
    printf("Number if node are : %d\n",iRet);


        DeleteAtPos(&head,3);

        Display(head);
        iRet = count(head);

        printf("Number of nodes are : %d\n",iRet);
   
        

    return 0;
}