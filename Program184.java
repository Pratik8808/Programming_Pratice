

// Input :7
//Output:A*B*C*D
import java.util.*;

class Program184
{
    public static void Display(int iNo)
    {
        int iCnt=1;
        char ch='\0';
        for(iCnt=1,ch='A';iCnt<=iNo;iCnt++)
        {  
            if(iCnt%2==0)
            {

                System.out.print("*\t");

            }
            else{

                System.out.print((ch++)+"\t");
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

