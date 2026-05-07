//Reference variables and type casting in C++

#include"iostream"
#include"conio.h"
using namespace std;
int a=10; // global variable declaration 
int main()
{
   int a=5;
   float b= 5.5555555L;
   long double c= 5.55;
   cout<<a<<endl<<b<<endl<<c<<endl;
   cout<<sizeof(a)<<endl<<sizeof(b)<<endl<<sizeof(c); // sizeof operatror is used to calculate size of data type of variable
   
   // ******* Type-casting or Type-conversion *************************************
   
   int x=int(b); // method 1 of type conversion float to int
   int y=(int)b; // method 2 of type conversion float to int
   cout<<endl<<x<<endl<<y;
   cout<<"\n value of global variable is  "<<::a; // method to use global variable in local function

// **********Reference Variable *****************************

int &ref = a; // ref is a "Reference variable" which is pointing to "a" or we can say "ref" variable is a nick name of "a".
cout<<"\nvalue of reference variable is "<<ref;
cout<<"\n adderess of ref vaiable in memory(RAM) is "<<&ref; // "&" is ampersand or address operator.


    return 0;
}
