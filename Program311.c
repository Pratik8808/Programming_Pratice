// Typedef is for new type 
#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    // M  IMP unsigined  it  Pride
  UINT iNo1=0;
  UINT  iMask=4948;
  UINT  iAns=0;

  printf("Enter The First Number: \n");
  scanf("%d",&iNo1);

  iAns=iNo1 &iMask;

  if(iAns==iMask)
  {
    printf("7 bit is On\n");
  }
  else
{
    printf("7 Bit is OFF \n");
}


    return 0;
}