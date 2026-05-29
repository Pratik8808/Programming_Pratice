//Input :5
//Output :-5 -4 -3 -2 -1 0 1 2 3 4 5
//Time complexity 2n


#include  <stdio.h>
 void display(int iNo)
   {
    int iCnt=0;

    for(iCnt =-iNo;iCnt<=iNo;iCnt++)// changes is here
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