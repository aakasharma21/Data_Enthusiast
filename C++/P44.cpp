// Addition of elements of two arrays correspondingly
#include<iostream>
using namespace std;


int main()
{
    int a[5],b[5],c[5];
    cout<<"enter the first array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i]; cout<<endl;
    }

    cout<<" array 1 in ascending order"<<endl;
    for (int i = 0; i < 5; i++)
    {
        if (a[i]>a[i+1])
        {
            int swap=a[i];
            a[i]=a[i+1];
            a[i+1]=swap;
        }

        
    }

    cout<<"\n the swapped array 1 is:"<<endl;
     for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    

  /*  cout<<"\n Now enter the second array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>b[i]; cout<<endl;
    }

    cout<<"here is the result:\n";
    for (int i = 0; i < 5; i++)
    {
        c[i]=a[i]+b[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<c[i]<<" ";
    }
    */
    

    return 0;
}