import java.util.*;


class StringX
{
    public void display(String str)
    {
        System.out.println("Received String is :"+str);
    }
}
public class Program268
{
    public static void main(String[] A)
    {
         Scanner sobj=new Scanner(System.in);
         String str=null;
         StringX strobj=new StringX();
         
         System.out.println("Enter the  String ");
         str=sobj.nextLine();

         strobj.display(str);

    }
}
