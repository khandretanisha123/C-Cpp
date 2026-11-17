#include<stdio.h>
#include<stdlib.h>
int main()
{
    char Arr[20] = {'\0'} ;

    printf("Enter string :");  //After space it break
    scanf("%s\n",Arr);

    printf("%s\n",Arr);

    fflush(stdin);

    /////////////////////////////////////////////////////////////////
    //
    //  if compiler can't get the next input then fflush(stdin) is used 
    //  in this buffer is created,fflush(stdin) clear the buffer input and 
    //  takes next input 
    //
    //////////////////////////////////////////////////////////////////


    char str[20] = {'\0'};

    printf("Enter another String :");
    scanf("%[^'\n']s",str);

    printf("%s\n", str);

    return EXIT_SUCCESS;
}
