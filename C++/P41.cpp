// Friend function concept in C++ ----------------------------------

/*
 Key Points:

>> Friend function is not a member function of class, it is just a friend of class which can access it member indirectly.
>> It must be declare inside class followed by syntax: "friend" data_type class_name();  
>> Since it's not a member of class so we can decalre it anywhere inside class irrespective of private/public/protected access specifier.
>> It must be define outside of class like a normal function.
>> It doen't have caller object or it don't need object to get called.
_____________________________________________________________________________________________________________________________________

Key advantages/importance of friend function concept in programming ----

1.) A Friend function can be a friend of more than one class which helps it to access and use multiple classes member simuntaneously together.






*/


#include<iostream>
using namespace std;
class B; //This is called forward declaration so that compiler don't show error.

class A
{
    int a; // by default every member of class is private
    public:
    friend void fun(A,B); 
    void input(int x)
    {
        a=x;
    }
};

class B
{
    int b;
    public: 
    friend void fun(A,B);
    void input(int y)
    {
        b=y;
    }
};

void fun(A ob1,B ob2) // frined function as a friend of multiple class.
{
    cout<<"The sum is "<<ob1.a+ob2.b; 
}


int main()
{
    A o1;
    B o2;
    o1.input(10);
    o2.input(20);
    fun(o1,o2);
    return 0;
}