    
    import java.util.*;
    class ArrayX
    {
    private int iSize;  
    private int Arr[];


    public ArrayX() // For Default Constructor
    
    {
        this(5);
    }
    public ArrayX(int X)
    { 
    
        iSize=X;
        Arr=new int[iSize];
    }

      void Accept()
     {
        Scanner sobj=new Scanner(System.in);
      System.out.println("Enter the Number of elements");
        int iCnt=0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
             Arr[iCnt]=sobj.nextInt();
        }
        sobj.close();
     }

     void Display()
     {
        System.out.println("The Elements in  Array is  :");
        int iCnt=0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
     }
    }

class Program170
{

public static void main(String[] args) {
    Scanner sobj=new Scanner(System.in);
    int iLength=0;
    ArrayX aobj;
    System.out.println("Enter the Element");
    iLength=sobj.nextInt();

    aobj=new ArrayX(iLength);
    aobj.Accept();
    aobj.Display();

    aobj=null;
    System.gc();



}

}