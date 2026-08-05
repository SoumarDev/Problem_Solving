/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

enum enOddOrEven {Odd = 1, Even = 2};

int ReadNumber()
{
    int Number;
    
    cout <<"Please enter number: " << endl;
    cin >> Number;
    
    return Number;
}

enOddOrEven CheckOddOrEven(int Number)
{
    if(Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}


int SumOddNumbersFrom1toN_UsingWhile(int N)
{
    int Counter = 0;
    int Sum = 0;
    
    cout << "\nSum of Odd numbers using While Statement:\n";
    
    while(Counter < N)
    {
        Counter++;
        
        if(CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    }
    return Sum;
}
int SumOddNumbersFrom1toN_UsingDoWhile(int N)
{
    int Counter = 0;
    int Sum = 0;
    
    cout << "\nSum of Odd numbers using DoWhile Statement:\n";
    do
    {
        Counter++;
        if(CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
        
    }while(Counter < N);
    
    return Sum;
}
int SumOddNumbersFrom1toN_UsingFor(int N)
{
    int Sum = 0;
    
    cout << "\nSum of Odd numbers using for Statement:\n";
    for (int Counter = 1; Counter <= N; Counter++)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        } 
    }
    return Sum;
}

int main()
{
    int N = ReadNumber();
    
    cout << SumOddNumbersFrom1toN_UsingWhile(N);
    cout << SumOddNumbersFrom1toN_UsingDoWhile(N); 
    cout << SumOddNumbersFrom1toN_UsingFor(N);
    return 0;
}