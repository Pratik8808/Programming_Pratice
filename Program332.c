# include <stdio.h>

typedef unsigned int UNIT;
//Postion 11
int main()
{  UNIT iNo=0;
   UNIT iMask=0;

   printf("ENter the Number :\n");
   scanf("%d",&iNo);
   iMask=0x400;

   iNo=iNo^iMask;

   printf("Updated number is :%d\n",iNo);


  


    
return 0;

}