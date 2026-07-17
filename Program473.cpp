#include <iostream>
using namespace std;

template <class T>
T Addition(T iNo,T iNo2)
{
    T Ans=iNo+iNo2;

    return Ans;

}

int main()
{
    
     cout<<Addition(11,10)<<"\n";
    cout<<Addition(11.5f,10.2f)<<"\n";
    cout<<Addition(11.5,10.2)<<"\n";


    


    return 0;
}