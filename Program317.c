// Typedef is for new type 
#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    // M  IMP unsigined  it  Pride
  UINT iNo1=0;
  UINT iMask=0x1;
  UINT iAns=0;
  UINT iPos=0;


  printf("Enter The First Number: \n");
  scanf("%d",&iNo1);

  printf("Enter the Position :\n");
  scanf("%d",&iPos);

  iMask=iMask<<(iPos-1);
  iAns=iNo1 &iMask;

  if(iAns==iMask)
  {
    printf("Bit is On\n");
  }
  else
{
    printf("Bit is OFF \n");
}


    return 0;
}