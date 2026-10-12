
//////////////////////////////////////////////////////
//  
//  Input is given by user through scnaf 
//
//  Here we take initial value as 0 
//  because  it prevent from getting null values 
//  or goes under garbage 
//
//
/////////////////////////////////////////////////////



#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;      // Business Logic

    printf("Addition is : %d\n",iResult);

    return 0;
}