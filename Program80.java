import java.util.*;

class DigitX
{
  public void DisplayDigits(int iNo)
  { 
    // int iDigit=0;
    while(iNo>0)
    {
        //  iDigit=iNo%10;
        System.out.print(iNo%10+"\t");
        iNo=iNo/10;
    
    }

  }
}



class Program80
{
    public static void main (String args[])
{
    Scanner sobj=new Scanner(System.in);
    DigitX dobj=new DigitX();

    int iValue=0;
    System.out.println("Enter the Number");
    iValue=sobj.nextInt();
    dobj.DisplayDigits(iValue);

}

}