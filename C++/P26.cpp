// Application of Pointers as a call by reference .

#include<iostream>
using namespace std;

int swap(int* x, int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
    

}
int main()
{   int a=2;
    int b=6;
    cout<<" the value of a and b before swapping is: "<<a<<"\t"<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping the value of a is: "<<a<<endl;
    cout<<"After swapping the value of b is: "<<b<<endl;
    return 0;
}