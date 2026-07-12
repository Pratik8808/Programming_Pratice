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
{}
int SinglyCL:: Count()
{
    return iCount;
}
void SinglyCL:: InsertFirst(int iNo)
{}
void SinglyCL:: InsertLast(int iNo)
{}
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
    
    return 0;
}