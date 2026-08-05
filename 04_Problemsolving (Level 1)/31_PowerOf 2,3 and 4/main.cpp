/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    
    cout << "Please enter Number: " << endl;
    cin >> Number;
    
    return Number;
}

void PowerOf2_3_4(int Number)
{
    int a, b, c;
    
    a = Number * Number;
    b = Number * Number * Number;
    c = Number * Number * Number * Number;
    
    cout << a << " "<< b << " "<< c << endl;
}
int main()
{
    PowerOf2_3_4(ReadNumber());
    return 0;
}