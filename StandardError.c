#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Addition 
//  Input           :   Integer, Integer 
//  Output          :   Integer
//  Description     :   Performs addition
//  Date            :   12/10/2026
//  Author          :   Tanisha Pramod Khandre
//
///////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     // Business Logic

    return iAns;
}


int main(){

    int iValue1=0 ,iValue2=0, iresult=0;

    printf("enter first number : \n");
    if(scanf("%d",&iValue1) !=1)
    {
        fprintf(stderr,"Unable to proceed asInput is inavlid\n");

        return EXIT_FAILURE;

        ////////////////////////////////////////////////////////////////////////
        //
        //  if block is true if we give the non interger input and  
        //  execution is stop it out from the main block
        //  
        //  EXIT_FAILURE = -1 ;
        ///////////////////////////////////////////////////////////////////////
    }

    printf("enter second number : \n");
    if(scanf("%d",&iValue2) !=1)
    {
        fprintf(stderr,"Unable to proceed asInput is inavlid\n");

        return EXIT_FAILURE;
    }

    iresult = Addition(iValue1,iValue2) ;   

    
    printf("Addition is : %d\n ",iresult );

    return EXIT_SUCCESS;

}