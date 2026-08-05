/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareSide()
{
    float A;
    
    cout << "Please enter square side A: " << endl;
    cin >> A;
    
    return A;
}

float CircleAreaInscribedInSquare(float A)
{
    
    float area = (M_PI * pow(A, 2)) / 4;
    
    return area;
}

void PrintResult(float area)
{
    cout << "\nCircle Area = " << area << endl;
}
int main()
{
    PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));

    return 0;
}