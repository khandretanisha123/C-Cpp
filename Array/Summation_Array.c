#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[] , int iLength)   //  recevied ->  Display(pointer , value)
{
   int iCnt = 0 ;
   int iSum = 0 ;

   for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
   {
        iSum = iSum + Arr[iCnt] ;
   }

   return iSum ;
}


int main()
{
    int *ptr = NULL ;
    int iSize = 0 ;
    int iCnt = 0 ;
    int iRet = 0 ;

    printf("Enter number of element you want :\n");
    scanf("%d",&iSize);

    //step1 : create memory
    ptr = (int *)malloc(sizeof(int)*iSize);
    // isize = 5 
    //Ex: sizeofint=4 bytes (4*5(size of array))== 20 allocated 20 bytes 
    // (int *) fro typecasting 
 
     //step2 : use the memmory
    printf("Enter element of Array :\n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Summation(ptr , iSize);
    printf("Addition of elemant is : %d\n",iRet);

    //step3 : free the memory
    free(ptr);

    return EXIT_SUCCESS;    
}