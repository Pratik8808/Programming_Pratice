import java.util.*;


class StringX
{
    public void display(String str)
    {
        System.out.println("Received String is :"+str);
    }
}
public class Program269
{
    public static void main(String[] A)
    {
         Scanner sobj=new Scanner(System.in);
         String Data=null;
         StringX strobj=new StringX();
         
         System.out.println("Enter the  String ");
         Data=sobj.nextLine();

         strobj.display(Data);

    }
}
