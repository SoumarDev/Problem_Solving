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
    int Num;
    
    cout << "Pleas enter  a number: " << endl;
    cin >> Num;
    return Num;
}

float CalculateHalfNumber(int Num)
{
    return (float)Num / 2;
}

void PrintResult(int Num)
{
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
    cout <<  Result<< endl;

}
int main()
{
    PrintResult(ReadNumber());
    return 0;
}