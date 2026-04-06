// concept of Constuctor in C++

/*

--> Default Constructor - Takes nothing
--> Parametrized Constructor - Takes something
--> Constructor Overloading - more than one constructor is created
--> Copy Constructor

Note: When the object is created constructor is called automatically
        irrespective of user has created a constructor manually or not.

    The Compiler calls its own default Constrctor and copy constructor automatically when objects is created 
    and no manuall constructor is created by user

*/
 
#include<iostream>
using namespace std;

class Constructor
{
    private:
    int a,b;

    public:

    // ********** CONSTRUCTOR OVERLOADING *******************
    
    Constructor() // default Constructor
    {
        cout<<"Hello I am Constructor and my name is same as of my class\n"<<endl;
    }

    Constructor(int x, int y) // parameterized Constructor
    {   
        a=x;
        b=y;
        cout<<"\n Hello I am Parametrized Constructor:  ";
        cout<<"The value of a and is: "<<a<<" and "<<b;
    }

    Constructor(Constructor &C) // parameterized Constructor
    {   
        a=C.a;
        b=C.b;
        cout<<"\n\n Hello I am Copy Constructor:  ";
        cout<<"The value of a and is: "<<a<<" and "<<b<<endl;
    }

    ~Constructor() // will execute 3 times bcoz 3 objects will get destroyed.
    {
        cout<<"\n Hi, I am destructor and I executes only when objects get destroyed and I am (Takes Nothing, Returns Nothing) type"<<endl;
    }



};
int main()
{
    Constructor C1,C2(5,10); // Constructor get called automatically whenever the object is created
    Constructor C3(C2); // Due to declaration of C3, copy constructor will be called.
    return 0;
}