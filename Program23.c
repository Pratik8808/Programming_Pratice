#include <stdio.h>

//User Defined Marco
#define AGE_INVAILD -1

int CalculateTickerPrice(int iAge)
{    // input Updater 
    if(iAge<0)
    {
       return AGE_INVAILD; // -1 means something problem
    }
    
    if(iAge>=0 && iAge<=5 )
    {
        return 0;
    }
    else if (iAge>=6 && iAge<=18)
    {
        return 500;
    }
    else if (iAge>=19 && iAge <=50)
    {
        return 900;
    }

    else
    {
        return  400;
    }
}

int main ()
{
  int  iValue=0;
  int iRet=0;
  printf("Please Enter your Age to calculate ticket price : ");
  scanf("%d",&iValue);

  iRet = CalculateTickerPrice(iValue);
 
  if(iRet == AGE_INVAILD)
  {
    printf("Please enter postive Age \n");
    
  }
  else
  {

      printf("Your Ticket Price is %d Rupees\n",iRet);
  }

   return 0;
    
}