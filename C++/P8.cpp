//***********C++ Control Structures, If Else and Switch-Case Statement****************

// C++ control structures:

    // Sequence structure - No condition present in code, code will execute step by step.
    // Selection structure - selection will be done on basis of condition present in code. 
    // Loop structure - both condition as well as loop will execute in code.

#include"iostream"
using namespace std;
int main()
{   //***** Selection structure by using if- else if - else Ladder and by using switch case 
    int age;
    cout<<"Enter your age and check you eligibility"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"\n Congratulations !! , You are eligibile"<<endl;
    }
    else if ((age>=10)&&(age<18))
    {
        cout<<"\n Sorry !! , You are not eligible"<<endl;
    }
    else
      cout<<"\n Invalid Input"<<endl; 
    char ch;
    cout<<"\nenter the car name of your choice"<<endl;
    cin>>ch;

//***** Selection structure  by using switch case  *************************

switch (ch)
{
case 'T':
    cout<<"Welcome to TATA- India"<<endl;
    break;

case 'H':
    cout<<"Welcome to Honda"<<endl;
    break;

case 'h':
    cout<<"Welcome to Hyundai-India"<<endl;
    break;

default:
    cout<<"Invalid Input"<<endl;
    break;
}
    
    return 0;
}


