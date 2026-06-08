#include <iostream>

using namespace std;
int Summation(int Arr[],int iSize)
{
   int iCnt=0;
   int iSum=0;
   for (iCnt=0;iCnt<iSize;iCnt++)
   {
    iSum+=Arr[iCnt];
   }
   return iSum;
}
int main()
{
    int *Brr=NULL;
    int iLength=0,iRet=0;

    cout<<"Enter the Number of Elements : \n";
    cin>>iLength;

    //C:Brr=(int *)malloc (sizof(int )*iLength)
    //Java:Brr[]=new int[ilength];
    Brr=new int[iLength];
    int iCnt=0;
     cout<<"Enter the element : "<<endl;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       cin>>Brr[iCnt];
    }

    cout<<"Elements of Array is : \n";
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    + iRet=Summation(Brr,iLength);
    cout<<"Summation of Array is "<<iRet<<endl;

  delete [] Brr;

   
    return 0;
}