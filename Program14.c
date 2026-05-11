#include <stdio.h>

int checkEvenOdd( int iNo)
{
    int iRemainder=0;
   iRemainder=iNo%2;

   return iRemainder;
}
int main ()
{
    int iValue=0;
    int iRate=0;

    printf("Enter the number to check whether it is even or Odd : ");
    scanf("%d",&iValue);
    iRate= checkEvenOdd(iValue);
   if(iRate ==0)
   {
    printf("%d is even \n",iValue);
   }
   else
   {
        printf("%d is odd\n",iValue);
   }

    
}