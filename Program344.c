# include <stdio.h>

typedef unsigned int UNIT;
// Poistion 9 and 17\
\ toggle
int main()
{
//ox
UNIT iMask=0x00010100;
UNIT iNo=0;
UNIT iResult=0;

printf("Enter the Number \n");
scanf("%d",&iNo);
iResult=iNo ^iMask;

printf("Updated number %d\n",iResult);
  


    
return 0;


}