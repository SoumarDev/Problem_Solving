/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do 
    {
        cout << Message;
        cin >> Number;
        
    } while(Number <= 0);
    
    return Number;
}

int CountDigitFruquency(int Number, short DigitToCheck)
{
    int Remainder = 0;
    short DigitFreq = 0;
    
    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        
        if (DigitToCheck == Remainder)
        {
            DigitFreq++;
        }
    }
    return DigitFreq;
}

int main()
{
    int Number;
    short  DigitToCheck;
    
    Number = ReadPositiveNumber("Enter Number: ");
    DigitToCheck = ReadPositiveNumber("Enter one digit to Check: ");
    
    cout <<"Digit "<< DigitToCheck << " Frequncy is " 
         << CountDigitFruquency(Number, DigitToCheck) << " Time(s).";
    
    return 0;
}