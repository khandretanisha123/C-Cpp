// for completely dynamica array we need pointer to creater memory

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr = NULL ;
    int iSize = 0 ;
    int iCnt = 0 ;
    
    printf("Enter mumber of Element  you want:\n");
    scanf("%d\n",&iSize);

    //step1 : create memory
    // iSize = 5
    //Ex: sizeofint=4 bytes (4*5(size of array))== 20 allocated 20 bytes 
    // (int *) fro typecasting 
 
    ptr = (int *)malloc(sizeof(int)*iSize);  
    
    //step2 : use the memmory
    printf("Enter the elements: \n"); 
    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    printf("Element in array are :\n");             //for Display arrya element
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }


    //step3 : free the memory
    free(ptr);

    return EXIT_SUCCESS ;
}

