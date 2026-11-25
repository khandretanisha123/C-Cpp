#include<iostream>
using namespace std ;

class number
{
    public:
        int iNo1 ;              // Data memberr
        int iNo2 ;


        number(int A , int B)    // constructor
        {
            iNo1 = A ;
            iNo2 = B ;
        }

        int Addiion()               //Function
        {
            int iAns ;
            iAns = iNo1 + iNo2 ;

            return iAns ;
        }

};
int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    cout <<"Enter First number \n";
    cin>>iValue1;

    cout<<"Enter Second number \n";
    cin>>iValue2 ;

    number nobj(iValue1 , iValue2);

    cout<<"Addition is "<<nobj.Addiion()<<endl ;

    return EXIT_SUCCESS ;

}