#include <stdio.h>

void Display(int iPtr[]) // -> internal treated  Pointer Remeber that in arithmatic pointer and functionalitiy
{
    printf(":%d\n",*iPtr);
    iPtr++;  // 4 Bytes increase  pointer Arithmatic
     printf(":%d\n",*iPtr);

       iPtr++;  // 4 Bytes increase  pointer Arithmatic
     printf(":%d\n",*iPtr);
   
}
 
int main()
{
   int Arr[5]={10,20,30,40,50};
   
   printf("Base Address of Arr :%d\n",Arr);

   Display(Arr);

   
    return 0;
}