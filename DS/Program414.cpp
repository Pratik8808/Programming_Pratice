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
        
        Target=temp->next;
        //temp=temp->Next->next
        temp->next=Target->next;
        delete(Target);
        Target->next=NULL;
        
        this->iCount--;
        
    }

}


int main()
{  SinglyLL sobj;

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
        cout<<"4:Delete node at first Postion \n :";
        cout<<"5:Delete node at Last Postion \n :";
        cout<<"6:Delete node at Given Postion \n :";
        cout<<"7:Display the Elements \n :";
        cout<<"8:Count the Number of Elements\n";
        cout<<"9:Terminate the Application\n";
        cout<<"--------------------------\n";

        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the Value :";
                cin>>iValue;
                sobj.InsertFirst(iValue);
                break;
             case 2:
                cout<<"Enter the Value :";
                cin>>iValue;
                sobj.InsertLast(iValue);
                break;
             case 3:
                cout<<"Enter the Value \n:";
                cin>>iValue;
                cout<<"Enter the Position\n";
                cin>>iPosition;
                sobj.InsertAtPos(iValue,iPosition);
                break;
             case 4:
                
                sobj.DeleteAtLast();
                break;

            case 5:
               
                sobj.DeleteAtLast();
                break;
            case 6:
                 cout<<"Enter the Value \n:";
                cin>>iValue;
                sobj.DeleteAtPost(iValue);
                break;

            case 7:
                sobj.Display();
                break;
            case 8:
                iRet=sobj.Count();
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