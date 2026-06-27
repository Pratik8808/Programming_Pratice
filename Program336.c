# include <stdio.h>

typedef unsigned int UNIT;
//Accept Number and  postiton and toggle bit // In complete completed in 340.c

//Position:4
UNIT offbit(UNIT iNo, UNIT iPos)
{
    UNIT iMask=0xFFFFFFF7;
    UNIT iResult=0;

    if(iPos<1 || iPos >32)
    {
        printf("Invalid BIT Postion \n");
    }
    iResult=iNo&iMask;

    return iResult;
}
int main()
{  UNIT iValue=0, iRet=0,iLocation=0;


   printf("ENter the Number :\n");
   scanf("%d",&iValue);

   printf("Enter the Bit Postion: \n");
   scanf("%d",&iLocation);
  
   iRet=offbit(iValue,iLocation);

   printf("Updated number is :%d\n",iRet);


  


    
return 0;

}