#include <iostream>
using namespace std;

class ArrayX
{
    public:
     int *Arr;
     int iSize;
};

int main()
{
   ArrayX aobj;

   cout<<sizeof(aobj)<<endl; // 16 Bytes ; 8  Bytes pointer + 4 bytes int + padding 4 Bytes

    


    return 0;
}