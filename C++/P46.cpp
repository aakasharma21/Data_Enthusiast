// Product of two numbers without using multiply operator using Recurrsion

#include<iostream>
using namespace std;

int product(int x, int y)
{   int sum=x;
    if(x==0||y==0)
    return 0;

    else
    return sum + product(x,y-1);
    
}


int main()
{
    int a,b;
    cout<<"enter any two no to be multiply"<<endl;
    cin>>a>>b; cout<<endl;
    cout<<product(a,b);

    
    return 0;
}




