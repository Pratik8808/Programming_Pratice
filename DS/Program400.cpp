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
typedef struct node ** PPNODE;

class SinglyLL
{   public:

        PNODE first;
        int iCount;

        SinglyLL()
        {   cout<<"Inside Constructor\n";
            this->first=NULL;
            this->iCount=0;

        }
  
};

int main()
{  
    SinglyLL sobj;
    
    sobj.first=NULL;//DrawBack 1:15hr
    sobj.iCount=15;
    
    return 0;
}

// SinglyLL,CL
//Doubly