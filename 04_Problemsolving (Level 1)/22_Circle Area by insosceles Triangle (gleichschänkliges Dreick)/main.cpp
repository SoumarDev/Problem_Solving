/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float& A, float& B)
{
    cout << "Please enter triangle side A: " << endl;
    cin >> A;
    
    cout << "Please enter triangle base B: " << endl;
    cin >> B;
    
}

float CircleAreaByITriangle(float A, float B)
{
    
    float area = M_PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
 
    return area;
}

void PrintResult(float area)
{
    cout << "\nCircle Area = " << area << endl;
}
int main()
{
    float A, B;
    
    ReadTriangleData(A, B);
    PrintResult(CircleAreaByITriangle(A, B));
    ;
    return 0;
}