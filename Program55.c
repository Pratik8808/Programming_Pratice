//Input :8
//Output :1 3 5 7


#include  <stdio.h>
 void display(int iNo)
   {
    int iCnt=0;

    for(iCnt =1;iCnt<iNo;iCnt=iCnt+2)
    {   
        printf("%d",iCnt);
    }
    printf("\n");
    
   }
int main()
{
  
int iValue=0;
printf("Enter number ");

scanf("%d\n",&iValue);

display(iValue);

    return 0;

};