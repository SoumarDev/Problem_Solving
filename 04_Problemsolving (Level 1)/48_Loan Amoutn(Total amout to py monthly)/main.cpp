/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int ReadPositiveNumber (string Message)
{
    int Number = 0;
    
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}

float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
    return (float) LoanAmount / HowManyMonths;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter Loan Amount: ");
    float HowManyMonths = ReadPositiveNumber("How Many Months: ");
    
    cout << "\n Monthly Installment = ";
    cout << MonthlyInstallment(LoanAmount, HowManyMonths);

    return 0;
}