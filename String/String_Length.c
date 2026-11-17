#include<stdio.h>
#include<stdlib.h>

int StrLen(char *str)
{
    int iCount = 0 ;

    while (*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount ;
}
int main()
{
    char Arr[20] = {'\0'} ;
    int iRet = 0 ;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    iRet = StrLen(Arr);

    printf("Length of String is: %d", iRet);

    return EXIT_SUCCESS;
}