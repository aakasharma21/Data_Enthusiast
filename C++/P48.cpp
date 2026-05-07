#include<iostream>
using namespace std;


int main()
{   char ch;
    cout<<"enter any character of your choice:q";
    cin>>ch;
    cout<<endl;
    switch (ch)
    {
    case 'a': cout<<"Hellow Aakash Sharma"; break;
    case 'r': cout<<"Hellow Radhika Sharma"; break;
    case 's': cout<<"Hellow Sunita Sharma"; break;
    case 'h': cout<<"Hellow Hansraj Sharma"; break;
    
    default:
        cout<<"Not a valid character";
        break;
    }


    return 0;
}