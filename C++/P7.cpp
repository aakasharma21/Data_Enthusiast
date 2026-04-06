//Constants, Manipulators & Operator Precedence ***************

#include"iostream"
#include"iomanip"
using namespace std;

int main()
{
    int a=45;
    cout<<"the value of a was: "<<a<<endl;
    a=90; // "=" is a assignment operator, we can assign more than one value to a variable during any no. of intialization since the variable is not a constant type.
    cout<<"the new value of a is: "<<a<<endl;

    // ********* Constants in C++ *********************
    const int b =45; // to make the variable constant type which cannot be alter and the variable will hold or store only one value during intialozation.
    cout<<"the value of b is "<<b<<endl;
   // b=50; // you will get an error as b is constant type variable.

// *********** Manipulators in C++ **************************

// In C++, manipulators are functions or objects that change the way as data is displayed or read in a program. They are used with the insertion (<<) and extraction (>>) operators to modify the input or output format. 

/*
Some important manipulators in <iomanip> are:

setw (val): It is used to set the field width in output operations.
setfill (c): It is used to fill the character ‘c’ on output stream.
setprecision (val): It sets val as the new value for the precision of floating-point values.
setbase(val): It is used to set the numeric base value for numeric values.
setiosflags(flag): It is used to set the format flags specified by parameter mask.
resetiosflags(m): It is used to reset the format flags specified by parameter mask.


Some important manipulators in <ios> are:

showpos: It forces to show a positive sign on positive numbers.
noshowpos: It forces not to write a positive sign on positive numbers.
showbase: It indicates the numeric base of numeric values.
uppercase: It forces uppercase letters for numeric values.
nouppercase: It forces lowercase letters for numeric values.
fixed: It uses decimal notation for floating-point values.
scientific: It uses scientific floating-point notation.
hex: Read and write hexadecimal values for integers and it works same as the setbase(16).
dec: Read and write decimal values for integers i.e. setbase(10).
oct: Read and write octal values for integers i.e. setbase(10).
left: It adjusts output to the left.
right: It adjusts output to the right.
*/

int x =4, y=60, z= 800;
cout<<"the value of x without manipulator is "<<x<<endl;
cout<<"the value of y without manipulator is "<<y<<endl;
cout<<"the value of z without manipulator is "<<z<<endl;
cout<<"the value of x"<<setw(15)<<x<<endl; // setw() is a pre-defined func under iomanip hdr-file, used to set or align the text width of ouput on screen.
cout<<"\nthe value of y"<<setw(15)<<y<<endl;
cout<<"\nthe value of z"<<setw(15)<<z<<endl;
cout<<"\nthe value of z"<<setw(15)<<showpos<<z<<endl;

// *************** Operators precedence and associativity  in C++ **************************
// Refer cppreference.com

/*In C++, operator precedence determines which operator is evaluated first when an expression has multiple operators.
Operators with higher precedence are evaluated before those with lower precedence.
If two operators have the same precedence, their associativity decides the evaluation order (left-to-right or right-to-left).

🧠 Operator Precedence and Associativity in C++
Precedence (High → Low)	Operator(s)	Description	Associativity
1	::	Scope resolution	Left to right
2	++ -- (postfix), () [], . ->	Postfix increment/decrement, function call, array subscript, member access	Left to right
3	++ -- (prefix), + - (unary), !, ~, * (dereference), & (address of), sizeof, new, delete, typeid, cast operators	Unary operators	Right to left
4	.* ->*	Pointer-to-member	Left to right
5	* / %	Multiplication, division, modulo	Left to right
6	+ -	Addition, subtraction	Left to right
7	<< >>	Bitwise shift left, shift right	Left to right
8	< <= > >=	Relational operators	Left to right
9	== !=	Equality operators	Left to right
10	&	Bitwise AND	Left to right
11	^	Bitwise XOR	Left to right
12	`	`	Bitwise OR
13	&&	Logical AND	Left to right
14	`		`
15	?:	Ternary conditional	Right to left
16	= += -= *= /= %= <<= >>= &= ^= `	=`	Assignment operators
17	throw	Exception throwing	Right to left
18	,	Comma operator	Left to right
⚙️ Examples
int a = 2 + 3 * 4;   // * has higher precedence → a = 2 + (3*4) = 14

int b = 5;
int c = ++b * 2;     // ++ (prefix) before * → b=6, c=12

int d = 10;
int e = d > 5 && d < 15; // > and < before && → true && true = true

int f = 3;
int g = f += 2 + 1;  // + before += → f = f + (2+1) = 6, g = 6

🧩 Quick Tips

Parentheses () override precedence — always use them for clarity.

Assignment (=) has lower precedence than arithmetic and comparison.

Chained assignments (a = b = c = 0;) work right-to-left due to assignment associativity.

Ternary (?:) and assignment operators associate right to left.
*/

    return 0;
}


