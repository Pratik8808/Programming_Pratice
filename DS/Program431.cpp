#include <iostream>
using namespace std;
#pragma pack(1)

struct node
{
    int data;
    struct node * next;
  
};
typedef struct node NODE;
typedef struct node *PNODE;

class SinglyCL
{
     private:
        PNODE first;
        PNODE last;
        int iCount;
    public:
        SinglyCL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPost(int iNo,int iPos);
        void DeleteAtFirst();
        void DeleteAtLast();
        void DeletAtPos(int iPos);

        


        
};


SinglyCL::SinglyCL()
{ cout<<"Inside The Constructor"<<endl;
    this->first=NULL;
    this->last=NULL;
    this->iCount=0;
}
void SinglyCL:: Display()
{
    PNODE temp=NULL;
    if(first==NULL && last==NULL)
    {
        return ;
    }
    temp=first;
    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
        
    } while (last->next !=temp);
    cout<<"\n";
    
}
int SinglyCL:: Count()
{
    return iCount;
}
void SinglyCL:: InsertFirst(int iNo)
{
    PNODE newn=NULL;
    newn=new NODE;
    newn->data=iNo;
    newn->next=NULL;

    if(first==NULL && last==NULL)
    {
        first=newn;
        last=newn;
    }
    else
    {
        newn->next=first;
        first=newn;
      

    }
      last->next=first;
    iCount++;
}
void SinglyCL:: InsertLast(int iNo)
{
    PNODE newn=NULL;
    newn=new NODE;
    newn->data=iNo;
    newn->next=NULL;

    if(first==NULL && last==NULL)
    {
        first=newn;
        last=newn;
    }
    else
    {
        last->next=newn;
        last=newn;
        last->next=first;
       

    }
    iCount++;
}
void SinglyCL:: InsertAtPost(int iNo,int iPos)
{
    PNODE newn=NULL;
    newn=new NODE;
    newn->next=NULL;
    newn->data=iNo;
    int i=0;
    PNODE temp=NULL;

    if(iPos<1||iPos>iCount+1)
    {
        cout<<"Invaild Position \n";
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
        temp=first;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;

        }
        newn->next=temp->next;
        temp->next=newn;
        iCount++;
    }
   

}
void SinglyCL:: DeleteAtFirst()
{
    if(first==NULL)
    {
        return;
    }
    else if(first->next==NULL && last==NULL)
    {
         delete(first);
    }
    else 
    {
        first=first->next;
        delete(last->next);
        last->next=first;
    }
    iCount--;
}
void SinglyCL:: DeleteAtLast()
{
    PNODE temp=NULL;
    temp=first;

    while(temp->next!=last)
    {
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=first;
    last=temp;
    iCount--;
}
void SinglyCL:: DeletAtPos(int iPos)
{  int i=0;
    PNODE Target=NULL;
    PNODE temp=NULL;
    if(iPos<1||iPos>iCount)
    {
        cout<<"Invaild Position";
        return;

    }
    if(iPos==1)
    {
        DeleteAtLast();
    }
    else if(iPos ==iCount)
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
        Target=temp->next;
        temp->next=Target->next;
        delete(Target);
        iCount--;
    }
}



int main()
{
    SinglyCL sobj;
    int iRet=0;
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet=sobj.Count();

    cout<<"Number of Node are "<<iRet<<endl;

    sobj.InsertAtPost(105,4);

    sobj.Display();
    iRet=sobj.Count();

    cout<<"Number of Node are "<<iRet<<endl;
    
    sobj.DeleteAtFirst();

      sobj.Display();
    iRet=sobj.Count();

    cout<<"Number of Node are "<<iRet<<endl;

    sobj.DeleteAtLast();

    sobj.Display();
    iRet=sobj.Count();

    cout<<"Number of Node are "<<iRet<<endl;

    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();

    sobj.DeletAtPos(3);

    sobj.Display();
    iRet=sobj.Count();

    cout<<"Number of Node are "<<iRet<<endl;




    
    return 0;
}