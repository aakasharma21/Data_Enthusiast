// Product of two numbers without using multiply operator.


#include<iostream>
using namespace std;
int product(int,int);
int product(int x, int y)
{
    int sum=0;
    for (int i = 0; i <y; i++)
    {   
        sum=sum+x;
        
    }

    cout<<"\n the final answer is:  "; 
    
    return sum;
    

}


int main()
{   int a,b;
    cout<<"enter any two no to be multiply"<<endl;
    cin>>a>>b; cout<<endl;
    cout<<product(a,b);

    return 0;
}