/******************************************************************************
Problem: #48
Write a program to print Ceil of numbers, don't use built in Ceil function

Ceil => Immer Aufrunden
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

float GetFractionPart(float Number)
{
    return Number - int(Number);   
}

int MyCeil(float Number)
{
    float Fraction = GetFractionPart(Number);
    int IntPart = int(Number);
    
    if (Fraction <= 0)
        return IntPart;
    else 
        return IntPart + 1;
}
// //// D.r Abou Hadhoud
// int MyCeil(float Number) 
// {
//     if(abs(GetFractionPart(Number)) > 0 )
//         if (Number > 0)
//             return int(Number) + 1;
//         else 
//             return int(Number);
//     else
//         return Number;
// }

int main()
{
    float Number = ReadNumber();
    
    cout<<"My Ceil Result: " << MyCeil(Number) <<endl;
    cout<<"C++ Ceil Result: " << ceil(Number);
    
    return 0;
}