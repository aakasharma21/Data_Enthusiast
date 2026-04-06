
// Class and objects in C++
/*
Key Points:

1. Only a class can access it memeber variables and functions directly.
2. Any other function outside of class which is not a part of class can access only public member variables and functions of class with help of its object.
3. we can define member function of class outside its body/scope 
    but the declration of that function must be present inside class 
    and we have to make the function inline by using class name followed byscope resolution operator and then function.

Note: All concepts of class applicable to structures of C++ also.

*/


#include<iostream>
using namespace std;

class data
{
private:
    int a,b; // a and b are instance(means object) variables not class variables.
public:
    void input(int,int); // function declaration

    void show() // show() is inline instance member function since it is define under class
    {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    }
};

void data::input(int x, int y) // input() is also a instance(object) member function of class data, 
  {                             // since we are using this outside the scope of class so we need to make this inline by using " Class_name :: ".

    a=x, b=y;

  }                    



int main()
{   int p,q;
     data d1; // d1 is object of class-data
    cout<<"\n enter any two value two to store in directory:"<<endl;
    cin>>p>>q;
    d1.input(p,q); 
    d1.show();
    return 0;
}