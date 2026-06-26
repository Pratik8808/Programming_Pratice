// Typedef is for new type 
#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    // M  IMP unsigined  it  Pride
  UINT iNo1=0;
  UINT  iMask=0x0001000;
  UINT  iAns=0;

  printf("Enter The First Number: \n");
  scanf("%d",&iNo1);

  iAns=iNo1 &iMask;

  if(iAns==iMask)
  {
    printf("17 bit is On\n");
  }
  else
{
    printf("17 Bit is OFF \n");
}


    return 0;
}

// Enter The First Number: 
// 76425
// 17 Bit is OFF 
// pratik-narule@pratik-narule-Thin-15-B13UDX:~/Logic building$ ./myexe
// Enter The First Number: 
// 76425
// 17 Bit is OFF 
// pratik-narule@pratik-narule-Thin-15-B13UDX:~/Logic building$ ./myexe
// Enter The First Number: 
// 141961
// 17 Bit is 