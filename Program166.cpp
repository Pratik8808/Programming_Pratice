#include <iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    private: // Due to this error
     int *Arr;
     int iSize;
    public:
     ArrayX()
     {  
          iSize=5;
          Arr=new int[iSize];
     }
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
ArrayX *aobj1=new ArrayX(); //Default Constructor 
ArrayX *aobj2=new ArrayX(5);// Paratermized Constrcutor
// Function Call


delete aobj1;
delete aobj2;

  

    return 0;
}