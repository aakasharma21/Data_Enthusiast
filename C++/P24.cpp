#include<iostream>
using namespace std;


int main()
{
    int a[3][3];
    cout<<"Enter the elements of 2D Array: "<<endl;
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=3; j++)
        {
            cout<<"Enter the "<<i<<j<<" element of 2D Array: ";
            cin>>a[i][j];
            cout<<endl;
        }
        
    }
    cout<<"\n Your 2D Array is: "<<endl<<endl;
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=3; j++)
        {
            
            cout<<a[i][j]<<"\t";
            
        }
        cout<<endl;
        
    }
    
    return 0;
}