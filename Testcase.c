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

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);      

    printf("Addition is : %d\n",iResult);

    return 0;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input1      Input2      Output
//-------------------------------------------------
//      10          11          21
//      11          0           11
//      0           11          11
//      20          -9          11
//      -9          20          11
//      -20         -11         -31
//-------------------------------------------------
///////////////////////////////////////////////////