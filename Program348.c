# include <stdio.h>

typedef unsigned int UNIT;
// Poistion 3 and 8\
\ toggle
int main()
{
//ox
UNIT iMask=0x84;
UNIT iNo=0;
UNIT iResult=0;

printf("Enter the Number \n");
scanf("%d",&iNo);
iResult=iNo ^iMask;

printf("Updated number %d\n",iResult);
  


    
return 0;


}