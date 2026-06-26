
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int main()
{
  unsigned int iNo1=0;
  unsigned int iMask=4;
  unsigned int iAns=0;

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