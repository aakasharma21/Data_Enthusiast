// Strcuture using function concept in C language

#include<iostream>
using namespace std;          

struct tcs  // structure definition (global)
{
    int emp_id;
    char name[20]; 
    char branch[20]; 
    char grade[5];    

}e1,e2; // global variables of struct          

tcs input() // input is function of tcs(struct) type             
{   tcs e; // e is a local variable of tcs(struct) data type         
    cout<<"Enter the employee details: "<<endl;
    cout<<"Employee ID: ";  
    cin>>e.emp_id;
    cout<<"\nEmployee Name: ";
    cin>>e.name;
    cout<<"\nDeputy Branch: ";
    cin>>e.branch;
    cout<<"\nGrade: ";
    cin>>e.grade;
    cout<<endl;
    return e;
}

void display(tcs e2)
{
    cout<<"The details of Employee is: "<<endl;
    cout<<e2.emp_id<<endl<<e2.name<<endl<<e2.branch<<endl<<e2.grade<<endl;
}

int main()
{
    e1=input();   
    display(e1);   
    return 0;           
}