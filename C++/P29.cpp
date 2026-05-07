// Concept of DMA(Dynamic Memory Allocation) in C++/C with program to check the entered string is palindrome or not.

#include<iostream>
using namespace std;


int main()
{   int n;
   // int* p;
    cout<<"Enter the size of string: ";
    cin>>n;
   // p=(int*)malloc(n); // Dynamic Memory Allocation in C/C++.
    char a[n];
    cout<<"\nEnter the stirng: "<<endl;
    for (int i = 1; i <=n; i++)
    {
        cout<<"Enter the "<<i<<" letter of your string: "<<endl;
        cin>>a[i];
    }
    cout<<endl<<"your string is: "<<endl;
    for (int i = 1; i<=n; i++)
    {
        cout<<a[i];
    }

    cout<<"\n Now, we will check the given is Pallindrome or not: "<<endl;
        char temp;
        int c=n;

        if(n%2==0)
        {   for (int i = 1; i<=(n/2); i++)
            {
                temp=a[i];
                a[i]=a[c];
                a[c]=temp;
                c--;
            }
        }
            else
            { 
                for (int i = 1; i<=(n/2); i++)
                {
                    temp=a[i];
                    a[i]=a[c];
                    a[c]=temp;
                    c--;
                }
            }

        cout<<"\n Your reverse string is: "<<endl;
        for (int i = 1; i<=n; i++)
    {
        cout<<a[i];
    }

    cout<<"\n\nMESSAGE: "<<"If your input string is same as reversed string then your string is Palindrome otherwise it's not"<<endl;
                
    
   // free(p); // Released of allocated memory
    return 0;
}
