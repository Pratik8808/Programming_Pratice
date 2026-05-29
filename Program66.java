import java.util.Scanner;

class Program66
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
      

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
              break;
             
            }
           
            
        }
    
       if(iCnt<iNo/2)
            {
                return true;
            }
        else{
            return false;
        }

    }




    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Program66 nobj = new Program66();

        bRet = nobj.CheckPrime(iValue);
        
        if(bRet == true)
        {
            System.out.println("It is Prime");
        }
        else
        {
            System.out.println("It is not Prime ");
        }
    }
}


// Time Complexity : O(N/2)
// Where N >= 0