// *********** Pointers in C++ **************

// Pointer is a data type which holds the address of other data types.

#include<iostream>
using namespace std;


int main()
{   int a =5;
    int b=6;
    // &(Ampersand symbol) --> It is called (Address of) operator which return address of variable.

    int* p=&a; // int* represent pointer data type and 'p' is a pointer type variable which holds the address of a;
    cout<<"the address of a is: "<<p<<endl;
    cout<<"the address of a is: "<<&a<<endl;

    // '*' ---> It is called dereferencing operator which return the actaul value stored in particular address.
    
    cout<<"the value stored in pointer p is: "<<*p<<endl<<endl;
    //** pointer to pointer-------
    int** q=&p; // int** is a pointer to pointer declaration in which a pointer holder the address of another pointer.
    cout<<"the address of pointer p in memory is: "<<q;

    return 0;
}