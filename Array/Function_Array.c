// Array is not directly pass to function we required pointer 

#include<stdio.h>
#include<stdlib.h>

void Display(int *ptr)         //recevied in pointer  it also be wrritten as  (int ptr[])
{
    printf("%d\n",ptr);         // Address of 1st element of Array 

}

int main()
{
    int Arr[4] = {10,20,30,40};

    printf("%d\n",Arr);          // print Address of 1st element of array

    Display(Arr);          // it Send the Address

    return EXIT_SUCCESS ;

}