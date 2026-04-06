
// Arrays & Pointers Arithmetic in C++

// Array is a collection of elements or variables of same data type ........


#include<iostream>
using namespace std;


int main()
{
    int student_marks[]= {45,58,74,82,89,97};
    cout<<"The marks of studnets is given below:\n";
    //int x=sizeof(student_marks) // it will return 6*4=24bytes since it array of 6 elements and each elements of int type so the sizeof() func only calculates size in bytes.
    int x=sizeof(student_marks)/sizeof(student_marks[0]);
    
    for (int i = 0; i < x; i++)
    {
        cout<<"The marks of student "<<i<<" -- "<<student_marks[i]<<endl;
    }

    // int a[10];

    // cout<<"Enter the 10 elements in array: "<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"enter the "<<i<<" element:"<<endl;       // Entering the elements by Users at run time.
    //     cin>>a[i];
    // }
    // a[5]=50; // Changing the element of array at position "5".........
    
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"list of elements: "<<a[i]<<endl;

    // }


    // Pointers in case of array---------------

        int* p=student_marks; // Note - In case of array type variable we don't need to introduce "&(Ampersand)" as by default the pointer is at "0" index of array.
        cout<<" \nThe value of pointer is: "<<*p<<endl; // pointer points at 0 index of array and *p return element at 0 index.
        cout<<endl<<p<<endl; // This will return address of 0 index by default.
        cout<<endl<<p<<endl; // This will return address of 0 index by default.
        *p++; // post incriment of p by 1 , now p is at 1st index.
        cout<<*p; // now it will return element of 1st index. 
        cout<<endl<<p<<endl; // This will return address of 1st index by default.
    
    return 0;
}