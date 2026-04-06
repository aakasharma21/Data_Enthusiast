/* ---------------------------- ALL ABOUT FUNCTIONS -------------------------*/

#include<iostream>
#include<cstdlib>
using namespace std;

// Takes nothing returns nothing -------------------

// void sum();
// int main()
// {
//     sum();
//     return 0;
// }

// void sum()
// {
//     int a,b;
//     cout<<"enter two no. for addition: "<<endl;
//     cin>>a>>b;
//     int c=a+b;
//     cout<<"\n The sum is "<<c<<endl;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

// Takes something returns nothing --------------

// void sum(int x, int y);

// int main()
// {   int a=10,b=30;
//     sum(a,b);
//     return 0;
// }

// void sum(int x, int y)
// {   int c =x+y;
//     cout<<"\n The sum is "<<c<<endl;
//     cout<<"\n Hello World!!"<<endl;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Takes nothing returns something --------------



// int main()
// {   int sum();
//     cout<<sum();
//     return 0;
// }

// int sum()
// {   int a,b;
//     cout<<"enter two no. for addition: "<<endl;
//     cin>>a>>b;
//     return (a+b); // due to "return" statement , the control of program/cursor will be passed to main where sum() is called therefore lines of code written after "return" statement will be not considered.
//     //cout<<"\n Hello World!!"<<endl;
// }


// Takes something and returns something

int main()
{   system("cls");
    int x,y;
    cout<<"enter two no. for addition: "<<endl;
    cin>>x>>y;
    int sum(int a,int b); //declarion
    cout<<sum(x,y);  //call
    return 0;
}

int sum(int a,int b) //definition
{   int sum;
    sum=a+b;
    return sum; // due to "return" statement , the control of program/cursor will be passed to main where sum() is called therefore lines of code written after "return" statement will be not considered.
    //cout<<"\n Hello World!!"<<endl;
}

