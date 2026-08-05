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

void PrintAllDigisFrequency(int Number)
{
    cout << endl;
    
    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFruquency(Number, i);
        
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequncy is " 
                 << DigitFrequency << " Time(s).\n";
        }
    }
}

int main()
{
    int Number;
    short  DigitToCheck;
    
    Number = ReadPositiveNumber("Enter Number: ");
    
    PrintAllDigisFrequency(Number);
    
    return 0;
}