#include <iostream>
using namespace std;

double AdditionD(double iNo,double iNo2)
{
    double Ans=iNo+iNo2;

    return Ans;

}
float AdditionF(float iNo,float iNo2)
{
    float Ans=iNo+iNo2;

    return Ans;

}

int AdditionI(int iNo,int iNo2)
{
    int Ans=iNo+iNo2;

    return Ans;

}
int main()
{
    cout<<AdditionI(11,10)<<"\n";
    cout<<AdditionF(11.5f,10.2f)<<"\n";
    cout<<AdditionD(11.5,10.2)<<"\n";

    


    return 0;
}