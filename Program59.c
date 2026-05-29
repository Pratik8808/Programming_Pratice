//Input :5
//Output :5 4 3 2 1


#include  <stdio.h>
 void display(int iNo)
   {
    int iCnt=0;

    for(iCnt =iNo;iCnt>=1;iCnt--)// changes is here
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
   
   }
int main()
{
  
int iValue=0;
printf("Enter number ");

scanf("%d",&iValue);

display(iValue);

    return 0;

};