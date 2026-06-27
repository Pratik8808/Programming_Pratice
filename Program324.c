# include <stdio.h>

typedef unsigned int UNIT;

int main()
{
    UNIT iMask=1;
    int iCnt=0;
  for(iCnt=1;iCnt<=32;iCnt++)
  {
      printf("%d\t %X\n",iCnt,iMask); //1
      iMask=iMask<<1;

  }


    
return 0;

}