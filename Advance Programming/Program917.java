class node
{
    public int data;
    public node next;

    public node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    public node first;
    public int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        newn.next = first;
        first = newn;

        iCount++;
    }
    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }
        iCount++;
    }
    public int Count()
    {
        return iCount;
    }
    public void Display()
    {
        node temp = null;

        temp = first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }
    
    public void reverseLinkedList()
    {
        node prev=null;
        node Next=null;
        node curr=null;

        if(first==null)
        {
            return;
        }

        curr=first;
        while(curr!=null)
        {
            Next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=Next;
        }
        first=prev;



    }
    

    
}

class Program917
{
    public static void main(String A[])
    {
        int iRet = 0;

        SinglyLL sobj = new SinglyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);
        sobj.InsertLast(101);
        sobj.InsertLast(111);
        
        sobj.Display();
        sobj.reverseLinkedList();
        sobj.Display();
        


    }
}