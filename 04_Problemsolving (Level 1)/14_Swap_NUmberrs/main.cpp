/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please enter number 1: " << endl;
    cin >> Num1;
    
    cout << "Please enter number 2: " << endl;
    cin >> Num2;
}

void Swap(int& A, int& B)
{
    int temp;
    
    temp = A;
    A = B;
    B = temp;
    
}
void PrintNumbers(int Num1, int Num2)
{
    cout << "Number1 = " << Num1 << endl;
    cout << "Number2 = " << Num2 << endl << endl;
}


int main()
{
    int Num1, Num2;
    
    ReadNumbers(Num1, Num2);
    PrintNumbers(Num1, Num2);
    Swap(Num1, Num2);
    PrintNumbers(Num1, Num2);
    return 0;
}