#include <stdio.h>
typedef unsigned int UNIT;
UNIT ToggleBits(UNIT iNo, UNIT Pos1,UNIT Pos2)
{   
    UNIT iMask1=0x1;
    UNIT iMask2=0x1,iMask=0;
    UNIT iResult=0;

    iMask1=iMask1<<(Pos1-1);
    iMask2=iMask2<<(Pos2-1);

    iMask=iMask1|iMask2;

    iResult=iNo ^ iMask;

    return iResult;



}
int main()
{
    UNIT ivalue=0,iLocation1=0,iLocation2=0,iRet=0;
     
    printf("Enter the Number \n");
    scanf("%d",&ivalue);

    printf("Enter the First bit Postion 1\n");
    scanf("%d",&iLocation1);

    printf("Enter the Second bit Location\n");
    scanf("%d",&iLocation2);

    iRet=ToggleBits(ivalue, iLocation1,iLocation2);

    printf("Updated Number is : %d\n",iRet);

    return 0;
}