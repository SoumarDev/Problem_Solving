/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;
    
    return Number;
}

float SumNumbers()
{
    int Sum = 0, Number = 0, Counter = 1;
    
    do
    {
        Number = ReadNumber("Please enter Number " + to_string(Counter));
        
        if (Number == -99)
        {
            break;
        }
        
        Sum += Number;
        Counter++;
        
    } while (Number != -99);
    
    return Sum;
}
int main()
{
    
    float result = SumNumbers();
    cout << "Result = " << result;;
    return 0;
}