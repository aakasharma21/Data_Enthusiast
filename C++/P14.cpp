// Unions in C++ -----------------

// Unions are also user defined data type as similar to structure but it provides better memory management.
/*
Union vs Structure

In case of structure,  total memory of structure will be assigned to RAM , eg:

struct emp 
{
    int emp_Id; //4 bytes
    int age;  // 4 bytes
    float salary; // 4 bytes
    
}; 

Here the structure will hold total memory of 4+4+4=12 bytes in RAM 

**** In Union, we can use only one data type at a time and the maxium size of data type among all  will be assigned to RAM i.e = 4 bytes only.

*/



#include<iostream>
using namespace std;

 union Money
{
    int cash;
    float upi;
    char bank;
};

int main()
{   
   union Money P1; // P1 is variable name of data type - "union Money"
   P1.cash=10;
   P1.bank='B';
   P1.upi=544; // RAM will provide memory only to "P1.upi" as it is latest declared in program(Top to bottom).
   // Note** - As this is a union type user defined data-type so P1 can only access one data-type of union money at one time.
   
   cout<<"Choose you payment method: "<<endl;
   cout<<P1.cash<<endl; // we will get garbage value of P1.cash and P1.bank as it is overwritten by P1.upi because in Union one varibale of union can be access at one time for better memory management.
   cout<<P1.bank<<endl;
   cout<<P1.upi<<endl;
   cout<<P1.cash<<endl;
   



   return 0;

}