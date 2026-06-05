#include <stdio.h>

void Display(int Arr[]) // -> internal treated  Pointer Remeber that in arithmatic pointer and functionalitiy
{
    printf(":%d\n",*Arr);
    Arr++; 
     printf(":%d\n",*Arr);

       Arr++;  
     printf(":%d\n",*Arr);
   
}
 
int main()
{
   int Brr[5]={10,20,30,40,50};

   Display(Brr);

   
    return 0;
}