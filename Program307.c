
#include <stdio.h>

int main()
{
  int iNo1=0, iCount=0,idigit=0;

  printf("Enter The First Number: \n");
  scanf("%d",&iNo1);

  while(iNo1 !=0)
  {
     idigit=iNo1%2;
   //   idigit=idigit & 1;
     iCount=iCount+idigit;
      
     iNo1=iNo1/2;

  }
  printf("Number of 1 in Number is %d\n",iCount);


    return 0;
}