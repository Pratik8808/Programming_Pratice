#include <iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    private: // Due to this error
     int *Arr;
     int iSize;
    public:
     ArrayX(int X)
     {  
          iSize=X;
          Arr=new int[iSize];
     }
   
     ~ArrayX()
     {  
         delete []Arr;  // Resource deallocation
     }
};

int main()
{
ArrayX *aobj1=new ArrayX(5);
// Logic(Function Call);

cout<<aobj1->iSize<<endl;//Error

aobj1->iSize=0; //Error
aobj1->Arr=NULL; //Error

delete aobj1;

  

    return 0;
}