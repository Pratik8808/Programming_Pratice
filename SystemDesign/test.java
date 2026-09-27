interface s1
{
    public void up();
    public void down();
    //public void left();

   
}

class Man implements s1
{
    public void up()
    {
        System.out.println("UP from the Man");

        
    }
    public void down()
    {
        System.out.println(("Down from man"));
    } 
}



class child implements s1
{
    public void up()
    {
        System.out.println("UP from the child");

        
    }
    public void down()
    {
        System.out.println(("Down from child"));
    } 
}

class Runner
{
    private s1 p;
    Runner(s1 p)
    {
        this.p=p;
    }

    public void run()
    {
        System.out.println("Running Game :"+p);
        p.down();
        p.up();
    }
}

public class test {
    
public static void main(String[] args) 
{
     

}

}
