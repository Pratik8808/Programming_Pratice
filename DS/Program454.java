
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
            temp=temp.next;
        }
        System.out.println();
    }

   public int Count()
    {
        return iCount;
    }

    public void Insertfirst(int iNo)
    {  
        node newn=new node(iNo);
        if(first==null)
        {
            first=newn;
        }
        else
        {
            newn.next=first;
            
            first=newn;
            
        }
        
        iCount++;

    }

   public void InsertLast(int iNo)
    {
        node temp=null;
        temp=first;
        node newn=new node(iNo);
        if(temp==null)
        {
            first=newn;
        }

        else {
          temp=first;
            
            while(temp.next!=null)
                {
                    temp=temp.next;
                    
                }
                temp.next=newn;
            }
            iCount++;
        
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


class Program454

{   public static void main(String [] A)
    {  SinglyLL sobj=new SinglyLL();

        sobj.Insertfirst(51);
        sobj.Insertfirst((21));
        sobj.Insertfirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast((121));

        sobj.Display();
        
        
    }
    
}
