#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>


//O(N) Time complexity O(N)
int Maximum(int Arr[],int iSize)
{
    int iCnt=0;
  int iMax=0;

  iMax=Arr[0];
  
    for(iCnt=0;iCnt<iSize;iCnt++)
    {  
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }

   
  return iMax;


}

int main()
{
    int iSize=0;
    int *Brr=NULL;
    int iCnt=0;
    int iRet=0;
    int iValue=0;
    printf("Enter the number of elements \n");
    scanf("%d",&iSize);
    Brr=(int *)malloc(iSize*sizeof(int));

   for(iCnt=0;iCnt<iSize;iCnt++)
   {
     
       printf("Enter the number at index  %d ",iCnt+1);
       scanf("%d",&Brr[iCnt]);
   }
\
    iRet=Maximum(Brr,iSize);

   printf("The maximum Value is %d",iRet);
    free(Brr);



    return  0;

}