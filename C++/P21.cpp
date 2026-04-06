// Recursions & Recursive Functions in C++  -----------------

/*
Recursion in programming is when a function calls itself in order to solve a problem. 
This technique is used to break down complex problems into simpler ones, making it easier to solve them. 
Every recursive function has two parts: the base case, which stops the recursion, 
and the recursive case, which calls the function itself.

*/

#include <iostream>
using namespace std;

int factorial(int n)  // factorial of a no. by using recursion technique.
{
    if (n <= 1)  // # Base case
    {  
        return 1;
    
    } 
    else  // # Recursive case

        return n * factorial(n - 1); // here factorial function is calling itself or calling of "factorial();" is decalred inside itw own definition.
    
}

int main() 
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}


