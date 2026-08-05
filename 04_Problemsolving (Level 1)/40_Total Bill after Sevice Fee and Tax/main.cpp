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

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;
    
    return TotalBill;
}
int main()
{
    float TotalBill = ReadPositiveNumber("Please enter Total Bill: ");
    
    cout << endl;
    cout << "Total Bill = " << TotalBill<< endl;
    cout << "Total Bill after Service Fee and Tax = "  
         << TotalBillAfterServiceAndTax(TotalBill) << endl;

    return 0;
}