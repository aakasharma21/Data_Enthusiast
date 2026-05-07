// Default Arguments & Constant Arguments in C++ ------------

/*

Default Arguments in C++ :

Default arguments are those values which are used by the function if we don’t input our value. 
It is recommended to write default arguments after the other arguments.

Constant Arguments in C++ :

Constant arguments are used when you don’t want your values to be changed or modified by the function. 

*/

#include<iostream>
using namespace std;

// default argument passed 

float moneyReceived(int currentMoney, const float factor=1.04) // Remember: default argument always declared next to formal argument.

{
    return currentMoney * factor;
}

/* int strlen(const char *p)   // constant argument passed.
{

}
*/

int main()
{
    
    int money;
    cout<<"Enter the amount of money you have in your bank account: ";
    cin>>money;
    cout<<"\nIf you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    return 0;
}
