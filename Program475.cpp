#include <iostream>
using namespace std;

float MaximumF(float  No1,float No2)
{
    float Largest=0;
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
   cout<<"Largest Number is :"<< MaximumF(21.5f,11.2f)<<"\n";
     

    


    return 0;
}