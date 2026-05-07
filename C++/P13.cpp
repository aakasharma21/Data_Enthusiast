// Structures in C++ -------------

// Structure is a user defined data type which can hold variables of diffferent data type, eg. - students class record, employee record, etc.


#include<iostream>
using namespace std;

// Structures in C++

// struct emp // we have declared a structure with name emp - employee
// {
//     string name;
//     int emp_Id;
//     int age;
//     float salary;
    
// };

typedef struct emp // typedef is keyword in C++  which gives an alias name to complex data types like structure, union etc.
{
    string name;
    int emp_Id;
    int age;
    float salary;
    
}ee; // here "ee" is a another name of struct emp data type by using "typdef" keyword.


int main()
{   
    struct emp E1;
    struct emp E2;

    ee E3; // E3 is another employee -3 .
    E3.name="Harry";

    E1.emp_Id=10001;
    E1.name="Aakash Sharma";
    E1.age=27;
    E1.salary=2400000;
    cout<<"The Employee 1 details are below: "<<endl;
    cout<<"Emp_Id: "<<E1.emp_Id<<endl;
    cout<<"Emp_Name: "<<E1.name<<endl;
    cout<<"Emp_Age: "<<E1.age<<endl;
    cout<<"Emp_salary: "<<E1.salary<<endl<<endl;
    cout<<"Emp3_Name: "<<E3.name<<endl;

    
    return 0;
}