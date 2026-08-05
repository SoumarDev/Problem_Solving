/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
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

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return (float) LoanAmount / MonthlyInstallment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter Loan Amount: ");
    float MonthlyInstallment = ReadPositiveNumber("Monthly Installment: ");
    
    cout << "\n  Total Months to py = ";
    cout << TotalMonths(LoanAmount, MonthlyInstallment);

    return 0;
}