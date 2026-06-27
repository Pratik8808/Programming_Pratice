# include <stdio.h>

typedef unsigned int UNIT;
 // off the Bit poistion 
int main()
{  UNIT iNo=0;
   UNIT iMask=0xFFFEFFF;
   UNIT iPost=0;

   printf("ENter the Number :\n");
   scanf("%d",&iNo);



   iNo=iNo & iMask;

   printf("Updated number is :%d\n",iNo);


  


    
return 0;

}