# include <stdio.h>

typedef unsigned int UNIT;
 // off the Bit poistion  at 23
int main()
{  UNIT iNo=0;
   UNIT iMask=0xFFBFFFFF;
   UNIT iPost=0;

   printf("ENter the Number :\n");
   scanf("%d",&iNo);



   iNo=iNo & iMask;

   printf("Updated number is :%d\n",iNo);


  


    
return 0;

}