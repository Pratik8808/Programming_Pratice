#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iSum=0;
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum+=Arr[iCnt];
    }
   return iSum;
}

int main ()
{
    int *Brr=NULL;
    int iLength=0;

//Step 1  -> Accept the Number of Elements
 printf("Enter Number of element :\n");
 scanf("%d",&iLength);

//Step 2-> :Allocate the memory
Brr=(int *)malloc(iLength *sizeof(int));
//Step 3 -> Accept the value from user ;

int iCnt=0;
int iRet=0;
printf("Enter the number\n");
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

  //Step 4 -> Use the Memory(logic)
iRet=Summation(Brr,iLength);
printf("The Summation of the Array is %d \n:",iRet);


  //Step 5:Dellocate the memory
  free(Brr);
    return 0;
}