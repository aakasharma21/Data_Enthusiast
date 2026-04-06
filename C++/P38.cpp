#include<iostream>
using namespace std;


int main()
{   cout<<"Welcome to the program to print you traingle"<<endl;
    int n;
    cout<<"Please enter the height of your triangle: ";
    cin>>n;
    int a;
    cout<<endl<<endl;
        for (int i=1; i<=n; i++)
    {       a=i;
        for (int j = 1; j<=i; j++)
        {   
            if(j>=a)
            {cout<<" *";
            
            }
            else
            cout<<"*";
            a=a-2;
           
        }
        
       {cout<<endl; 
       } 
    }
    
    return 0;
}