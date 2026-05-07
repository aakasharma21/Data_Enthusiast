// Static member variables and static member function in C++

/*
# Static member variable is independent of object and we can access/call
them without using object.

# Static member variable must be define outside the class
# Static member variable also called class variable.
# If static access variable is declared under private then we 
    need staic member function to access/use them outside the class

# Static member function can only access static member variables.
# Static member functions are used to access/call static member variables declared under private without the help of objects.

*/

#include<iostream>
using namespace std;

class Account
{
    private:
    float balance; // Instance member variable
    static float interest_rate; // declaration of static member variable

    public:

   static void input(float b) // definition of static member function     
   {   
        
        interest_rate=b;
        cout<<endl<<interest_rate;
    }
};

float Account:: interest_rate=4.5; // definition of static member variable

int main()
{
    // Account a1;
//    a1.input(5000.50);
    //cout<<Account:: interest_rate; // direct access of static member vairable without using object.
    Account:: input(3.66); // access of static member variable without object.  Syntax = Class_name :: function_call();
    return 0;
}