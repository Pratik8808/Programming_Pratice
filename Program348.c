# include <stdio.h>

typedef unsigned int UNIT;
// Poistion 3 and 8\
\ toggle
int main()
{
//ox
UNIT iMask1=0x00000004;
UNIT iMask2=0x00000080;
UNIT iMask=0;
UNIT iNo=0;
UNIT iResult=0;

printf("Enter the Number \n");
scanf("%d",&iNo);
iMask=iMask1 | iMask2;
iResult=iNo ^iMask;



printf("Updated number %d\n",iResult);
  


    
return 0;


}