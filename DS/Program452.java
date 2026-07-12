
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
    private node first;
    private int iCount;

    public SinglyLL()
    {
        System.out.println("Inside the Constrcutor ");
        this.first=null;
        this.iCount=0;

    }
   public void Display()
    {
        node temp=first;
        while(temp!=null)
        {
            System.out.print("|"+temp.data+"|"+"->");
        }
        System.out.println();
    }

   public int Count()
    {
        return iCount;
    }

    public void Insertfirst(int iNo)
    {   node temp=first;
        node newn=new node(iNo);
        if(temp==null)
        {
            temp=newn;
        }
        else
        {
            newn.next=temp;
            
            first=temp;

        }


    }

   public void InsertLast(int iNo)
    {
        node temp=null;
        temp=first;
        node newn=new node(iNo);
        if(temp==null)
        {
            temp=newn;
        }

        else {

            
            while(temp.next!=null)
                {
                    temp=temp.next;
                    
                }
                temp.next=newn;
            }
        
    }
   public void InsertAtPos(int iNo,int iPos)
    {

    }

    public void DeleteFirst()
    {

    }
    public void DeleteLast()
    {

    }
    public void deleteAtPost(int iPos)
    {}
    
}


class Program452

{   public static void main(String [] A)
    {  SinglyLL sobj=new SinglyLL();

        sobj.InsertLast(51);
        
        
    }
    
}
