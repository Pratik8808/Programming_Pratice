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

   if(this->first==NULL)
   {
     this->first=newn;
   }
   else 
   {
    newn->next=first;
    first=newn;

   }
   iCount++;
}
int Stack:: Pop()
{
     return 0;
}
int Stack:: Peep()
{
    return 0;
}
void Stack:: Display()
{}
int Stack:: Count()
{
    return iCount;
}

int main()
{
    Stack Sobj;
    int iRet=0;
    Sobj.Push(11);
    Sobj.Push(21);
    Sobj.Push(51);
    Sobj.Push(101);
    // Sobj.Push(111);
    iRet=Sobj.Count();

    cout<<"Element of Stack is "<< iRet<<endl;




    return 0;
}