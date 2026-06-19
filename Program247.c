#include <stdio.h>

int strlenX(char *str)
{

   *str='A';
  
   
//    return iCount;
    
}

int main()
{
    char Arr[50]={'\0'};
int iRet=0;
    printf("Enter String :  \n");
    scanf("%[^'\n']s",Arr);

  strlenX(Arr);

 printf("String is :%s\n",Arr);
  
    return 0;

}
