#include <stdio.h>
#include <stdlib.h>

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
printf("Enter the number");
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

  //Step 4 -> Use the Memory(logic)

  //Step 5:Dellocate the memory
  free(Brr);
    return 0;
}