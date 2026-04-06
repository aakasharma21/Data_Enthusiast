// *******************   For, While and do-while loops in C++ ********************
#include"iostream"
using namespace std;
int main()
{
    // For loop syntax ----

    /*
        for(intialization; Condition; updation)
        {
                loop body;
        }
    
    */

   // While loop syntax ----
/*
        while(Condition)
        {
                loop body;
                updation(**if required or as per choice);
        }
    
    */

   // do-While loop syntax ----
/*
        do
        {
            loop body;
            updation(**if required or as per choice);

        }while(Condition);
    
    */

//    for (int a=1;true;a++)   // This is example of infinite for loop, Note : similar for while /do-while
//     {
//         cout<<a<<endl;
//     }
    int i=1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (false); // Note - In do-while, loop will execute minimum one time irresepective of condition whether it si true or false.
    int a=1;
    cout<<"\n Table of 6 is below:"<<endl;
    do
    {
        cout<<6*a<<endl;
        a++;
    } while (a<=10);
    
    return 0;
}
