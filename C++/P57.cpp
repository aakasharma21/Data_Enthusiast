/*

🔹 What is File Handling?
File handling is a concept in programming that allows a program 
to store data permanently in files and retrieve it later. 
Unlike variables (which store data temporarily in memory), 
files store data on secondary storage such as a hard disk.

🔹 Why File Handling is Needed?
# Data remains saved even after the program ends
# Useful for large amounts of data
# Helps in creating reports, logs, databases
# Allows data sharing between programs

🔹 File Stream Classes
Class           Purpose
______          ________
ifstream - 	Read data from a file
ofstream - 	Write data to a file
fstream - 	Read + Write both


🔹 File Open Modes
Mode	        Description
ios::in	  -     Open file for reading
ios::out  -	    Open file for writing
ios::app  -	    Append data at end
ios::trunc - 	Delete old content
ios::binary - 	Binary mode

*/


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
    ifstream read;
    read.open("D:\Aakash.txt");
    read>>str;
    

 }