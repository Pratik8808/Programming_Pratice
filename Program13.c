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

    printf("Enter the number : \n");
    scanf("%d",&iValue);
    iRate= checkEvenOdd(iValue);
   if(iRate ==0)
   {
    printf("Number is even \n");
   }
   else
   {
        printf("Number is odd\n");
   }

    
}