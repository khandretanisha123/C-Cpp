
/*
    Generic function used because 
*/

#include<iostream>
using namespace std ;

template <class T>

class Number
{
    public:
        T iNo1 ;
        T iNo2 ;

        Number(T A , T B)
        {
            iNo1 = A ;
            iNo2 = B ;
        }

        T Addition()
        {
            T Ans ;
            Ans = iNo1 + iNo2 ;
            
            return Ans ;
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


    Number <int> *nobj = new Number <int> (iValue1,iValue2);
    // we have to mention data type here 

    cout<<"Addition is :" <<nobj->Addition()<<endl ;

    return EXIT_SUCCESS ;

}