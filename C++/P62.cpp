#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;


int main()
{
    system("cls");

    ofstream fout;
    fout.open("D:\ myfile.txt");
    fout<<"This is file handling";
    
    return 0;
}