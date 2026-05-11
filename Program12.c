#include <stdio.h>

void checkEvenOdd( int iNo)
{
    int iRemainder=0;
   iRemainder=iNo%2;
   if(iRemainder==0)
   {
    printf("Number is Even \n");

   }
   else
   { 
        printf("Number is odd Number \n");

   }

}
int main ()
{
    int iValue=0;
    // int iRemainder=0;

    printf("Enter the number : \n");
    scanf("%d\n",&iValue);
    checkEvenOdd(iValue);

    
}