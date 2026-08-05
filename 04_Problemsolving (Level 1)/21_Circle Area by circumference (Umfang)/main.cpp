/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumference()
{
    float L;
    
    cout << "Please enter circumference L: " << endl;
    cin >> L;
    
    return L;
}

float CircleAreaByCircumference(float L)
{
    
    float area = pow(L, 2) / (4 * M_PI);
    
    return area;
}

void PrintResult(float area)
{
    cout << "\nCircle Area = " << area << endl;
}
int main()
{
    PrintResult(CircleAreaByCircumference(ReadCircumference()));

    return 0;
}