// this is a single line comment 
/*This is a multi line comment 
method in C++
*/

// #include<iostream>
// int main()
// {
//    std::cout<<"Hellow world";
//     return 0;
// }
#include"iostream"
#include"cstdlib"
using namespace std;
int sum(); // function declaration
int a=6, b=10; // Global variable declaration
int main()
{   system("cls");
    int a=4, b=6; //local variables of main() function

cout<<"sum of no is : "<<sum(); // function call
return 0;
}

int sum() // function definition
{
    int sum1;
    sum1 = a+b;
    return sum1;

}

/* Note-- In program prioprity will be given to local variable of function, 
if local and global are of same name and type.
*/ 

// Note-2 Program always execute from main() function.






