#include <stdio.h>
#include <stdlib.h>

//O(N) Time complexity O(N)
int Minimum(int Arr[],int iSize)
{
    int iCnt=0;
  int iMin=0;

  iMin=Arr[0];
  
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }

   
  return iMin;


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
    iRet=Minimum(Brr,iSize);

   printf("The Minimum Value is %d",iRet);
    free(Brr);



    return  0;

}