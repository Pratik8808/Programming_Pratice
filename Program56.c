//Input :8
//Output :1 3 5 7


#include  <stdio.h>
 void display(int iNo)
   {
    int iCnt=0;

    for(iCnt =1;iCnt<iNo;iCnt=iCnt+=1)
    {
        printf("%d\t \n",iCnt);
    }
   
   }
int main()
{
  
int iValue=0;
printf("Enter number ");

scanf("%d",&iValue);

display(iValue);

    return 0;

};