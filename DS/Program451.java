
class node
{
    public int data;
    public node next;

    node(int iNo)
    {
        this.data=iNo;
        this.next=null;
    }
}

class SinglyLL
{
    public node first;
    public int iCount;

    public SinglyLL()
    {
        System.out.println("Inside the Constrcutor ");
        this.first=null;
        this.iCount=0;

    }
}


class Program451

{   public static void main(String [] A)
    {  SinglyLL sobj=new SinglyLL();
        
        
    }
    
}
