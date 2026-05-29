

import java.util.Scanner;

class DigitX
{
  public int SumDigit(int iNo)
  { 
    int iDigit=0;
    int iSummation=0;
    while(iNo!=0)
    {
        
         iDigit=iNo%10;
         iSummation=iSummation+iDigit;
       
        iNo=iNo/10;
       
    
    }
    return iSummation;

  }
}



class Program89
{
    public static void main (String args[])
{
    Scanner sobj=new Scanner(System.in);
    DigitX dobj=new DigitX();

    int iValue=0;
    int iRet=0;
    System.out.println("Enter the Number");
    iValue=sobj.nextInt();
    iRet=dobj.SumDigit(iValue);

    System.out.println("Summation of the digits   :"+iRet);

}

}