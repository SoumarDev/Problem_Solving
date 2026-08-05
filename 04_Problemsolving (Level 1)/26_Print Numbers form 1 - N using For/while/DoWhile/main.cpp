/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int ReadNumber()
{
    int N;
    
    cout <<"Please enter number: " << endl;
    cin >> N;
    
    return N;
}

void PrintRangeFrom1toN_UsingWhile(int N)
{
    int counter = 0;
    
    cout << "Range printed using While Statement:\n";
    
    while(counter < N)
    {
        counter++;
        cout << counter << endl;
    }
}
void PrintRangeFrom1toN_UsingDoWhile(int N)
{
    int counter = 0;
    
    cout << "Range printed using Do While Statement:\n";
    do
    {
        counter++;
        cout << counter << endl;
        
    }while(counter < N);
}
void PrintRangeFrom1toN_UsingFor(int N)
{
    
    cout << "Range printed using for Statement:\n";
    for (int counter = 1; counter <= N; counter++)
    {
        cout << counter << endl; 
    }
}

int main()
{
    int N = ReadNumber();
    
    PrintRangeFrom1toN_UsingWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingFor(N);
    return 0;
}