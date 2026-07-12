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
        newn->next=first->next;
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
{}
void SinglyCL:: DeleteAtFirst()
{}
void SinglyCL:: DeleteAtLast()
{}
void SinglyCL:: DeletAtPos(int iPos)
{}



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
    



    
    return 0;
}