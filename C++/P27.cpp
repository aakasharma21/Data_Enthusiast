// Array and pointers concept.

#include<iostream>
using namespace std;


int main()
{
    int a[5];
    int* p;
     p=&a[0];
     cout<<"enter array\n";
     for (int i = 0; i<=4 ; i++) // entering elements in array indirectly with help of pointers.
     {
        cin>>*p;
        p++;
        cout<<endl;
     }
     for (int i = 0; i<=4 ; i++)
     {
        cout<<a[i]<<"\t";
    }

    // string array concept
    cout<<endl; // to change line
    int n;
     char c[7]="BAAKE";
    cout<<endl<<c;
    char ch[7]="LADDU";
    cout<<endl<<ch<<endl;
    n=sizeof(c);
    int x=5;
    cout<<n;
     
     // program to reverse the string with help of pointers
        char temp;
            if(n%2==0)
            {
            for (int i = 0; i<(n/2); i++)
            {   
            temp=c[i];
            c[i]=c[x];
            c[x]=temp;
            x--;
            }
            }
            else
            {
            for (int i = 0; i<(n/2); i++)
            {   
            temp=c[i];
            c[i]=c[x];
            c[x]=temp;
            x--;
            }
            }

        cout<<"\nThe reverse string is: "<<endl;
        for (int j = 0;j<n ; j++)
        {
            cout<<c[j];
        }
        
    


    return 0;
}