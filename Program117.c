#include <stdio.h>

int Summation(int Arr[],int iSize) // -> internal treated  Pointer Remeber that in arithmatic pointer and functionalitiy
{
   int iCnt=0;
  int iSum=0;
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
    
     iSum=iSum+Arr[iCnt];
   }
   
   return iSum;
   
}
 
int main()
{
    int iLength=4;
      int iCnt=0;
   int iRet=0;

   int Brr[iLength];
 

   printf("Enter the Value \n");
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      scanf("%d",&Brr[iCnt]);
      
   }
   
iRet=Summation(Brr,iLength);

printf("The Summation of looop is :%d\n",iRet);


   
    return 0;
}