#include <stdio.h>
#include <string.h>

int main()
{
    int iCount=0;
    char *str="Ganesh"; // char str[]="Ganesh";

printf("Length of the String is : %lu\n",strlen(str));
while(*str!='\0')
{

  
    str++;
    iCount++;
}
printf("Length of the Str is :%d\n",iCount);

}
