/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int ReadPositiveNumber (string Message)
{
    int Number = 0;
    
    do 
    {
        cout << Message; 
        cin >> Number;
    } while(Number <= 0);
    
    return Number;
}

int ReversNumber(int Number)
{
    int Remainder = 0, Number2 = 0;
    
    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}

void PrintDigits(int Number)
{
    int Remainder = 0;
    
    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder;
    }
}

int main()
{
    PrintDigits(ReversNumber(ReadPositiveNumber("Enter a positive Number: ")));
    
    return 0;
}