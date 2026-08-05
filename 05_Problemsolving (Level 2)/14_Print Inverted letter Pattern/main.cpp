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

void PrintInvertedLetterPattern(int Number)
{
    for(int i =  65 + Number - 1; i >= 65; i--)
    {
        for(int j = i; j >= 65; j--) // (j = 1;  j <= Number - (65 + Number - 1 - i); j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("Enter Number: "));

    return 0;
}