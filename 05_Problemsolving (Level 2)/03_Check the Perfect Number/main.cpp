/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
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
    return Number == Sum; 
}

void PrintResult(int Number) 
{
    if (isPerfectNumber(Number))
        cout << Number << "Is Perfect Number.\n";
    else 
        cout << Number << " Is NOT Perfect Nubmer.\n";
}


int main()
{
    PrintResult(ReadPositiveNumber("Enter a positive Number: "));
    return 0;
}


/// Meine Eigene Lösung


/*
enum enPerfectNotPerfectNum {Perfect = 1, NotPerfect = 2};

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

enPerfectNotPerfectNum CheckNumber(int Number) 
{
    int HalfOfNumber = (Number / 2);
    int Sum = 0;
    for(int i = 1; i <= HalfOfNumber; i++)
    {
        if (Number % i == 0)
        {
            Sum += i;
        }
    }
    
    if (Sum == Number)
    {
        return enPerfectNotPerfectNum::Perfect;   
    }
    else
    {
        return enPerfectNotPerfectNum::NotPerfect;   
    }
}

void PrintNumber(int Number)
{
    if (CheckNumber(Number) == enPerfectNotPerfectNum::Perfect)
    {
        cout << Number << " Is Perfect Number.";
    }
    else
    {
        cout << Number << " Is Not Perfect Number.";
    }
}

int main()
{
    PrintNumber(ReadPositiveNumber("Enter a positive Number: "));
    return 0;
}
*/