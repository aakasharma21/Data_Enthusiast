#include<iostream>
using namespace std;


class Average
{
    private:
        
        int a[10];

    public: 
       // int a[p];
        void set_data(int p)
        { cout<<"\n Enter the values:"<<endl;
           for (int i = 0; i < p ; i++)
           {
                cin>>a[i]; 
                //cout<<" |";        
           }
           
        }

        void get_data(int q)
        { int sum=0;
            cout<<"\nAvg: ";
            for (int i = 0; i < q; i++)
            {   sum=sum+a[i];
                //a[i]=a[i]+a[i+1];
            }
           cout<<sum/q<<endl;

            

        }
         
};

int main()
{   int n; 
    cout<<"Enter total no of values for average: ";
    cin>>n;
    Average a1;
    a1.set_data(n);
    a1.get_data(n);

    return 0;
}