#include <iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;

#pragma pack(1) // Applicable only one time
class DoublyCL
{   private:
    
    PNODE first;
    PNODE last;
    int iCount;
    public:
    DoublyCL();
    void Display();
    int Count();
    
    void Insertfirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPost(int iNo,int iPost);

    void DeleteFirst();
    void DeleteLast();
    void DeleteLast(int iPos);

};

DoublyCL::DoublyCL()
{
    cout<<"Inside Constructor"<<endl;
    first=NULL;
    last=NULL;
    iCount=0;
}

void DoublyCL:: Display()
{}
int DoublyCL:: Count()
{
    return 0;
}

void DoublyCL:: Insertfirst(int iNo)
{}
void DoublyCL:: InsertLast(int iNo)
{}
void DoublyCL:: InsertAtPost(int iNo,int iPost)
{}

void DoublyCL:: DeleteFirst()
{}
void DoublyCL:: DeleteLast()
{}
void DoublyCL:: DeleteLast(int iPos)
{}

int main()
{
    DoublyCL dobj;

    cout<<sizeof(dobj)<<endl;
    return 0;
}