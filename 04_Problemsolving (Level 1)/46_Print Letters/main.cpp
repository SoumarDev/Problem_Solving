/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void PrintLettersAtoZ()
{
    for(int i = 65; i <= 90; i++)
     {
        cout << char(i) << endl; 
     }
}

int main()
{
    PrintLettersAtoZ();

    return 0;
}