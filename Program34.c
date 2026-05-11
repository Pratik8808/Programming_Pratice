#include <stdio.h>

//User Defined Marco

void display (int iNo)
{   //Filter
    if(iNo <0)
    {
        printf("Invalid Input \n");
    }
    int iCnt =0;
for (iCnt=iNo;iCnt>=0;iCnt--)
  {
     
      printf("%d \n",iCnt);
  }
}


int main ()
{
  
  int iValue=0;

printf("Enter the frequecy :");
scanf("%d",&iValue);


display(iValue);
  
   


   return 0;
    
}