#include<iostream>
#include<string.h>
using namespace std;


class vehicle
{
private:
   char name[20]="TATA Tiago XZ+";
   int engine;
   int yom;

   public:
  void start(int);
   void stop();
};

void vehicle::start(int x)
{  cout<<strlen(name)<<endl;
   cout<<name<<endl;
   engine=1200;
   cout<<engine<<"CC\n";
   yom=2021;
   cout<<endl<<yom;

   if (x==0)
   {
      cout<<"\n Welcome to drive world, you have choose ECO drive mode"<<endl;
   }
   
   else if(x==1)
   {
      cout<<"\n Welcome to drive world, you have choose Sports drive mode"<<endl;
   }

   else
   cout<<"\n Please select the drive mod to start your journey"<<endl;
}

void vehicle:: stop()
{
   cout<<"\n Engine is power off, Thanks again"<<endl;
}




int main()
{
   int mode;
   cout<<"enter the drive mode: '0' - ECO Mode || '1' - SPORTS Mode"<<endl;
   cin>>mode;
   vehicle v1;
   v1.start(mode);
   return 0;
}