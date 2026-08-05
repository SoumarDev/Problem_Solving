/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Massege)
{
    int Number = 0;
    
    do
    {
        cout << Massege;
        cin >> Number;
    } while(Number <= 0);
    
    return Number;
}

bool isPerfectNumber(int Number) 
{
    int Sum = 0;
    for(int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        Sum += i;   
    }
    return Sum == Number;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
    for(int i = 1; i < Number; i++)
    {
        if (isPerfectNumber(i))
            cout << i << endl;
    }
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Enter a ReadPositive Number:"));
    return 0;
}