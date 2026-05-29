

import java.util.Scanner;

class DigitX
{
  public void CountOddEvenDigit(int iNo)
  { 
    int iDigit=0;
    int iCountOdd=0;
    int iCountEven=0;

    while(iNo!=0)
    {
        
         iDigit=iNo%10;
         if(iDigit%2 != 0)
         {
            iCountOdd++;

         }
        else
        {
            iCountEven++;
        }
        iNo=iNo/10;
       
    
    }
    System.out.println("The number  of even Digit is :"+iCountEven);
    System.out.println("The Number of odd is :"+iCountEven);

    

  }
}



class Program88
{
    public static void main (String args[])
{
    Scanner sobj=new Scanner(System.in);
    DigitX dobj=new DigitX();

    int iValue=0;
    System.out.println("Enter the Number");
    iValue=sobj.nextInt();
    dobj.CountOddEvenDigit(iValue);

}

}