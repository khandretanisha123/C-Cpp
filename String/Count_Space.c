#include<stdio.h>
#include<stdlib.h>

int CountSpace(char *str)
{
    int iCount = 0 ;

    while (*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++ ;
    }

    return iCount ;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0 ;

    printf("Enter String :");
    scanf("%[^'\n]s",Arr);

    iRet = CountSpace(Arr);

    printf("Space present : %d\n",iRet);
    
    return EXIT_SUCCESS;
}