
////////////////////////////////////////////////////////////////
//  Include  Required for the Header file
//
//
//
////////////////////////////////////////////////////////////////


# include  <stdio.h>

////////////////////////////////////////////////////////////////
//
// Function name: AddTwoNumbers
// input : float,float
// output: float
// Description: Performs  addition of two float
// Date: 08/05/2026
// Author: Pratik Sunilkumar Narule
//
//
//
//
///////////////////////////////////////////////////////////////////////////////////////////////
float  AddTwoNumbers(        float fNo1,                          //First Number
                             float fNo2                           //Second Number
                    )
{      
    float fAns=fNo1+fNo2;                                        // Variable to store Result
    return fAns;                                                 //Perform Addition
}

////////////////////////////////////////////////////////////////
//
// Application to perform addition of two Float Values
//
//
//
//
//////////////////////////////////////////////////////

int main ()
{
    

   float fValue1=0.0f;                                           //To store first Input
   float fValue2=0.0f;                                           // To store second Output
   float fResult=0.0f;                                           // To store the resuult

    printf("Enter the First Number : ");
    scanf("%f",&fValue1);
    
     printf("Enter the Second Number : ");
    scanf("%f",&fValue2);

   fResult =AddTwoNumbers(fValue1,fValue2);
    
    printf("Addditon of two number is %f\n",fResult);            //Perform the addtion
    return 0;

}

////////////////////////////////////////////////////////////////
// 
// Input:   10.0    11.0
// Ouput:   21.0
//
//
////////////////////////////////////////////////////////////////