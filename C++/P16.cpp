//Functions & Function Prototypes in C++-----------

// FUnctions are the set of instructions or a block of code to perform particualr operation.
// Functions provide reusability of code, better memory management, improves readability of code.

/*
>> Function definition - it is a definition of function which has set of code.
>> Function call - It is call of function where the function definition is being called.
>> Function prototype/ declaration - It is declaration of function.

Functions are the main part of top-down structured  programming. We break the code into small pieces 
and make functions of that code. Functions help us to reuse the code easily.

*/

#include<iostream>
using namespace std;

// Function prototype
// datatype function-name (arguments);

// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 

int sum(int, int); //--> Acceptable -- this is function declaration/prototype.
// void g(void); //--> Acceptable 
void g(); //--> Acceptable 

int main()
{
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    
    cout<<"The sum is "<<sum(num1, num2); // here sum(num1, num2) is a calling of function.
    g(); //here g() is a calling of function.
    return 0;
}

int sum(int a, int b)
{
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a+b;
    return c;
}

void g()
{
    cout<<"\nHello, Good Morning";
}
