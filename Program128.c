#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>

bool LinearSearch(int Arr[],int iSize)
{
    int iCnt=0;
  
    for(iCnt=0;iCnt<iSize;iCnt++)
    {  if(Arr[iCnt]==11)
    {

        return true;  // Bad Programming Pratice Avoid at any cost in interview 
        
    }
    }
    return false;
}

int main()
{
    int iSize=0;
    int *Brr=NULL;
    int iCnt=0;
    bool bRet=0;
    printf("Enter the number of elements \n");
    scanf("%d",&iSize);
    Brr=(int *)malloc(iSize*sizeof(int));

   for(iCnt=0;iCnt<iSize;iCnt++)
   {
     
       printf("Enter the number at index  %d ",iCnt+1);
       scanf("%d",&Brr[iCnt]);
   }
    bRet=LinearSearch(Brr,iSize);

    if(bRet==true)
    {
        printf("Number 11 is Present");
    }
    else 
    {
        printf("11 is not Present in the Array");
    }

    free(Brr);



    return  0;

}