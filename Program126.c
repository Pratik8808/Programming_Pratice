#include <stdio.h>
#include <stdlib.h>

int Countodd(int Arr[],int iSize)
{
    int iCnt=0;
    int iRet=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {  if(Arr[iCnt]%2!=0)
    {

        iRet++;
    }
    }
    return iRet;

}

int main()
{
    int iSize=0;
    int *Brr=NULL;
    int iCnt=0;
    int iRet=0;
    printf("Enter the number of elements \n");
    scanf("%d",&iSize);
    Brr=(int *)malloc(iSize*sizeof(int));

   for(iCnt=0;iCnt<iSize;iCnt++)
   {
     
       printf("Enter the number at index  %d ",iCnt+1);
       scanf("%d",&Brr[iCnt]);
   }
    iRet=Countodd(Brr,iSize);

    printf("Cout of odd is : %d",iRet);

    free(Brr);



    return  0;

}