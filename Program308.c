
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int main()
{
  int iNo1=0;
  int iMask=4;
  int iAns=0;

  printf("Enter The First Number: \n");
  scanf("%d",&iNo1);

  iAns=iNo1 &iMask;

  if(iAns==iMask)
  {
    printf("3 bit is On\n");
  }
  else
{
    printf("3 Bit is OFF \n");
}


    return 0;
}