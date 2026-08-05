/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter number 1: " << endl;
    cin >> Mark1;
    
    cout << "Please enter number 1: " << endl;
    cin >> Mark2;
    
    cout << "Please enter number 1: " << endl;
    cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintAverage(int Average)
{
    cout << "\nThe total sum of numbers is : " << Average<< endl;
}
int main()
{
    int Mark1, Mark2, Mark3;
    
    ReadMarks(Mark1, Mark2, Mark3);
    PrintAverage(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}