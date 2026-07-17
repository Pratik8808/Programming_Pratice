#include <iostream>
using namespace std;

int Addition(int iNo,int iNo2)
{
    int Ans=iNo+iNo2;

    return Ans;

}
int main()
{
    int value1=10, value2=11,Ret=0;
    Ret=Addition(value1,value2);

    cout<<"Addition is :"<<Ret<<"\n";


    return 0;
}