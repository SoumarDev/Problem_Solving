/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

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

enPrimeNotPrime CheckPrime(int Number)
{
    
    float M = round(Number / 2);
    
    for(int Counter = 2; Counter <= M; Counter++)
    {
        if(Number % Counter == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

void PrintPrimeNumberFrom1ToN(int Number) 
{
    for(int i = 2; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
        {
            cout << i <<endl;
        }
    }

    /* // Meine Variante
    for(int i = 1; i <= Number; i++)
     {
         switch(CheckPrime(i))
         {
             case enPrimeNotPrime::Prime:
                cout << i <<endl;
                break;
             case enPrimeNotPrime::NotPrime:
                continue;
               // cout << "NOT PRIME";
                
         }
     }
     */
}
int main()
{
    PrintPrimeNumberFrom1ToN(ReadPositiveNumber("Enter a Positive Number: "));
    return 0;
}