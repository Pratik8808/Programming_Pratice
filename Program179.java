

// Input :7
//Output: a b f c f j
import java.util.*;

class Program178
{
    public static void Display(int iNo)
    {
        int iCnt=1;
        char ch='a';
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
           
            System.out.print(ch+"\t");
            ch++;
       
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
