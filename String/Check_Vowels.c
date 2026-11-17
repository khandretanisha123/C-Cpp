#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL ;

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if(
            (*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||
            (*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            return true ;
        }
        
        str++ ;
    }
    
    return false ;
}

int main()
{
    char Arr[20] = {'\0'};
    BOOL bRet = false;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);
    
    if(bRet == true)
    {
        printf("Vowels is present");
    }
    else
    {
        printf("Vowels is not present");
    }

    return EXIT_SUCCESS;
}
