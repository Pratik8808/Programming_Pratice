/*
Algorithm
   START
        Accept first Number as No1
        Accept Sceond Number as No2
        Perform Addition of No1 and No2
        Display the result

   STOP


*/
#include  <stdio.h>
int main ()
{
    //Variable Creation with Default values-[]

    float i=0.0f,j=0.0f,k=0.0f;

    printf("Enter the First Number");
    scanf("%f",&i);
    
     printf("Enter the Second Number");
    scanf("%f",&j);

    k=i+j;
    
    printf("Addditon of two number is %f\n",k);

    return 0;


}