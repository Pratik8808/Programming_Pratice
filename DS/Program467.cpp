
//Stack

#include <iostream>
using namespace std;
#pragma pack(1)
struct node 
{
   int data;
   struct node * next;
};

class Stack
{
    private:
    struct node * first;
    int iCount;

 public:
     Stack();
     void Push(int iNo); // Insert First
     int Pop();    //DeleteFirst
     int Peep(); //  DeleteFirst//
     void Display();
     int Count();
};

Stack::Stack()
{
     this->first=NULL;
     this->iCount=0;

}

void Stack:: Push(int iNo)
{

   struct node * newn=NULL;
   newn=new struct node();
   newn->data=iNo;
   newn->next=NULL;

   newn->next=first;
   first=newn;

   iCount++;
}
int Stack:: Pop()
{   int iValue=0;
    struct node * temp=NULL;
    if(first==NULL)
    {
        cout<<"Stack Is Empty"<<"\n";
        return -1;
    }
    else 
    { 
       iValue=first->data;
       temp=first;
       first=first->next;
       delete(temp);

       iCount--;
       return iValue;

    }
   
}
int Stack:: Peep()
{
    int iValue=0;
    
    if(first==NULL)
    {
        cout<<"Stack Is Empty"<<"\n";
        return -1;
    }
    else 
    { 
       iValue=first->data;
    
       return iValue;

    }
}
void Stack:: Display()
{
    struct node *temp=first;
    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|\n ";
        temp=temp->next;
    }
}
int Stack:: Count()
{
    return iCount;
}

int main()
{
    Stack Sobj;
    int iRet=0;
    int iValue=0;
    Sobj.Push(11);
    Sobj.Push(21);
    Sobj.Push(51);
    Sobj.Push(101);
    // Sobj.Push(111);
    iRet=Sobj.Count();
    Sobj.Display();
    cout<<"Element of Stack is "<< iRet<<endl;

    iRet=Sobj.Pop();

    cout<<"Pop Element is :"<<iRet<<"\n";

    iRet=Sobj.Count();
    Sobj.Display();
    cout<<"Element of Stack is "<< iRet<<endl;

    iRet= Sobj.Peep();
    cout<<"Element on top of iStack :"<<iRet<<endl;

    iRet=Sobj.Count();
    Sobj.Display();
    cout<<"Element of Stack is "<< iRet<<endl;

    









    return 0;
}