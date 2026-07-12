
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
        
        this.first=null;
        this.iCount=0;

    }
   public void Display()
    {
        node temp=first;
        while(temp!=null)
        {
            System.out.print("|"+temp.data+"| "+"->");
            temp=temp.next;
        }
        System.out.print("NULL\n");
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
        
        node newn=new node(iNo);
        int i=0;
        node temp=null;
       

        if(iPos<1 ||iPos>iCount+1)
        {
            System.out.println("Inavild Pos");
            return;
        }
        if(iPos==1)
        {
            Insertfirst(iNo);
        }
        else if(iPos==iCount+1)
        {
            Insertfirst(iNo);
        }

    else 
    {
        temp=first;
        
        for(i=1;i<iPos-1;i++)
        {
            temp=temp.next;
        }
        newn.next=temp.next;
        temp.next=newn;
        iCount++;
    }
        
      

    }

    public void DeleteFirst()
    {
        if(first==null)
        {
            return;
        }
        else if(first.next==null)
        {
            first=null;
        }
        else
        {

            first=first.next;
        }
        iCount--;

    }
    public void DeleteLast()
    {  node temp=null;
          if(first==null)
        {
            return;
        }
        else if(first.next==null)
        {
            first=null;
        }
        else
        {
            temp=first;
            while(temp.next.next!=null)
            {
                temp=temp.next;
            }
            temp.next=null;


           
        }
        iCount--;

    }
    public void deleteAtPost(int iPos)
    {
       
        int i=0;
        node temp=null;
       

        if(iPos<1 ||iPos>iCount)
        {
            System.out.println("Inavild Pos");
            return;
        }
        if(iPos==1)
        {
            DeleteFirst();
        }
        else if(iPos==iCount)
        {
                DeleteLast();
        }

    else 
    {
        temp=first;
        
        for(i=1;i<iPos-1;i++)
        {
            temp=temp.next;
        }
        temp.next=temp.next.next;
        iCount--;
    }
        
      


    }
    
}


class Program457

{   public static void main(String [] A)
    {  SinglyLL sobj=new SinglyLL();
        int iRet=0;

        sobj.Insertfirst(51);
        sobj.Insertfirst((21));
        sobj.Insertfirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast((121));

        sobj.Display();
        iRet=sobj.Count();
        System.out.println("Number of Nodes are :"+iRet);

        sobj.DeleteFirst();
        sobj.DeleteLast();

        sobj.Display();
        iRet=sobj.Count();
        System.out.println("Number of Nodes are :"+iRet);

        sobj.InsertAtPos(105, 4);
        sobj.Display();
        iRet=sobj.Count();
        System.out.println("Number of Nodes are :"+iRet);

        sobj.deleteAtPost(4);
        sobj.Display();
        iRet=sobj.Count();
        System.out.println("Number of Nodes are :"+iRet);


        
        
    }
    
}

/*
-----------------------------------------
                SingLL      SinglyCL        DoublyLL    DoublyLL
-----------------------------------------
c                 Done       Done           Done        Done
c++               DOne       Done           Done        Done
java              Done       --             --          ---
C++ Generic

----------------------------------------------

*/
