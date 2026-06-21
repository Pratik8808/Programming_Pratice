
import java.util.*;


class StringX
{
    public int CountCapital(String str)
    {

          char Arr[]=str.toCharArray();

         int iCount=0;
         int iCnt=0;

         for(iCnt=0;iCnt<Arr.length;iCnt++)
         {
           if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
           {
             iCount++;
           }

         }
    return iCount;
         
    }
    public int CountSmall(String str)
    {   char Arr[]=str.toCharArray();
    int iCount=0;
     int iCnt=0;
     for(iCnt=0;iCnt<str.length();iCnt++)
     {
        if(Arr[iCnt]>='a' && Arr[iCnt]<='z')
           {
            iCount++;
           }

      
     }
       return iCount;

    }
}
public class Program272
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

      iRet=strobj.CountSmall(Data);

        System.out.println("Number of Small Chracter :"+iRet);
    }
}
