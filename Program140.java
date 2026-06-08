
import java.util.*;


class Program139
{
   public static void main(String[] A)
   {
      Scanner sobj=new Scanner(System.in);

      int Arr[]={10,30,40,50,60};

     for(int iCnt=0;iCnt<Arr.length;iCnt++)// Bad Programming Pratice
     {
        System.out.println(Arr[iCnt]);
     }

     System.out.println(iCnt);// Error iCnt is  not accessible as upto loop local variable


   }


}
