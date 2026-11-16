#include<stdio.h>
#include<stdlib.h>

int main()
{
    // List initialization  it will take before \0 it skip after \0

    char Arr[20] = {'W','e','l',' ','C','o','m','e' , '\0','S','i','r'};
    printf("%s\n",Arr);


    //String initialization 

    char Str[20] = "Good Morning";
    printf("%s\n",Str);


    // Member by Member initialization

    char Name[20];

    Name[0] = 'T';
    Name[1] = 'a';
    Name[2] = 'n';
    Name[3] = 'i';
    Name[4] = 's';
    Name[5] = 'h';
    Name[6] = 'a';

    printf("%s\n",Name);




    return EXIT_SUCCESS ;
}

