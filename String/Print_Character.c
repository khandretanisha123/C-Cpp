#include<stdio.h>
#include<stdlib.h>

void DisplayChar( char *str)
{
    while (*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
    
}
int main()
{
    char Arr[20] = {'\0'};  // We first take default value

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    DisplayChar(Arr);

    return EXIT_SUCCESS;
}