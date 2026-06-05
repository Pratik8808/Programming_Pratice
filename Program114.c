#include <stdio.h>

void Display(int Arr[],int iSize) // -> internal treated  Pointer Remeber that in arithmatic pointer and functionalitiy
{
   int iCnt=0;
               
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
     printf("%d\n",Arr[iCnt]);
   }
   
   
   
}
 
int main()
{
   int Brr[4]={10,20,30,40};

   Display(Brr,4);

   
    return 0;
}