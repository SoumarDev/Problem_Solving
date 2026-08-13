/******************************************************************************
Problem: #48
Write a program to print Sqrt of numbers, don't use built in sqrt function
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

float MySqrt(float Number)
{
    return pow(Number, 0.5);   
}

int main()
{
    float Number = ReadNumber();
    
    cout<<"My Ceil Result: " << MySqrt(Number) <<endl;
    cout<<"C++ Ceil Result: " << sqrt(Number);
    
    return 0;
}