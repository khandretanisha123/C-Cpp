#include<stdio.h>
#include<stdlib.h>

float Average( int Arr[]  , int iLength)
{
   int iCnt = 0 ;
   int iSum = 0 ;

   for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
   {
        iSum = iSum + Arr[iCnt] ;
   }

   return ((float)iSum/(float)iLength) ;
}

int main()
{
    int *ptr = NULL ;
    int iSize = 0 ,iCnt = 0;
    float fRet = 0.0f ;

    printf("Enter element you want :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter element :\n");
    for(iCnt = 0 ; iCnt <iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr , iSize);
    printf("Average is :%f",fRet);

    free(ptr);

    return EXIT_SUCCESS;
}
