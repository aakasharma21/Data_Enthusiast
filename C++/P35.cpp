#include<iostream>
using namespace std;

class student
{
    private:
     
     int roll;  
     string name;    
     //char name[20];   
     
     public:

     void input(int x, string y)
    {
        roll=x;  
        name=y;    
    }

    void output()   
    {
        cout<<endl<<"Students details: "<<endl;    
        cout<<"Roll No. - "<<roll<<endl;     
        cout<<"Name - "<<name<<endl<<endl;   
    }
};


int main()   
{
    student s1,s2;
    s1.input(21,"Aakash"); // this means s1 is using input() function and values 21 and "Aakash" belongs/assign to s1 only not other object can use them.
    s1.output();
    s2.output(); // object s2 will show garbage values as s2 don't have any values assigned.


    return 0;
}