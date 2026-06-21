import java.util.*;


class StringX
{
    public int CountCapital(String str)
    {
         
         int iCount=0;
         int iCnt=0;

         for(iCnt=0;iCnt<str.length();iCnt++)
         {
            if(str.charAt(iCnt)>='A'&& str.charAt(iCnt)<='Z')
            {
                iCount++;
            }

         }
    return iCount;
         
    }
}
public class Program270
{
    public static void main(String[] A)
    {
         Scanner sobj=new Scanner(System.in);
         String Data=null;
         StringX strobj=new StringX();
         int iRet=0;
         
         System.out.println("Enter the  String ");
         Data=sobj.nextLine();

       iRet=strobj.CountCapital(Data);

       System.out.println("Number of Capital Character :"+iRet);


    }
}
