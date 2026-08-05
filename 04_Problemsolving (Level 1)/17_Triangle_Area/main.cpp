/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float& A, float& H)
{
    cout << "Please enter triangle side A: " << endl;
    cin >> A;
    
    cout << "Please enter triangle height H: " << endl;
    cin >> H;
}

float TriangleArea(float A, float H)
{
    
    float area = (A / 2) * H;
    
    return area;
}

void PrintResult(float area)
{
    cout << "\nTriangle Area = " << area << endl;
}
int main()
{
    float base, height;
    
    ReadNumbers(base, height);
    PrintResult(TriangleArea(base, height));

    return 0;
}