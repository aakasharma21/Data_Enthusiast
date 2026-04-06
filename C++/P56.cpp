/*

Templates in C++ 

To define template in c++ , we use template keyword.

In C++, a template is a powerful feature that allows you to write
generic programs—code that works with any data type (int, float, 
double, user-defined types,etc.) without rewriting it.

🔹 Why use Templates?

# Avoids code duplication
# Increases code reusability
# Ensures type safety at compile time
# Makes programs flexible and scalable

🔹 Types of Templates in C++

# Function Template
# Class Template

Syntax:

template<class A> A fun(A var1, A var2) // here A will act as user 
                                            defined data type

*/

#include<iostream>
using namespace std;

template<class X, class Y>
class Swapdata
{
    private:
        X x;
        Y y;

        
        public:
            X setdata(X a, Y b)
            {   x=a;
                y=b;

                // // swapping-
                // temp=x;
                // x=y;
                // y=temp;
            }

            X getdata()
            {
                 cout<<"\n values after swapping:"<<endl;
                 cout<<"x= "<<x<<"  "<<"y= "<<y;   
            }
};
int main()
{   
    int p;
    string s;
    // cout<<"Enter any two no: ";
    cin>>p>>s;
    // cout<<"\n Values before swapping"<<endl;
    // cout<<"x= "<<p<<"  "<<"y= "<<q;
    Swapdata<int,string> s1;
    s1.setdata(p,s);
    s1.getdata();
    
    return 0; 
}

// Alternative of template:

/* 
#include<iostream>
using namespace std;

class data
{
    private:
    int x;
    string y;

    public:
            void setdata(int a, string b)
            {
                x=a;
                y=b;
            }

            void getdata()
            {
                cout<<"\n Your data is here: "<<endl;
                cout<<"x= "<<x<<"  "<<"y= "<<y;    
            }
};
int main()
{   int p;
    string q;
    cout<<"Enter a number: ";
    cin>>p;
    cout<<"\n Now enter a string: ";
    cin>>q;
    data d1;
    d1.setdata(p,q);
    d1.getdata();


    
    return 0;
}
    
*/   

   
    


