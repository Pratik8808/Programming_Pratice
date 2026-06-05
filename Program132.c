#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>


//O(N) Time complexity O(N)
bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    int iCount=0;
  
    for(iCnt=0;iCnt<iSize;iCnt++)
    {  if(Arr[iCnt]==iNo)
    {

        iCount++;
        break;
      
        
    }

   
    

}
 if(iCount==0)
    {
        return false;
    }
    else 
    {
        return true;

    }
}

int main()
{
    int iSize=0;
    int *Brr=NULL;
    int iCnt=0;
    bool bRet=false;
    int iValue=0;
    printf("Enter the number of elements \n");
    scanf("%d",&iSize);
    Brr=(int *)malloc(iSize*sizeof(int));

   for(iCnt=0;iCnt<iSize;iCnt++)
   {
     
       printf("Enter the number at index  %d ",iCnt+1);
       scanf("%d",&Brr[iCnt]);
   }

     printf("Enter the element you wanted to serach \n");
     scanf("%d",&iValue);
    bRet=LinearSearch(Brr,iSize,iValue);

    if(bRet==true)
    {
        printf("Number %d is Present \n",iValue);
    }
    else
    {
        printf("Number is not Present in the Array");
    }

    free(Brr);



    return  0;

}