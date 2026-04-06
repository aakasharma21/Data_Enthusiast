#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;


// main()
// {   ofstream f;
//     f.open("D:\Aakash.txt");
//     f<<"Hey, I am Learning file handling in Programming"<<endl;
//     f<<"Let's do some file handling operations"<<endl;

//     f.close();
// }

main()
{   system("cls");
    
    string str;
    ifstream fin;
    fin.open("D:\Aakash.txt");
    getline(fin,str);
    cout<<str;
   
    fin.close();
 }