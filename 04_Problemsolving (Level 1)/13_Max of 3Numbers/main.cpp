/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Please enter number 1: " << endl;
    cin >> Num1;
    
    cout << "Please enter number 2: " << endl;
    cin >> Num2;
    
    cout << "Please enter number 3: " << endl;
    cin >> Num3;
    
}

int MaxOf3Numbers(int Num1, int Num2,int Num3)
{
    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;
    else
        if (Num2 > Num3)
            return Num2;
        else
            return Num3;
}

void PrintResults(int Max)
{
    cout << "\n The Maximum Number is: " << Max << endl;
}

int main()
{
    int Num1, Num2, Num3;
    
    ReadNumbers(Num1, Num2, Num3);
    PrintResults(MaxOf3Numbers(Num1, Num2, Num3));

    return 0;
}