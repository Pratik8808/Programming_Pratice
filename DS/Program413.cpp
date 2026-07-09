#include <iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{   private:

        PNODE first;
        int iCount;
    public:
        DoublyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteAtFirst();
        void DeleteAtLast();
        void DeleteAtPost(int iPos);
        
};

DoublyLL::DoublyLL()
{   cout<<"Inside Constructor\n";
    this->first=NULL;
    this->iCount=0;
}
void DoublyLL ::Display()
{
    PNODE temp=NULL;
    temp=this->first;
    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"| ->";
        temp=temp->next;
    }
     cout<<"NULL"<<endl;
}

int DoublyLL::Count()
{
    return this->iCount;
}

void DoublyLL:: InsertFirst(int iNo)
{
    PNODE newn=NULL;
    newn=new NODE;
    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        newn->next=first;
        first->prev=newn;
        first=newn;

    }
    iCount++;

}
void DoublyLL:: InsertLast(int iNo)
{
      PNODE newn=NULL;
      PNODE temp=NULL;
    newn=new NODE;
    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;

    }
    iCount++;

}
void DoublyLL::InsertAtPos(int iNo,int iPos)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    int i=0;
   
   
    if(iPos>iCount+1 ||iPos<1)
    {
        cout<<"Invaild position";
        return;
    }
    if(iPos==1)
    {
        InsertFirst(iNo);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
     newn=new NODE;
    newn->next=NULL;
    newn->prev=NULL;
    newn->data=iNo;

    temp=first;

    for(i=1;i<iPos-1;i++)
    {
        temp=temp->next;
    }

    newn->next=temp->next;
    temp->next->prev=newn;//$
    temp->next=newn;
    newn->prev=temp;//$
    // newn->next=temp->next; // Por right side che first aur suttil;
    // newn->prev=temp;
    // temp->next=newn;
    // temp->next->prev=newn;
        iCount++;
    }


}
void DoublyLL:: DeleteAtFirst()
{
    PNODE temp=NULL;
    if(first==NULL)
    {
        return;
    }
    else if((first->next)==NULL)
    {
        delete(first);
        first=NULL;
    }
    else 
    {
        temp=first;
        first=first->next;
        first->prev=NULL;
        delete(temp);
        
    
    }
    iCount--;
}
void DoublyLL:: DeleteAtLast()
{
    PNODE temp=NULL;
    if(first==NULL)
    {
        return;
    }
    else if((first->next)==NULL)
    {
        delete(first);
        first=NULL;
    }
    else 
    {
        temp=first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete(temp->next);
        temp->next->prev=NULL;
        temp->next=NULL;
    


        
    }
    iCount--;

}
void DoublyLL:: DeleteAtPost(int iPos)
{
    
    PNODE temp=NULL;
    int i=0;
   
   
    if(iPos>iCount ||iPos<1)
    {
        cout<<"Invaild position";
        return;
    }
    if(iPos==1)
    {
        DeleteAtFirst();
    }
    else if(iPos==iCount)
    {
        DeleteAtLast();
    }
    else
    {
        temp=first;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
       temp->next=temp->next->next;
        delete(temp->next->prev);
        temp->next->prev=temp;
       
        iCount--;
        
    }


}


int main()
{  
    DoublyLL dobj;
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    int iRet=0;
    iRet=dobj.Count();
    dobj.Display();
    cout<<"The Count of Node after InsertFirst is "<<iRet<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);
    dobj.InsertLast(151);
    iRet=dobj.Count();
    dobj.Display();
    cout<<"The Count of Node after InsertLast is "<<iRet<<endl;

    dobj.DeleteAtFirst();

    iRet=dobj.Count();
    dobj.Display();
    cout<<"The Count of Node after Delete at First is "<<iRet<<endl;

    dobj.DeleteAtLast();
    iRet=dobj.Count();
    dobj.Display();
    cout<<"The Count of Node after Delete at Last is "<<iRet<<endl;

    dobj.InsertAtPos(211,5);
    iRet=dobj.Count();
    dobj.Display();
    cout<<"The Count of Node after InsertAtPost at Last is "<<iRet<<endl;

    dobj.DeleteAtPost(4);
    iRet=dobj.Count();
    dobj.Display();
    cout<<"The Count of Node after DeleteAtPost at Last is "<<iRet<<endl;

   
    return 0;
}

// SinglyLL,CL
//Doubly