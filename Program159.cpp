#include <iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    public:
     int *Arr;
     int iSize;
    
     //Paramertized Constructor 
     ArrayX(int X)
     {  cout<<"Inside Constructor\n";
          iSize=X;               //Characteristics Initilisation
          Arr=new int[iSize];   // Resource Allocation
     }
     //Destructor
     ~ArrayX()
     {  cout<<"Inside Destructor\n";
         delete []Arr;  // Resource deallocation
     }
};

int main()
{
   // Static memory Allocation for Object
//    ArrayX aobj2(5);// Parametrized

ArrayX *aobj1=new ArrayX(5);

    
  

    return 0;
}