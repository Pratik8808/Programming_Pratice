
import java.util.*;
public class Program145 {
  
    public static void Update(int Arr[])
    {
        int iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]++;
        }
    }

    public static void main(String[] A) 
    {
        
        int Brr[]={10,20,30,40,50};

        int iCnt=0;
         System.out.println("The Array Before Function call is \n");

         for(iCnt=0;iCnt<Brr.length;iCnt++)
         {
            System.out.println(Brr[iCnt]);
         }

         Update(Brr);
        System.out.println("The Array After Function call is \n");

         for(iCnt=0;iCnt<Brr.length;iCnt++)
         {
            System.out.println(Brr[iCnt]);
         }

         Brr=null;
        System.gc();

    }
}
