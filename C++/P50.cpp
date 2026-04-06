#include<iostream>
using namespace std;

class book
{   
    private:
        int b_id;
        char Title[20];
        char author[20];

    public:

        void get_data()
            {
                cout<<"\n Enter the book ID: ";
                cin>>b_id;
                cout<<"\n Enter the book Title: ";
                cin>>Title;
                cout<<"\n Enter the name of Author: ";
                cin>>author;
            }
    
        void set_data()
            {
                cout<<"\n Here are the details of Book: "<<endl;
                cout<<"Book ID - "<<b_id<<endl;
                cout<<"Ttile - "<<Title<<endl;
                cout<<"By author - "<<author<<endl;
            }    


};

class Language : public book
{
    
};



int main()
{
    book b1;
    b1.get_data();
    b1.set_data();
    return 0;
}