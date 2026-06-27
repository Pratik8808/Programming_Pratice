# include <stdio.h>

typedef unsigned int UNIT;
// Poistion 12 and 23\
\ toggle
int main()
{
//ox
UNIT iMask=0x00400800;
UNIT iNo=0;
UNIT iResult=0;

printf("Enter the Number \n");
scanf("%d",&iNo);
iResult=iNo ^iMask;

printf("Updated number %d\n",iResult);
  


    
return 0;


}