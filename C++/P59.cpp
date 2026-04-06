
// Concept of Pointer and Reference variable (revision)

#include<iostream>
#include<cstdlib>
using namespace std;


int main()
{
    system("cls");
    
    int x=10; // x is normal variable
    int &y=x; // y is reference variable and we cannot alter reference variable
    int *ptr; // ptr is a pointer variable and we can alter address by altering pointer variable
    ptr=&x;
    cout<<"Value of variable is: "<<x<<endl;
    cout<<"Address of variable is: "<<&y<<endl;
    cout<<"Address of variable via pointer is: "<<++ptr<<endl;
    cout<<"Value of *ptr is: "<<*ptr<<endl;

    return 0;
}