//Input :5
//Output :1  2  3  4  5


#include  <stdio.h>
 void display(int iNo)
   {
    int iCnt=0;
    for(iCnt =0;iCnt<iNo;iCnt)
    {
        printf(" %d \t",iNo);
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