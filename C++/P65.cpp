#include<iostream>
#include<cstdlib>
using namespace std;

class user
{   
    public:
        user()
        {
            cout<<"Hi, I am user and a constructor in itself"<<endl;

        }

        user(user &)
        {
            cout<<"\nHi I am copy constructor\n";
        }

        ~user()
        {
            cout<<"\nHello I am destructor";
        }

};
int main()
{
    system("cls");
    user u1,u2,u3(u1);
    return 0;
}