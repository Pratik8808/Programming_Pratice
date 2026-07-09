//409 che copy keli ahe 410 deleteatlast as issue;
#include <iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{   private:

        PNODE first;
        int iCount;
    public:
        SinglyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteAtFirst();
        void DeleteAtLast();
        void DeleteAtPost(int iPos);
        
};

SinglyLL::SinglyLL()
{   
    this->first=NULL;
    this->iCount=0;
}
void SinglyLL ::Display()
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

int SinglyLL::Count()
{
    return this->iCount;
}

void SinglyLL:: InsertFirst(int iNo)
{
    PNODE newn=NULL;
    newn=new NODE;
    newn->data=iNo;
    newn->next=NULL;

    if(this->first==NULL)
    {
        this->first=newn;

    }
    else
    {
        newn->next=this->first;
        this->first=newn;

    }
    iCount++; // IMP
}
void SinglyLL:: InsertLast(int iNo)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    newn=new NODE;
    newn->data=iNo;
    newn->next=NULL;

    if(this->first==NULL)
    {
        this->first=newn;

    }
    else
    {   temp=this->first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        
    }
    iCount++; // IMP
}
void SinglyLL::InsertAtPos(int iNo,int iPos)
{
    int i=0;
    PNODE temp=NULL;
    PNODE  newn=NULL;
   

    if((iPos<1)||(iPos>iCount+1))
    {
        cout<<"Invaild postion";
        return;
    }
    if(iPos==1)
    {
       this->InsertFirst(iNo);
    }
    else if(iPos==iCount+1)
    {
        this->InsertLast(iNo);
        
    }
    else
    {
         newn=new NODE;
         newn->data=iNo;
         newn->next=NULL;

        temp=this->first;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        this->iCount++;
        newn->next=temp->next;
        temp->next=newn;
        
    }

}
void SinglyLL:: DeleteAtFirst()
{   PNODE temp=NULL;
    if(this->first==NULL)
    {
        return;
    }
    else if(this->first->next==NULL)
    {
        delete(this->first);
        this->first=NULL;
    }
    else 
    {
        temp=this->first;
        first=this->first->next->next;
        delete(temp);

    }
    this->iCount--;
}
void SinglyLL:: DeleteAtLast()
{
    PNODE temp=NULL;
  if(this->first==NULL)
    {
        return;
    }
    else if(this->first->next==NULL)
    {
        delete(this->first);
        this->first=NULL;
    }
    else 
    {
        temp=first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }

    }
    this->iCount--;

}
void SinglyLL:: DeleteAtPost(int iPos)
{

    int i=0;
    PNODE temp=NULL;
    PNODE  Target=NULL;

    if((iPos<1)||(iPos>iCount))
    {
        cout<<"Invaild postion";
        return;
    }
    if(iPos==1)
    {
       this->DeleteAtFirst();
    }
    else if(iPos==iCount+1)
    {
        this->DeleteAtLast();
        
    }
    else
    {
        temp=this->first;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        this->iCount--;
        Target=temp->next;

        
    }

}


int main()
{  int iRet=0;
    SinglyLL sobj;
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Count after InsertFirst :"<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Count after InsertLast :"<<iRet<<endl;

    sobj.DeleteAtFirst();
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Count after DeleteFirst :"<<iRet<<endl;

    sobj.InsertAtPos(105,4);
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Count after InsertAtPost :"<<iRet<<endl;




   
    return 0;
}

// SinglyLL,CL
//Doubly