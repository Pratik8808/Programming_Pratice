
import java.util.Scanner;

class DigitX
{
  public int CountEvenDigit(int iNo)
  { 
    int iDigit=0;
    int iCount=0;
    while(iNo!=0)
    {
        
         iDigit=iNo%10;
         if(iDigit%2 == 0)
         {
            iCount++;
         }
       
        iNo=iNo/10;
       
    
    }
    return iCount++;

  }
}



class Program85
{
    public static void main (String args[])
{
    Scanner sobj=new Scanner(System.in);
    DigitX dobj=new DigitX();

    int iValue=0;
    int iRet=0;
    System.out.println("Enter the Number");
    iValue=sobj.nextInt();
    iRet=dobj.CountEvenDigit(iValue);

    System.out.println("Number of even digit count  is   :"+iRet);

}

}