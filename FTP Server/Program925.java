import java.io.*;
import java.net.*;
import java.util.*;
class Program918
{
    public static void main(String A[])
    {   
        Scanner sobj=new Scanner(System.in);
        try
        {
           

            System.out.println("-------------------------------------");
            System.out.println("------------Marvellous Client Started ------------");
            System.out.println("-------------------------------------");

           Socket socket=new Socket("127.0.0.1",9000);

           System.out.println("Connection with server is Sucessfully");

           DataInputStream dis=new DataInputStream(socket.getInputStream());
           
           DataOutputStream dos=new DataOutputStream(socket.getOutputStream());

           System.out.println(dis.readUTF());

           while(true)
           {
            System.out.println("-----------------------------------------");
            System.out.println("Mathmatical  Command");
            System.out.println("-----------------------------------------");

            System.out.println("Enter Command :");

            String command=sobj.nextline();
            dos.writeUTF(command);

            String Response=dis.readUTF();

            System.out.println(Response);
           }
          
        }
        catch(Exception e)
        {
            System.out.println("Exception Occured"+e);
        }
    }//End of Main

}//End of class

