/*
    iRows = 4 
    iCols = 4

    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D


*/

#include<stdio.h>
#include<stdlib.h>

void Display ( int iRows , int iCOls)
{
    int i ,j = 0 ;
    char Ch = '\0';

    for(i= 1 ; i <= iRows ; i++)
    {
        for( j = 1 ,Ch = 'A'; j<= iCOls ; j++, Ch++)
        {
            printf("%c\t",Ch);
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1  = 0 ;
    int iValue2 = 0 ;

    printf("Enter number of Rows :");
    scanf("%d",&iValue1);

    printf("Enter number of columns :");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return EXIT_SUCCESS;
}