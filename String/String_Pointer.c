#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char Arr[10] = "Wel come";

    char *ptr = NULL ;          //pointer

    ptr = &(Arr[0]);

    while (*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    return EXIT_SUCCESS ;
}