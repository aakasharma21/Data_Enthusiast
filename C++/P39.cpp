/*

Operator Overloading-

In c++ the arithmetic operators only works with primitive data 
types i.e. pre-defined dataypes(int, float, char, etc.) so In 
order to perform arithmetic calculation on non primitive data types
i.e. User-defined dataypes we need concept of Operator Overloading.

Operator overloading is a feature of Object-Oriented Programming 
(OOPS) that allows us to give a special meaning to an existing 
operator when it is used with user-defined data types (objects).

Operator overloading makes operators work on objects.

*/

#include<iostream>
using namespace std;


class Add
{   
    private:
    int a,b;

    public:
    void input(int x, int y)
        {
            a=x;
            b=y;
        }
    
    void output()
        {
            cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
            cout<<"The sum is: "<<a+b<<endl;
        }

    Add operator +(Add a3) // Operator overloading
        {   
            Add temp;
            temp.a=a+a3.a;
            temp.b=b+a3.b;
            return temp;  

        }

};
int main()
{   
    Add a1,a2,a;
    a1.input(5,10);
    a2.input(20,30);
    a1.output();

    /* METHOD-1 :
    a=a1.Addition(a2);
    */

    // METHOD-2 :
    a=a1+a2; // This means a1 calls +() function and a2 is passed 
            //as argument in +() function---> This is operator 
            //overloading.
    
    a.output();
    return 0;
}