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
        while(true)
        {
            String command=dis.readUTF();
            System.out.println("Command Received from Client",command);

            String parts[]=command.spilt(" ");
            String operation=parts[0].toUpperCase();

            if(operation.equals("Quit"))
            {
                dos.writeUTF("Disconnected From Sever");
                break;
            }

            if(Parts.length!=3)
            {
                dos.writeUTF("Inavild Command Format");
                continue;
            }
            double no1=double.parseDouble(parts[1]);
            double no2=double.parseDouble(parts[2]);
            double result=0.0;

            if(operation.equals("Add"))
            {
                result=no1+no2;
                dos.writeUTF("Result : is"+result);
            }

              else if(operation.equals("sub"))
            {
                result=no1-no2;
                dos.writeUTF("Result : is"+result);
            }


              else if(operation.equals("Mult"))
            {
                result=no1*no2;
                dos.writeUTF("Result : is"+result);
            }

            else
            {
                dos.written("Invaild Operation");
            }
                
                
        }// end of while

        socket.close();
        System.out.println("Client Disconnected ");
    }
    catch(Exception e)
    {
        System.out.println("Excpetion Occured :"+e);
    }
}


}// End of class