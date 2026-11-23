#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[4] = {0} ; // local Array , 0 don't take any garbage value through complete array
    int iCnt = 0 ;

    printf("Enter Elements :\n");

    for(iCnt = 0 ; iCnt < 4 ; iCnt++)           //Taking input  in Array
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Array Element are:\n");
    for (iCnt = 0 ; iCnt < 4 ; iCnt++)          // Display Array element 
    {
        printf("%d\n",Arr[iCnt]);
    }


    return EXIT_SUCCESS ;
}