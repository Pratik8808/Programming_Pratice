# include <stdio.h>

typedef unsigned int UNIT;
//Accept Number and  postiton and toggle bit
int main()
{  UNIT iNo=0;
   UNIT iMask=0x1;
   UNIT iPost=0;

   printf("ENter the Number :\n");
   scanf("%d",&iNo);

   printf("Enter the Bit Postion: \n");
   scanf("%d",&iPost);
   iMask=iMask<<(iPost-1);

   iNo=iNo^iMask;

   printf("Updated number is :%d\n",iNo);


  


    
return 0;

}