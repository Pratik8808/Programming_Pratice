# include <stdio.h>

typedef unsigned int UNIT;
//Accept Number and  postiton and toggle bit

UNIT ToggleBit(UNIT iNo, UNIT iPos)
{
    UNIT iMask=0x1;
    UNIT iResult=0;
    if(iPos<1 || iPos >32)
    {
        printf("Invalid BIT Postion \n");
    }
    iMask=iMask<<(iPos-1);

    iResult=iNo^iMask;

    return iResult;
}
int main()
{  UNIT iValue=0, iRet=0,iLocation=0;


   printf("ENter the Number :\n");
   scanf("%d",&iValue);

   printf("Enter the Bit Postion: \n");
   scanf("%d",&iLocation);
  
   iRet=ToggleBit(iValue,iLocation);

   printf("Updated number is :%d\n",iRet);


  


    
return 0;

}