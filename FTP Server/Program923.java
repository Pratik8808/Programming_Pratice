import java.io.*;
import java.net.*;
class Program918
{
    public static void main(String A[])
    {
        try
        {
            ServerSocket serversocket=new ServerSocket(9000);

            System.out.println("-------------------------------------");
            System.out.println("------------Marvellous Server Started ------------");
            System.out.println("-------------------------------------");
            //Loop for Mutiple Client Requests
            while(true)
            {
            System.out.println("Server is Waiting for Client request");

            Socket clientsocket = serversocket.accept();

            System.out.println("Client Connected Sucessfully");
                //Thread gets created for client
             Thread t=new Thread(()->HandleClientRequest(clientsocket));
           t.start();
            }//End of while 

        }
        catch(Exception e)
        {
            System.out.println("Exception Occured"+e);
        }
    }// End of main Class

    public  static  void HandleClientRequest(Socket socket)
{

    try{
        DataInputStream dis=new DataInputStream(socket.getInputStream());

        DataOutputStream dos=new DataOutputStream(socket.getOutputStream());

        dos.writeUTF("Connected To Marvellous Server");
    }
    catch(Exception e)
    {
        System.out.println("Excpetion Occured :"+e);
    }
}


}// End of class