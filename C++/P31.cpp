#include<iostream>
#include"cstring"
using namespace std;

struct Book
{
    int id;
    char title[20];
    float price;
    char author[20];
};


int main()
{
    struct Book B1;
    B1.id=1001;
    strcpy(B1.title,"Electrical Machines");
    strcpy(B1.author,"P.S Bimbra");
   cout<<B1.id<<endl;
   cout<<B1.title<<endl;
   cout<<B1.author;

    return 0;
}