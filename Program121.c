#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[],int iSize)
{
    printf("Element of the Array are:\n");
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

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
printf("Enter the number\n");
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

  //Step 4 -> Use the Memory(logic)
  Display(Brr,iLength);


  //Step 5:Dellocate the memory
  free(Brr);
    return 0;
}