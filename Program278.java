
import java.util.*;

class StringX 
{
    public String Update(String str)
    {
   
        char Arr[]=str.toCharArray();

        int i=0;
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]=='a' ||Arr[i]=='A')
            {
                Arr[i]='_';
            }
        }
        String sRet=new String(Arr);

        return sRet;
    }
   


}

public class Program278 {
    public static void main(String[] A) {
        Scanner sobj = new Scanner(System.in);
        String Data = null;
        StringX strobj = new StringX();
        String sRet=null;

        System.out.println("Enter the  String ");
        Data = sobj.nextLine();
        sRet=strobj.Update(Data);

        System.out.println("Updated String is :"+sRet);
        

    }
}
