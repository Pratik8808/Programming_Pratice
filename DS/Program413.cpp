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
    int iChoice=0;
    int iValue=0;
    int iRet=0;
    int iPosition=0;

    while(iChoice!=9)
    {
        cout<<"--------------------------\n";
        cout<<"Enter your choice : \n";
        cout<<"--------------------------\n";
        cout<<"1:Insert node at first Postion \n";
        cout<<"2:Insert node at last Postion \n";
        cout<<"3:Insert node at Given Postion \n";
        cout<<"4:Delete node at first Postion : \n ";
        cout<<"5:Delete node at Last Postion  :\n";
        cout<<"6:Delete node at Given Postion : \n ";
        cout<<"7:Display the Elements  :\n";
        cout<<"8:Count the Number of Elements : \n";
        cout<<"9:Terminate the Application : \n";
        cout<<"--------------------------\n";

        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the Value :";
                cin>>iValue;
                dobj.InsertFirst(iValue);
                break;
             case 2:
                cout<<"Enter the Value :";
                cin>>iValue;
                dobj.InsertLast(iValue);
                break;
             case 3:
                cout<<"Enter the Value \n:";
                cin>>iValue;
                cout<<"Enter the Position\n";
                cin>>iPosition;
                dobj.InsertAtPos(iValue,iPosition);
                break;
             case 4:
                
                dobj.DeleteAtLast();
                break;

            case 5:
               
                dobj.DeleteAtLast();
                break;
            case 6:
                 cout<<"Enter the Value \n:";
                cin>>iValue;
                dobj.DeleteAtPost(iValue);
                break;

            case 7:
                dobj.Display();
                break;
            case 8:
                iRet=dobj.Count();
                cout<<"Number of Elements are "<<iRet;
            case 9:
              cout<<"Thank your for visiting\n";

            default:
                cout<<"Inavild Response";
                break;
        }


    }
   
    return 0;
}

// SinglyLL,CL
//Doubly