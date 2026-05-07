/*******************  CGPA CALCULATOR *************************************/

// Points to make CGPA calculator

// 1. Enter total marks.
// 2. Enter marks obtained.
// 3. Overall percentage.
// 4. Your final CGPA is -.



#include"iostream"
#include"iomanip"
using namespace std;
int main()
{   float marks_obtained, total_marks, Percentage;
    float CGPA;
    cout<<"Enter the total marks: "<<endl;
    cin>>total_marks;
    cout<<"\nEnter the marks obtained out of total marks: "<<endl;
    cin>>marks_obtained;
    cout<<"\n ******** FINAL RESULT *********"<<endl;
    cout<<"Total Marks:"<<setw(10)<<total_marks<<endl;
    cout<<"Marks Obtained:"<<setw(10)<<marks_obtained<<endl;
    Percentage= ((marks_obtained)/(total_marks)) * 100;
    cout<<" \nYour overall percentage is: "<<setw(10)<<Percentage;
    CGPA = (Percentage)/9.50;
    if (CGPA>=10.00)
    {
        cout<<"\n Congratulations you have obtained 10.00 CGPA"<<endl;
        cout<<"***** Thanks for choosing our service ***************";
    }
    else
    cout<<"\n Your final CGPA is here: "<<setprecision(2) <<setw(10)<<CGPA<<endl<<"***** Thanks for choosing our service*******";

    return 0;
}
