

import java.util.Scanner;

class Program68
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
      
       boolean bFlag=true;
        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
               bFlag=false;
               break;
             
            }
           
            
        }
    
     return bFlag;

    }




    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Program68 nobj = new Program68();

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