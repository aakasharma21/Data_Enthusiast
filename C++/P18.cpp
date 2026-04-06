
// call by reference method:

#include<iostream>
using namespace std;

// void update(int x, int y)// This will not update the actual parameters i.e a and b inside main().
// {   
//     ++x;
//     ++y;
//     cout<<"the new value of a is: "<<x<<endl;
//     cout<<"the new value of b is: "<<y<<endl;
    
    
// }

void update(int &x, int &y)// This will update the actual parameters i.e a and b inside main() because it's a call by reference.
{   
    ++x;
    ++y;
    cout<<"the new value of a is: "<<x<<endl;
    cout<<"the new value of b is: "<<y<<endl;
    
    
}


int main()
{
    int a=5;
    int b=6;
    // cout<<"Enter first no. "<<endl;
    // cin>>a;
    // cout<<"\n enter second no. "<<endl;
    // cin>>b;
    update(a,b);
    cout<<a<<endl<<b<<endl;
    

    return 0;
}


/*

#include<iostream>
using namespace std;


int main()          // Reference variable is an alias name of another variable which points the same memory location of its another variable 
{   
    int a =5;
    int &x=a;       // Here is 'x' is a refe. variable of a which hold the same memory location as of 'a' 
    cout<<"here is the result is:  "<<x;  
    x++;
    cout<<endl<<a;  
    return 0;
}

*/