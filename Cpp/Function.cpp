#include<iostream>
using namespace std ;

int Addition (int iNo1 ,int iNo2)
{
    int iSum = 0 ;

    iSum = iNo1 + iNo2 ;

    return iSum ;
}
int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    int iRet = 0 ;


    cout <<"Enter First number \n";
    cin>>iValue1;

    cout<<"Enter Second number \n";
    cin>>iValue2 ;

    iRet = Addition(iValue1,iValue2);
    cout<<"Addition of the number is : "<<iRet;

    return EXIT_SUCCESS ;

}