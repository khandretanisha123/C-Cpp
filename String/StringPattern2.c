/*
    iRows = 4
    iCols = 4

        A   B   C   D
        a   b   c   d
        A   B   C   D
        a   b   c   d
*/

#include<stdio.h>
#include<stdlib.h>

void Display ( int iRows , int iCOls)
{
    int i ,j = 0 ;
    char Cha , ChA = '\0';

    for(i= 1 ; i <= iRows ; i++)
    {
        for( j = 1 ,ChA = 'A', Cha = 'a'; j<= iCOls ; j++, ChA++ , Cha++ )
        {
           if( i % 2 != 0)
           {
                printf("%c\t",ChA);
           }
           else
           {
                printf("%c\t",Cha);
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