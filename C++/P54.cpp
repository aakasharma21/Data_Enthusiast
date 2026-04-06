/*

Important Concepts:
1. Method/Function Overloading
2. Method/Function Overriding
3. Method/Function hiding

Method Overriding -
When an identical function with same name/parameters is define 
inside both the child and its parent class, this situation is 
called Method Overiding.

Significance:
There are many cases in which we don't want to inherit the features
of parent class and we just want to run/execute member functions of 
that class whose object we have created, then method overiding helps
to achieve it better.
_____________________________________________________________________

Method/Function Overloading - 
when two or more than two function with same name but different 
parameters define inside a same class then, situation of Function
overloading occured.
_____________________________________________________________________
Method hiding - 
when a function with same name but different parameters define 
inside a child class as well as in its parent class then, situation 
of Method hiding occured.

*/

#include<iostream>
using namespace std;

class car
{
    public:
         
        void start()
        {
            cout<<"Welcome to the Car World, Live to ride";
        }
};

class sportscar : public car
{
    public:
        
        void start()
        {
            cout<<"\nBorn to stand out. Built to go fast";
        }
};


void main()
{
    sportscar c1;
    c1.start(); // here compiler will run/execute only start() 
                //function present inside class Sportscar.
   
}