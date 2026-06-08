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
   
   ArrayX aobj2(5);// Parametrized

   cout<<sizeof(aobj2)<<endl;

    
  

    return 0;
}