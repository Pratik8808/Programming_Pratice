
import java.util.*;

class StringX
{
    public String toUpperX(String str)
    {
   
        char Arr[]=str.toCharArray();

        int i=0;
        for(i=0;i<Arr.length;i++)
        {
           Arr[i]=Arr[i]-32;  // Error
        }
   

        return new String(Arr);
    }
   


}

public class Program281 {
    public static void main(String[] A) {
        Scanner sobj = new Scanner(System.in);
        String Data = null;
        StringX strobj = new StringX();
        String sRet=null;

        System.out.println("Enter the  String ");
        Data = sobj.nextLine();
        sRet=strobj.toUpperX(Data);

        System.out.println("Updated String is :"+sRet);
        

    }
}
