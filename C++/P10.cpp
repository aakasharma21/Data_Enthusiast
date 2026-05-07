//Break and Continue Statements in C++********
#include<iostream>
using namespace std;


int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout<<i<<endl;
    // }

    // use of break keyword:----

    for (int i = 1; i <= 5; i++)
    {
        cout<<i<<endl;
       // break; // break is used to exit the loop or particular section of code in which it is declared.
        if(i==3)
        {
            break; // here the loop will exit when i==3 and it will print only 1 to 3.
        }
    }
    cout<<"\n\n";

    // use of continue keyword:----
    for (int j = 1; j <= 5; j++)
    {
        
       // continue is used to skip the loop at particular point where it is declared and then continue with rest of the loop.
        if(j==3)
        {
            continue; // continue; here the loop will skip where i==3 occurs and then continue with rest i.e. 4 to 5.
        }
        cout<<j<<endl;
    }
    
    return 0;
}