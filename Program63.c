//Input :5
//Output :-5 -3 -1


#include  <stdio.h>
 void display(int iNo)
   {
    int iCnt=0;

    for(iCnt =-iNo;iCnt<=0;iCnt+=2)// changes is here
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