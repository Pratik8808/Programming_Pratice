#include <iostream>
using namespace std;


#pragma pack(1)
class ArrayX
{
    private: // Due to this error
     int *Arr;
     int iSize;
    public:
   // Parameterised Constructor with Default Arugment
     ArrayX(int X = 5)
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
ArrayX *aobj1=new ArrayX();  //Paratermized Constrcutor
ArrayX *aobj2=new ArrayX(15);// Paratermized Constrcutor
// Function Call


delete aobj1;
delete aobj2;

  

    return 0;
}