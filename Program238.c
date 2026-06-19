#include <stdio.h>


int main()
{
    int iCount=0;
    char *str="Ganesh"; // char str[]="Ganesh";


while(*str!='\0')
{

  
    str++;
    iCount++;
}
printf("Length of the Str is :%d\n",iCount);
    
}
