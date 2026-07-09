    #include <stdio.h>
    #include <stdlib.h>
    #pragma pack(1)
    struct node
    {   int data;
    struct node *next;
    struct node *prev; //$

    };
    typedef struct node NODE;
    typedef struct  node * PNODE;
    typedef struct  node ** PPNODE;

    int Count(PNODE First)
    {
        int iCount=0;
        while(First!=NULL)
        {
            First=First->next;
            iCount++;
        }
        return iCount;
    }
    void Display(PNODE First)
    {
        while(First->next!=NULL)
        {
            printf("|%d|->",First->data);
            First=First->next;
        }
    }

    void InsertFirst(PPNODE first,int iNo)
    {   PNODE newn=NULL;
        newn=(PNODE) (malloc(sizeof(NODE)));
        newn->data=iNo;
        newn->next=NULL;
        newn->prev=NULL;//$

        if(NULL==*first)
        {
            *first=newn;
        }
        else
        {
            newn->next=(*first);
            (*first)->prev=newn;//$
            *first=newn;
        }

    }

    void InsertLast(PPNODE first, int iNo)
    {   PNODE newn=NULL;
        PNODE temp=NULL;
        newn=(PNODE) (malloc(sizeof(NODE)));
        newn->data=iNo;
        newn->next=NULL;
        newn->prev=NULL;//$


        if(*first==NULL)
        {
            *first=newn;
        }
        else
        {
            temp=*first;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
            newn->prev=temp;
            
        }


    }

    void InsertAtPos(PPNODE first,int iNo ,int Pos)
    {}

    void DeleteFirst(PPNODE first)
    {}

    void DeleteLast(PPNODE first,int iNo)
    {
        PNODE newn=NULL;
        newn=(PNODE) (malloc(sizeof(NODE)));
        newn->data=iNo;
        newn->next=NULL;
        newn->prev=NULL;//$

        if(*first==NULL)
        {
            *first=newn;
        }
        else
        {
        
        }
    }

    void DeleteAtPost(PPNODE first,int iNo,int Post)
    {}

    int main()
    {
        PNODE head=NULL;
        InsertFirst(&head,51);
        InsertFirst(&head,21);
        InsertFirst(&head,11);

        InsertLast(&head,101);
          InsertLast(&head,111);
            InsertLast(&head,121);
    
        return 0;
    }