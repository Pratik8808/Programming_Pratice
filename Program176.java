

// Input :7
//Output: *1* *2* *3* *4* *5*
import java.util.*;

class Program176
{
    public static void Display(int iNo)
    {
        int iCnt=1;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
             if(iCnt%2==0)
             {

                 System.out.print("*\t");
             }
             else 
             {
                System.out.print(iCnt+"\t");
             }
        
       
        }
        System.out.println();
    }
    public static void main (String A [])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;
        System.out.println("Enter the Number of Elements");

        iValue=sobj.nextInt();

        Display(iValue);

    
      

    }
}
