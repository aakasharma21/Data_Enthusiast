// call by reference

// #include<iostream>
// #include<cstdlib>
// using namespace std;

// int change(int &a, int &b);
// int change(int &a, int &b)
// {
//     a++;
//     b++;
//     return a;
//     return b;
// }

// int main()
// {   int x,y;
//     system("cls");
//     cout<<"enter any two no: "<<endl;
//     cin>>x;
//     cin>>y;
//     cout<<endl<<"x="<<x<<"  & y="<<y;
//     change(x,y);
//     cout<<endl<<"The new values of x is "<<x<<endl<<"The new value of y is "<<y;

    
//     return 0;
// }

// call by pointer

#include<iostream>
#include<cstdlib>
using namespace std;

int change(int *a, int *b);
int change(int *a, int *b)
{
    *a=*a+1;
    *b=*b+1;
  
    return *a;
    return *b;
}

int main()
{   int x,y;
    system("cls");
    cout<<"enter any two no: "<<endl;
    cin>>x;
    cin>>y;
    cout<<endl<<"x="<<x<<"  & y="<<y;
    //cout<<endl<<"Address of x is "<<&x<<endl<<"Address of y is "<<&y;
    
    change(&x,&y);
    cout<<endl<<"The new values of x is "<<x<<endl<<"The new value of y is "<<y;

    
    return 0;
}