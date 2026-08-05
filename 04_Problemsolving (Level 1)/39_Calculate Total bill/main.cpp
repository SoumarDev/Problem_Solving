/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


float ReadPositiveNumber (string Message)
{
    float Number = 0;
    
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}
float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
    
    return TotalCashPaid - TotalBill;

}

int main()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill: ");
    float TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Paid: ");
    
    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " << TotalCashPaid << endl;
    
    cout << "********************************\n";
    cout << "Remainder = "<< CalculateRemainder(TotalBill, TotalCashPaid)<< endl;
    
    return 0;
}