#include <stdio.h>

//User Defined Marco

void display (int iNo)
{   //Updater
    if(iNo <0)
    {
        iNo=-iNo;
    }
    int iCnt =0;
for (iCnt=1;iCnt<=iNo;iCnt++)
  {
     
      printf("Jay Ganesh ....\n");
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