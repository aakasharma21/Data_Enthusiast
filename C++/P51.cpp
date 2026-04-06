#include<iostream>
using namespace std;


class A
{
    private:
    int a;

    public:
        void set_data(int x)
        {   a=x;
            cout<<"\nthe vaue of a is: "<<a<<endl;
        }
};

class B: public A
{
    public:
        void cpy_data(int y)
        {
            set_data(y);
        }
};

class C: public B
{
    public:
     void get_data(int z)
     {
        set_data(z);
     }
};



int main()
{   int val;
    cout<<"enter any numerical value of your choice: ";
    cin>>val;
    A *p,obj1;    // use of object pointer
    p=&obj1;

    B *q, obj2;   // use of object pointer
    q=&obj2;

    C *r,obj3;    // use of object pointer
    r=&obj3;

    p->set_data(val);
    q->cpy_data(val);
    r->get_data(val);
    
    return 0;
}