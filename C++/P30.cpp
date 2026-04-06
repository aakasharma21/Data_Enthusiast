//Manually typed simple string comparison.
#include<iostream>
using namespace std;


int main()
{
    char a[6]={'A','A','K','A','S','H'};
    char b[6]={'O','A','K','A','S','H'};
    if(a[0]==b[1])
    cout<<"\n First charcater is same"<<endl;
    else
    cout<<"\n First charcater is not same"<<endl;
    return 0;
}