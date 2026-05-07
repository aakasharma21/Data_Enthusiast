/*

Important Terms:

🔹 Early Binding (also called Static Binding) in Programming

Early binding means that the method or function call is decided 
at compile time, not at runtime.The compiler already knows which
function to call before the program runs.
_________________________________________________________________
To perform Late Binding we use concept of "Virtual function".
Virtual function is defined when we need to perform Method
overiding correctly in case of object pointer.

Simple Definition

A virtual function is a function that is called according to 
the object type at runtime, not the pointer type.

🧠 Why Virtual Functions Are Needed

Without virtual functions:
Function calls are decided at compile time (early binding)
Base class pointer calls base class function only

With virtual functions:
Function calls are decided at runtime (late binding)
Base class pointer can call derived class function

*/

#include<iostream>
using namespace std;

class A
{
    public:
         virtual void setdata()
        {
            cout<<"Hey, I am Parent Class"<<endl;

        }
};

class B: public A
{
        public:
            void setdata()
            {
                cout<<"Hey, I am child Class"<<endl;
            }
};

int main()
{       
        A *ptr,obj1;
        B obj2;
        ptr=&obj2;
        ptr->setdata();
        // obj2.setdata();
        // obj1.setdata();
    return 0;
}