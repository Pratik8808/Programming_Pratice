#include <stdio.h>
#include <stdbool.h>

bool checkEvenOdd( int iNo)
{
    
    return  (iNo % 2)==0? true:false;
}
int main ()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number to check whether it is even or Odd : ");
    scanf("%d",&iValue);
    bRet= checkEvenOdd(iValue);
   if(bRet)
   {
    printf("%d is even \n",iValue);
   }
   else
   {
        printf("%d is odd\n",iValue);
   }


    
}