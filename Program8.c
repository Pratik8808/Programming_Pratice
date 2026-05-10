
# include  <stdio.h>


float  AddTwoNumbers(float fNo1,float fNo2)
{      
    float fAns=fNo1+fNo2;
    return fAns;
}

int main ()
{
    

   float fValue1=0.0f;                                           //To store first Input
   float fValue2=0.0f;                                           // To store second Output
   float fResult=0.0f;                                           // To store the resuult

    printf("Enter the First Number : ");
    scanf("%f",&fValue1);
    
     printf("Enter the Second Number : ");
    scanf("%f",&fValue2);

   fResult =AddTwoNumbers(fValue1,fValue2);                      // Perfrom the addition 
    
    printf("Addditon of two number is %f\n",fResult);            //Perform the addtion
    return 0;

}