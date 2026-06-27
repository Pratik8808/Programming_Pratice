# include <stdio.h>

typedef unsigned int UNIT;
// Poistion 7 and 3 toggle
int main()
{

UNIT iMask=0x00000044;
UNIT iNo=0;
UNIT iResult=0;

printf("Enter the Number \n");
scanf("%d",&iNo);
iResult=iNo ^iMask;

printf("Updated number %d\n",iResult);
  


    
return 0;

}