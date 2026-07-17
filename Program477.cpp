
#include <iostream>
using namespace std;

float MaximumF(float  No1,float No2)
{
    float Ans=0;
    (No1>No2)?Ans=No1:Ans=No2;
    
    
    
    return Ans;
}

int main()
{
   cout<<"Largest Number is :"<< MaximumF(21.5f,11.2f)<<"\n";
     

    


    return 0;
}