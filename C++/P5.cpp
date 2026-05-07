#include"iostream"
#include "aakash"
using namespace std;
/*  << - this is insertion operator.
>> - this is extraction operator */ 

int main()
{   int a,b;
    //cout<<"Here aakash is a user define header file which is present in directory of VS code as file name aakash";
    cout<<"enter two no. to perform arithmetic operations/Logical operations/Rational operations\n";
    cin>>a>>b;
    cout<<"\n Addition of two no. a+b is "<<(a+b);
    cout<<"\n Subtraction of two no. a-b is "<<(a-b);
    cout<<"\n Multiplication of two no. a*b is "<<(a*b);
    cout<<"\n division of two no. a/b is "<<(a/b);
    cout<<"\n Mod of two no. a%b is "<<(a%b);
    cout<<"\n Addition of two no. a!=b is "<<(a!=b);
    cout<<"\n Comparison of two no. a>b is "<<(a>b);
    cout<<"\n Comparison of two no. a<b is "<<(a<b);
    cout<<"\n Comparison of two no. a>=b "<<(a>=b);
    cout<<"\n Post incriment of two no. a++ "<<a++;
    cout<<"\n Pre incriment of two no. ++a "<<++a;
    cout<<"\n Post decriment of two no. a-- "<<a--;
    cout<<"\n Pre decrimentof two no. --a "<<--a;
    cout<<"\n Condition check of two no. a and b "<<((a>b)?true:false);
    return 0;
}
// you can create a user defined headerfile make sure it must be present in directory.
/*  There are two types of header files
    1. System header files : it comes compiler
    2. User defined header files : written by user

*/