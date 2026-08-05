/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

float ReadTotalSales() 
{
    float TotalSales;
    
    cout << "Please enter your totSales: " << endl;
    cin >> TotalSales;
    
    return TotalSales;
}

float GetComissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
    {
        return 0.01;
    }
    else if (TotalSales >= 500000)
    {
        return  0.02;
    }
    else if (TotalSales >= 100000)
    {
        return 0.03;
    }
    else if (TotalSales >= 50000)
    {
        return 0.05;
    }
    else
    {
        return 0.00;
    }
}

float CalculateTotalComission( float TotalSales) 
{
    return GetComissionPercentage(TotalSales) *  TotalSales;
}

int main()
{
    float TotalSales = ReadTotalSales();
    float Result = CalculateTotalComission(TotalSales);
    
    cout << "\nComission Percentage = " <<GetComissionPercentage(TotalSales)<< endl;
    cout << "Total Percentage = " << Result;
    
    return 0;
}