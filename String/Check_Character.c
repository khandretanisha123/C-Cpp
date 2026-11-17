// Check character is present or not 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL ;

BOOL ChkCharacter(char *str , char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
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
    char Charcter =  '\0';
    BOOL bRet = false ;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);

    printf("Enter Charcter:");
    scanf("%c",&Charcter);

    bRet = ChkCharacter(Arr,Charcter);

    if(bRet == true)
    {
        printf("charcater is present ");
    }
    else
    {
        printf("Charcter is not present ");
    }

    return EXIT_SUCCESS;

}