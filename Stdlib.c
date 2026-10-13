#include<stdio.h>
#include<stdlib.h>

int main(){

    int iNo = 0;

    printf("Enter Number : \n");
    if(scanf("%d",iNo)!=1){

        printf("Enter Number is Invalid");
        return EXIT_FAILURE;

        ////////////////////////////////////////////////////////////////////////
        //
        //  if block is true if we give the non interger input and  
        //  execution is stop it out from the main block
        //  
        //  EXIT_FAILURE = -1 ;
        ///////////////////////////////////////////////////////////////////////

    }
    else{
        printf("Enter number is valid");
        return EXIT_SUCCESS;

        ///////////////////////////////////////////////////////////////////
        //
        //  else block get true if we give interger value 
        //
        //  EXIT SUCCESS = 0;
        //////////////////////////////////////////////////////////////////
    }
}