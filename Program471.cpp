#include <iostream>
using namespace std;

double Addition(double iNo,double iNo2)
{
    double Ans=iNo+iNo2;

    return Ans;

}
int main()
{
    double value1=10.5, value2=11.2,Ret=0.0;
    Ret=Addition(value1,value2);

    cout<<"Addition is :"<<Ret<<"\n";


    return 0;
}