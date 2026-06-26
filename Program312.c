// Typedef is for new type 
#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    // M  IMP unsigined  it  Pride
  UINT iNo1=0;
  UINT  iMask=4096;
  UINT  iAns=0;

  printf("Enter The First Number: \n");
  scanf("%d",&iNo1);

  iAns=iNo1 &iMask;

  if(iAns==iMask)
  {
    printf("13 bit is On\n");
  }
  else
{
    printf("13 Bit is OFF \n");
}


    return 0;
}