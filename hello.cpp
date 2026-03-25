#include"iostream"
#include"cstdlib"
using namespace std;

class github
{
    private:
        int a,b;

        public:

            void get_data()
            {

            }

            void set_data()
            {

            }


};

class Gitlab
{
private:
  /* data */
public:
  Gitlab()
  {
    cout<<"\nHi, I am Constructor";
  }

  ~ Gitlab()
  {
    cout<<"\n Hi, I am destructor";
    cout<<"  I get automatically called whenever a constructor is created ";
  }
};


 
main()
{
  system("cls"); // for clear screen
  github g1;
  int x,y;
    
  cout<<"Hello World !!!";
  cout<<"enter any number";
  cin >>x>>y;
  cout<<"entered no are:"<<x<<"  "<<y;
  cout<<"\n I am making some chnages to learn the concept of merging conflicts";

 
  return 0;
}
  
