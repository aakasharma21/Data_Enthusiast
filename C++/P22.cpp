// fibonacci series - 1 1 2 3 5 8 13 21 34 55 89...........  by Recursion method.

#include<iostream>
using namespace std;

int fibo(int); // fnc declaration

int fibo(int a) // fnc definition
{   
    if (a<=1)         // <--------- Base Case
{
    return 1;

}

else     // <--------- Recursive Case

   { 
     return fibo(a-1)+fibo(a-2);      // Recursion 
   }



}
int main()
{
    int l;
    cout<<"Enter the length of fibonacci series: ";
    cin>>l;
    cout<<endl;
    cout<<"the Fib series is:  ";
    for (int i = 0; i<l; i++)
    {
        cout<<fibo(i)<<" ";
    }
    
    //fibo(l); // fnc calling
    return 0;
}