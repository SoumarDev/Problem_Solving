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

void PrintInvertedNumber(int Number)
{
    for(int i = Number; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedNumber(ReadPositiveNumber("Enter Number: "));

    return 0;
}