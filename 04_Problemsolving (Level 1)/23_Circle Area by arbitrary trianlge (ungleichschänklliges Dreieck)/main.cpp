/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float& A, float& B, float& C)
{
    cout << "Please enter triangle side A: " << endl;
    cin >> A;
    
    cout << "Please enter triangle base B: " << endl;
    cin >> B;
    
    cout << "Please enter triangle side C: " << endl;
    cin >> C;
    
}

float CircleAreaByATriangle(float A, float B, float C)
{
    float P = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C )));
    float area = M_PI * pow(T, 2);
 
    return area;
}

void PrintResult(float area)
{
    cout << "\nCircle Area = " << area << endl;
}
int main()
{
    float A, B, C;
    
    ReadTriangleData(A, B, C);
    PrintResult(CircleAreaByATriangle(A, B,C));
    ;
    return 0;
}