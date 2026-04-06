// // #include<iostream>
// // using namespace std;


// // int main()
// // {   int n;
// //     int a=1;
// //     int sum=0;
// //     cout<<" enter any range of ur choice: "<<endl;
// //     cin>>n;

    
// //         while (a<=n)
// //         {   
// //             sum=sum+a;
// //             a++;
    
// //         }

// //         cout<<"the sum of all no. in a series: "<<sum;
        
// //     return 0;
// // }

// #include<iostream>
// using namespace std;


// int main()
// {
//     int n;
//     cout<<"enter any no of ur choice to check whether it's prime or not: \n";
//     cin>>n;
     
//     if((n%1==0) && (n%n==0))
//     {
//         for (int i = 2; i <= n; i++)
//         {
//             if(n%i==0)
//             {
//                 cout<<"the given no is not prime\n";
//                 break;
//             }
//             else
//             {cout<<"the no is prime"<<endl;
//             break;
//             }
//         }
        
    
//     }

//     else
//     cout<<"Not a prime no.";

//     return 0;
// }

#include<iostream>
using namespace std;


int main()
{   int n;
    cout<<" enter the no of rows:  ";
    cin>>n;
    cout<<" \nhere is the pattern ---"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}