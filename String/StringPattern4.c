/*
    Input :
        Number of element = 5

    Output :
        A   B   C   D   E

*/
#include<stdio.h>
#include<stdlib.h>

void Display(int ielement)
{
    int i = 0 ;
    char Ch = '\0';

    for(i = 1 , Ch = 'A'; i <= ielement ; i++, Ch++)
    {
        printf("%c\t", Ch);
    }

}
int main()
{
    int iValue = 0 ;

    printf("Number of element :");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}