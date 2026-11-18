#include<stdio.h>
#include<stdlib.h>

// user define function 

int CountCapitalX(char *str)
{
    int iCount = 0 ;
    while (*str != '\0')
    { 
        if((*str >= 65) && (*str <= 90))
        {
            iCount++ ;
        }
        str++ ;
    }

    return iCount ;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0 ;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapitalX(Arr);
    printf("Frequency of Capital letters : %d\n",iRet);

    return EXIT_SUCCESS;
}