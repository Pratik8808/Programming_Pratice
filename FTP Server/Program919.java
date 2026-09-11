import java.io.*;
import java.net.*;
class Program918
{
    public static void main(String A[])
    {
        try
        {
           

            System.out.println("-------------------------------------");
            System.out.println("------------Marvellous Client Started ------------");
            System.out.println("-------------------------------------");

           Socket socket=new Socket("127.0.0.1",9000);

           System.out.println("Connection with server is Sucessfully");


        }
        catch(Exception e)
        {
            System.out.println("Exception Occured"+e);
        }
    }
}