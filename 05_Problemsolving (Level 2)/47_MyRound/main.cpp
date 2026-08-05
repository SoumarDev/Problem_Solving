/******************************************************************************
Problem: #47
Write a program to print round of numbers, don't use built in round function
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
    float Number;
    cout<< "Enter a Number: ";
    cin >> Number;
    return Number;
}

float FindDecimalDigits(float Number)
{
    return Number - int(Number);   
}

int MyRound(float Number)
{
    float Decimal = FindDecimalDigits(Number);
    
    if (Decimal >= 0.5)
        return int(Number) + 1;
    else if (Decimal <= -0.5)
        return int(Number) - 1;
    else 
        return int(Number);
}



int main()
{
    float Number = ReadNumber();
    
    cout<< "My Round Result: ";
    cout<<MyRound(Number) <<endl;
    
    cout<<"C++ Round Result: ";
    cout<<round(Number);
    
    return 0;
}