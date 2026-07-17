#include <iostream>
using namespace std;

float Addition(float iNo,float iNo2)
{
    float Ans=iNo+iNo2;

    return Ans;

}
int main()
{
    float value1=10.5f, value2=11.2f,Ret=0.0f;
    Ret=Addition(value1,value2);

    cout<<"Addition is :"<<Ret<<"\n";


    return 0;
}