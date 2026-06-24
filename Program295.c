#include <stdio.h>
#include <string.h>
void strrevX(char *str)
{
   char *start=NULL;
   char *end=NULL;
   
   start=str;
   while(*str !='\0')
   {
     str++;
   }
   str --;
   while(start<=str)
   {
     printf("%s\n",str);
     str--;
   }

}
int main()
{
   char Arr[50]={'\0'};
   printf("Enter The String : \n");
   scanf("%[^'\n']s",Arr);
   strrevX(Arr);
 
    return 0;

}