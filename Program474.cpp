#include <iostream>
using namespace std;

int Maximum(int  No1,int No2)
{
    int Largest=0;
    if(No1>No2)
    {
        Largest=No1;
    }
    else
    {
        Largest=No2;
    }
    return Largest;
}

int main()
{
   cout<<"Largest Number is :"<< Maximum(21,11)<<"\n";
     

    


    return 0;
}