/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please enter number: " << endl;
    cin >> Num1;
    
    cout << "Please enter number: " << endl;
    cin >> Num2;
    
}

int MaxOf2Numbers(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void PrintResults(int Max)
{
    cout << "\n The Maximum Number is: " << Max << endl;
}

int main()
{
    int Num1, Num2;
    
    ReadNumbers(Num1, Num2);
    PrintResults(MaxOf2Numbers(Num1, Num2));

    return 0;
}