#include <stdio.h>


int main()
{
  int iNo1=0, iNo2=0, Ans=0;

  printf("Enter The First Number: \n");
  scanf("%d",&iNo1);

  printf("Enter The Second Number \n");
  scanf("%d",&iNo2);

  Ans=iNo1 & iNo2;
  
  printf("AND  : %d\n",Ans);


  Ans=iNo1  | iNo2;
  
  printf("OR  : %d\n",Ans);

  Ans=iNo1  ^ iNo2;
  
  printf("XOR  : %d\n",Ans);



    return 0;
}