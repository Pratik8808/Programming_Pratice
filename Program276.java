
import java.util.*;



public class Program276 {
    public static void main(String[] A) {
        Scanner sobj = new Scanner(System.in);
        String Data = null;
        Program280 strobj = new Program280();//Error    cannot access StringX
        int iRet = 0;

        System.out.println("Enter the  String ");
        Data = sobj.nextLine();

        iRet = strobj.CountCapital(Data);

        System.out.println("Number of Capital Character :" + iRet);

        iRet = strobj.CountSmall(Data);

        System.out.println("Number of Small Chracter :" + iRet);

        iRet = strobj.CountDigit(Data);
        System.out.println("Numbe of Digit is :" + iRet);

        iRet = strobj.CountSpace(Data);
        System.out.println("Numbe of Spaces is :" + iRet);

        iRet = strobj.CountSpecial(Data);
        System.out.println("Numbe of Special Symbol  is :" + iRet);
    }
}
