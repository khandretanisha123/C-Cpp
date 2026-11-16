#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Wel come";

    printf("size of string :%d\n",sizeof(Arr)); // \0 is in it 

    
    printf("length of String : %d\n",strlen(Arr)); // it not count \0

    return EXIT_SUCCESS;

}