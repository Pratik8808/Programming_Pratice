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

     void Accept()
     {
        cout<<"Enter the Elements : \n";
        int iCnt=0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
     }

      void Dispay()
     {
        cout<<"Elemets of the array are : \n";
        int iCnt=0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
           cout<<Arr[iCnt]<<endl;
        }
     }
};

int main()
{
    ArrayX *aobj=NULL;
    int iLength=0;
    cout<<"Enter the number of Elements : \n";
    cin>>iLength;

    aobj=new ArrayX(iLength);

    aobj->Accept();
    aobj->Dispay();
    delete aobj;

  

    return 0;
}