#include <stdio.h>
#include <string.h>
void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;

    start = str;
    while (*str != '\0')
    {
        str++;
    }
    end = str--;
    while (start < end)
    {
        char temp = '\0';

        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char Arr[50] = {'\0'};
    printf("Enter The String : \n");
    scanf("%[^'\n']s", Arr);
    strrevX(Arr);

    printf("Updated String is : %s\n",Arr);

    return 0;
}