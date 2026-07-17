

//Queue

#include <iostream>
using namespace std;
#pragma pack(1)
struct node 
{
   int data;
   struct node * next;
};

class Queue
{
    private:
    struct node * first;
    int iCount;

 public:
     Queue();
     void Enqueue(int iNo); // Insert Last
     int Dequeue();    // Delete first
     int Peep(); // 
     void Display();
     int Count();
};

Queue::Queue()
{
     this->first=NULL;
     this->iCount=0;

}

void Queue:: Enqueue(int iNo)
{
    struct node *temp=NULL;
   struct node * newn=NULL;
   newn=new struct node();
   newn->data=iNo;
   newn->next=NULL;

    if(first== NULL)
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
    }
   iCount++;
}
int Queue:: Dequeue()
{   int iValue=0;
    struct node * temp=NULL;
    if(first==NULL)
    {
        cout<<"Queue Is Empty"<<"\n";
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

void Queue:: Display()
{
    struct node *temp=first;
    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|\n ";
        temp=temp->next;
    }
}
int Queue:: Count()
{
    return iCount;
}

int main()
{
    Queue Sobj;
    int iRet=0;
    int iValue=0;
    Sobj.Enqueue(11);
    Sobj.Enqueue(21);
    Sobj.Enqueue(51);
    Sobj.Enqueue(101);
    // Sobj.Push(111);
    iRet=Sobj.Count();
    Sobj.Display();
    cout<<"Element of Queue are "<< iRet<<endl;

    iRet=Sobj.Dequeue();

    cout<<"Removed  Element is :"<<iRet<<"\n";

    iRet=Sobj.Count();
    Sobj.Display();
    cout<<"Element of Queue is "<< iRet<<endl;



    return 0;
}