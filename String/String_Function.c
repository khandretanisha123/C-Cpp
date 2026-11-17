#include<stdio.h>
#include<stdlib.h>


void Display(char *str)         //It recevied in Pointer
{
    printf("%s",str);
}
int main()
{
    char Arr[20] = "Wel come";

    Display(Arr);               // call by address and send by address

    return EXIT_SUCCESS;
}