
import java.util.*;

class StringX
{
    public String toUpperX(String str)
    {
   
        char Arr[]=str.toCharArray();

        int i=0;
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]>='a' && Arr[i]<='z')
            {

                Arr[i]=(char)(Arr[i]-32);
            }
        }
   

        return new String(Arr);
    }
     public String toLowerX(String str)
    {
   
        char Arr[]=str.toCharArray();

        int i=0;
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]>='A' && Arr[i]<='Z')
            {

                Arr[i]=(char)(Arr[i]+32);
            }
        }
   

        return new String(Arr);
    }
   


}

public class Program287 {
    public static void main(String[] A) {
        Scanner sobj = new Scanner(System.in);
        String Data = null;
        StringX strobj = new StringX();
        String sRet=null;

        System.out.println("Enter the  String ");
        Data = sobj.nextLine();
        sRet=strobj.toUpperX(Data);

        System.out.println("Updated String is :"+sRet);

        sRet=strobj.toLowerX(Data);

        System.out.println("Updated String in Lower Case  Function :"+sRet);
        

    }
}
