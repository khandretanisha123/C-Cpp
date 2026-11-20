/*
    input :
        row = 4
        col = 5

    output :

        a   b   c   d   e
        1   2   3   4   5
        a   b   c   d   e
        1   2   3   4   5

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iRows , int iCols)
{
    int i,j = 0 ;
    char Ch = '\0';

    for(i = 1 ; i<=iRows ; i++)
    {
        for(j = 1, Ch = 'a' ; j<=iCols ; Ch++ , j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t", Ch);
            }
            else
            {
                printf("%d\t",j);
            }
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