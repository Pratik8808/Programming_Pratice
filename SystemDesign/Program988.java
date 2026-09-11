class Demo
{
    public int i,j;

    public Demo fun()
    {
        return this;

    }
    public int gun()
    {
        return 11;
    }

}

public class Program988 {


    public static void main(String A[])
    {
        Demo dobj=new Demo();

        int ret=dobj.fun().gun();

        System.out.println(ret);
        System.out.println(dobj.fun())  ;

    }
    
}
