#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    char *ptr = NULL;           //pointer
    ptr = &(Arr[0]);

    int iCount = 0 ;

    while (*ptr != '\0')
    {
        iCount++;
        ptr++;
    }
    
    printf("Letter in String or length of String :%d\n",iCount);   // it count Space also 

    return EXIT_SUCCESS;
}