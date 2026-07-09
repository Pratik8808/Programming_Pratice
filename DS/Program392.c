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
    {   printf("\nNULL<=> ");
        while(First->next!=NULL)
        {
            printf("|%d|<-> ",First->data);
            First=First->next;
        }
        printf("NULL<=> \n");
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
    {
        if(*first==NULL)
        {
            return;

        }
        else if((*first)->next==NULL)
        {
            free(*first);
            *first=NULL;
        }
        else 
        { 
            *first=(*first)->next;
            free((*first)->prev);//$
            (*first)->prev=NULL;//$


        }
    }

    void DeleteLast(PPNODE first)
    {   
         if(*first==NULL)
        {
            return;

        }
        else if((*first)->next==NULL)
        {
            free(*first);
            
        }
       else
       { PNODE temp=*first;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;

            }
            free(temp->next->next);
            temp->next=NULL;

       }
    }

    void DeleteAtPost(PPNODE first,int iNo,int Post)
    {}

    int main()
    {
        PNODE head=NULL;
        int iRet=0;
        InsertFirst(&head,51);
        InsertFirst(&head,21);
        InsertFirst(&head,11);

        InsertLast(&head,101);
        InsertLast(&head,111);
        InsertLast(&head,121);
        Display(head);
        iRet=Count(head);
        printf("The Count of Nodes is %d\n",iRet);


        DeleteFirst(&head);
        Display(head);
        iRet=Count(head);
        printf("The Count of Nodes After DeleteFirst is %d\n",iRet);

        DeleteLast(&head);
        Display(head);
        iRet=Count(head);
        printf("The Count of Nodes After DeleteLast is %d\n",iRet);

    
        
    
        return 0;
    }