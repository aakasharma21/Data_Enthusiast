// Call by Value & Call by Reference in C++ --------------------

/*

Call by Value in C++ :

Call by value is a method in C++ to pass the values to the function arguments. 
In case of call by value the copies of actual parameters are sent to the formal parameter, 
which means that if we change the values inside the function that will not affect the actual values.

Call by Pointer in C++ :

A call by the pointer is a method in C++ to pass the values to the function arguments. 
In the case of call by pointer, the address of actual parameters is sent to the formal parameter, 
which means that if we change the values inside the function that will affect the actual values.


Call by Reference in C++ :

Call by reference is a method in C++ to pass the values to the function arguments. 
In the case of call by reference, the reference of actual parameters is sent to the formal parameter, 
which means that if we change the values inside the function that will affect the actual values.

*/ 

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b)
{ 
    int temp = a;           
    a = b;               
    b = temp;             
}

// Call by reference using pointers
void swapPointer(int* a, int* b)
{ 
    int temp = *a;       
    *a = *b;         
    *b = temp;       
}

// Call by reference using C++ reference Variables

void swapReferenceVar(int &a, int &b)
{ 
    int temp = a;            
    a = b;               
    b = temp;            
    
}

int main(){
    int x =4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
