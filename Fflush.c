#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name : \n");
    scanf("%[^'\n']s",sName);   // Enter remains in input buffer

    fflush(stdin);

    /////////////////////////////////////////////////////////////////
    //
    //  if compiler can't get the next input then fflush(stdin) is used 
    //  in this buffer is created,fflush(stdin) clear the buffer input and 
    //  takes next input 
    //
    //////////////////////////////////////////////////////////////////

    printf("Enter your age : \n");
    scanf("%d",&iAge);

    printf("Enter your marks : \n");
    scanf("%f",&fMarks);

    printf("Welcome %s\n",sName);
    printf("Your age is : %d\n",iAge);
    printf("Your marks : %f\n",fMarks);

    return EXIT_SUCCESS;
}