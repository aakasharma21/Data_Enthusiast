// Strcuture using function concept in C++ language
// C++ provides Encapsulation principle as a OOP's concept.

/* Encapsulation- It is an act or way of combining/binding properties
and methods(functions) together of a same entity together. */ 


// In c++ we can define functions with variables in structure but in 'C' we can only define variables not functions.

/*
In C language, there was a high chance of data alterating/changing by user 
or other community who is using the program which leads to data corrupt and
compromised data security. 

To avoid this situation, OOP's concept was introduced and there we got three Access Specifiers.

Access specifiers in C++ play a crucial role in object-oriented programming (OOP). 
They determine the accessibility of class members (variables and methods) and enforce encapsulation, 
one of the fundamental principles of OOP. 

Here’s how each access specifier is typically used:

Public Access Specifier:

Usage: Members declared as public are accessible from outside the class.

Common Uses: Functions and variables that need to be accessed directly by other parts of the program or other classes.


Private Access Specifier:

Usage: Members declared as private are only accessible within the class itself.

Common Uses: Data and methods that should not be modified directly from outside the class, ensuring control over how data is accessed and modified.


Protected Access Specifier:

Usage: Members declared as protected are accessible within the class itself and by derived classes.

Common Uses: Data and methods that should be hidden from the outside world but need to be accessed in inherited classes.

*/

#include<iostream>
using namespace std;

struct tcs  // structure definition (global)

{   private:

    int emp_id;
    char name[20]; 
    char branch[20]; 
    char grade[5];

    public:

    void input() // input() is a member function of strcture tcs.
{
    cout<<"Enter the employee details: "<<endl;
    cout<<"Employee ID: ";
    cin>>emp_id;
    cout<<"\nEmployee Name: ";
    cin>>name;
    cout<<"\nDeputy Branch: ";
    cin>>branch;
    cout<<"\nGrade: ";
    cin>>grade;
    cout<<endl;
}

void display() // diaplay() is also a member function of strcture tcs.
{
    cout<<"The details of Employee is: "<<endl;
    cout<<emp_id<<endl<<name<<endl<<branch<<endl<<grade<<endl;
}

}e1; // global variable of struct



int main()
{   tcs e2;
   //  e2.emp_id=1000; // This is case of data alteration manually
    e1.input(); // way to access member function of structure.
    e1.display();

    return 0;
}