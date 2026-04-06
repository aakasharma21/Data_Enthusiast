#include<iostream>
using namespace std;

class Math
{
    private:
    int a,c,d;

    public:
    void input(int x)
    {
        a=x;
        
    }
    void output()
    {
        /* cout<<d; --> This will give garbage value because the output is stored in M3 object in form of temp which is returned to M3 and temp has data in 'c' variable */
        cout<<endl<<c;
    }

    Math operator*(Math M) // function with operator_name
    {
        Math temp;
        temp.c=M.a*a; // object temp has call 'c' variable of class Math and stored the product in 'c'.
        return temp; // temp is returned to M3
    }
};
int main()
{   int p,q;
    Math M1,M2,M3;
    cout<<"Enter two numbers for multiplication: "<<endl;
    cin>>p>>q;
    M1.input(p);
    M2.input(q);
    M3=M1*M2; //OR// M3=M1.operator*(M2)

                   /*This line means that M1 has called function '*()' 
                   and M2 is passed as an argument in it and 
                   whatever is returned by function - *() has stored in M3 */
                   
    
    M3.output();

    return 0;
}