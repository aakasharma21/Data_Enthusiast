#include<iostream>
using namespace std;

// Money Contribution for Farewell of Class 12 th students
class C11th; // forward declaration of Class C11th so that complier don't show error.
class C10th
{
    int no_of_students;
    float money_contribution;
    friend void fun(C10th,C11th);
    
    public:
    void set_data()
    {
        cout<<"Enter the total no of students in Class 10th: ";
        cin>>no_of_students;
        cout<<"\nMoney contribution from each student of Class 10th is: Rs";
        cin>>money_contribution;
        cout<<endl;

    }
    void show_data()
    {
        cout<<"\nTotal no of students in class 10th: "<<no_of_students;
        cout<<"\nMoney contribution from each student of Class 10th is: Rs"<<money_contribution;
    }


};

class C11th
{
    int no_of_stud;
    float money_contri;
    friend void fun(C10th,C11th);
    public:
    void input()
    {
        cout<<"Enter the total no of students in Class 11th: ";
        cin>>no_of_stud;
        cout<<"\nMoney contribution from each student of Class 11th is: Rs-";
        cin>>money_contri;
        cout<<endl;
    }
    void output()
    {
        cout<<"\nTotal no of students in class 11th: "<<no_of_stud;
        cout<<"\nMoney contribution from each student of Class 11th is: Rs-"<<money_contri;
    }

};

void fun(C10th c,C11th C)
{   int temp;
    temp=(c.no_of_students * c.money_contribution)+(C.no_of_stud * C.money_contri);
    cout<<"\nOverall contribution from students of class 10th and 11th: Rs";
   // temp=(c.no_of_students * c.money_contribution)+(C.no_of_stud * C.money_contri);
    cout<<temp<<endl;


}


int main()
{
    C10th c1;
    C11th C1;
    c1.set_data();
    C1.input();
    c1.show_data();
    C1.output();
    fun(c1,C1);

    return 0;
}