/******************************************************************************
Problem:
Write a program to print abs of numbers, don't use built in abs function
*******************************************************************************/
#include <iostream>

using namespace std;


float MyABS(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1;
}

float ReadNumber()
{
    float Number;
    
    cout << "Please enter your Number: ";
    cin >> Number;
    return Number;
}

int main()
{
    float Number = ReadNumber();
    cout << "\nMy abs Result: " << MyABS(Number);
    cout << "\nC++ abs Result: " << abs(Number);
    
    return 0;
}