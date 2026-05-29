

import java.util.Scanner;

class DigitX
{
  public int SumevenDigit(int iNo)
  { 
    int iDigit=0;
    int iSumEven=0;
    while(iNo!=0)
    {
        
         iDigit=iNo%10;
         if(iDigit%2 == 0)
         {
            iSumEven+=iDigit;
         }
       
        iNo=iNo/10;
       
    
    }
    return iSumEven;

  }
}



class Program90
{
    public static void main (String args[])
{
    Scanner sobj=new Scanner(System.in);
    DigitX dobj=new DigitX();

    int iValue=0;
    int iRet=0;
    System.out.println("Enter the Number");
    iValue=sobj.nextInt();
    iRet=dobj.SumevenDigit(iValue);

    System.out.println("Summation of the digit is   :"+iRet);

}

}