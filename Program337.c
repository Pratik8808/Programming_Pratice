# include <stdio.h>

typedef unsigned int UNIT;
// Off the bit at 4
int main()
{  UNIT iNo=0;
   UNIT iMask=0xFFFFFF7;
   UNIT iPost=0;

   printf("ENter the Number :\n");
   scanf("%d",&iNo);



   iNo=iNo & iMask;

   printf("Updated number is :%d\n",iNo);


  


    
return 0;

}