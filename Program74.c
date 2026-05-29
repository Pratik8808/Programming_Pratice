//Input 5

// 12345
#include <stdio.h>

int main ()
{ int iCnt=0;
    iCnt=1;
int iValue=0;
printf("Enter the number \n");
scanf("%d",&iValue);
iCnt=iValue;
    while(iCnt>=1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
    printf("\n");

    return 0;

}