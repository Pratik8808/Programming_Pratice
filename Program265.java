
import java.util.Scanner;

class Program265
{
    

    public static void main(String [] A) 
    {
        Scanner sobj=new Scanner(System.in);
        
        String Arr=null;
        System.err.println("Enter  String :");
        Arr=sobj.nextLine();
       



       System.out.println("Length of String is :"+Arr.length());

       char Str[]=Arr.toCharArray();
       int i=0;

       for(i=0;i<Str.length;i++)
       {
        System.out.println(Str[i]);
       }




        
        
    }
}
