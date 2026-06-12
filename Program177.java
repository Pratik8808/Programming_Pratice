

// Input :7
//Output: 1 * 2 * 3* 4
import java.util.*;

class Program177
{
    public static void Display(int iNo)
    {
        int iCnt=1;
        int iCnt2=1;
        for(iCnt=1,iCnt2=1;iCnt<=iNo;iCnt++)
        {
             if(iCnt%2==0)
             {

                 System.out.print("*\t");
             }
             else 
             {
               System.out.print(iCnt2+"\t");
               iCnt2++;
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
