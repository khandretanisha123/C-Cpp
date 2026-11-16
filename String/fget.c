#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100] ;

    printf("Enter string : \n");

    //scanf("%[^'\n']s",Arr);

    /*
        fget is used to take input after space
    */

    fgets(Arr,sizeof(Arr),stdin);      

    printf("Entered string is : %s\n",Arr);  

    return EXIT_SUCCESS;
}