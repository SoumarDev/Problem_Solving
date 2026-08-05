/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void ReadNumbers(float& A, float& B)
{
    cout << "Please enter rectangle width A ? " << endl;
    cin >> A;
    
    cout << "Please enter rectangle Length B ? " << endl;
    cin >> B;
}

float CalculateRectangleArea(float A, float B)
{
    return A * B;
}

void PrintResult(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}
int main()
{
    float A, B;
    
    ReadNumbers(A, B);
    PrintResult(CalculateRectangleArea(A, B));

    return 0;
}