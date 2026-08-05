/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float& A, float& D)
{
    cout << "Please enter rectangle side A: " << endl;
    cin >> A;
    
    cout << "Please enter rectangle diagonal D: " << endl;
    cin >> D;
}

float RectangleAreaBySideAndDiagonal(float A, float D)
{
    
    float area = A * sqrt(pow(D, 2) - pow(A, 2));
    
    return area;
}

void PrintResult(float area)
{
    cout << "\nRectangle Area = " << area << endl;
}
int main()
{
    float side, diagonal;
    
    ReadNumbers(side, diagonal);
    PrintResult(RectangleAreaBySideAndDiagonal(side, diagonal));

    return 0;
}