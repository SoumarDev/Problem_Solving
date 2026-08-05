/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber (string Message)
{
    float Number = 0;
    
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}

enPrimeNotPrime CheckPrime(int Number)
 {
     // die Hälfte der NumbserRheie bis Number prüfen(weil es schneller ist)
     int M = round(Number / 2);
     
     for (int Counter = 2; Counter <= M; Counter++)
     {
         if(Number % Counter == 0) 
         {
            return enPrimeNotPrime::NotPrime;    
         }
         
     }
     return enPrimeNotPrime::Prime; 
 }

void PrintNumberType(int Number)
{
    switch(CheckPrime(Number))
    {
        case enPrimeNotPrime::Prime:
            cout << "The Number is Prime \n";
            break;
        case enPrimeNotPrime::NotPrime:
            cout << "The Number is not Prime \n";
    }
    
}
int main()
{
    PrintNumberType(ReadPositiveNumber("Please enter a positeive number?"));

    return 0;
}