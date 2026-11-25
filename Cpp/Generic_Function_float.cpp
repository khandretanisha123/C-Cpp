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
    float iValue1 = 0.0f ;
    float iValue2 = 0.0f ;

    cout <<"Enter First number \n";
    cin>>iValue1;

    cout<<"Enter Second number \n";
    cin>>iValue2 ;

    Number <float> *nobj = new Number <float> (iValue1,iValue2);

    cout<<"Addition is :" <<nobj->Addition()<<endl ;

    return EXIT_SUCCESS ;

}