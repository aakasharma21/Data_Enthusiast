// enum in C++ -----------------------------

/*

In C++, an enum (short for enumeration) is a user-defined type consisting of a set of named integral constants. 
It’s a handy way to assign names to numeric values, making the code more readable.

*/
#include<iostream>
using namespace std;

enum ch{A,H,S,V}; // Since we can decalre only one enum inside main() function.

int main()
{
    enum name{Aakash,Harry,Shubham,Vishal};
    cout<<Aakash<<endl; // enum stores numeric values in form of string or character, like 0 for first name , 1 for second name and so on in a order.
    cout<<Harry<<endl;
    cout<<Shubham<<endl;
    cout<<Vishal<<endl<<endl<<endl;

    ch c1=A;
    ch c2=H;
    ch c3=S;
    ch c4=V;

 cout<<c1<<endl; 
 cout<<c2<<endl; 
 cout<<c3<<endl; 
 cout<<c4<<endl;
    return 0;
}


