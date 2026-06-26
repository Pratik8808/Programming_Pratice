#include <stdio.h>


int main()
{
  int iNo1=0, iNo2=0, Ans=0;

  printf("Enter The First Number: \n");
  scanf("%d",&iNo1);

  printf("Enter The Second Number \n");
  scanf("%d",&iNo2);

  Ans=iNo1 & iNo2;
  

  printf("Result is %d\n",Ans);


    return 0;
}