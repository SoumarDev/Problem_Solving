/******************************************************************************
Problem: #48
Write a program to print floor of numbers, don't use built in floor function



Wichtig:
********

floor(10.3) = 10 (abrunden Richtung minus unendlich)
ceil(-10.3) = -10 (aufrunden Richtung plus unendlich)
int(-10.3) = -10 (Richtung Null abschneiden — Vorsicht, das ist nicht dasselbe wie floor!)

Der letzte Punkt ist der wichtige Fallstrick: 
int() schneidet den Nachkommateil einfach ab (Richtung Null),
floor() rundet Richtung minus unendlich. Bei positiven Zahlen ist das 
Ergebnis gleich, bei negativen unterschiedlich.
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

int MyFloor(float Number)
{
    float Decimal = FindDecimalDigits(Number);
    int IntPart = int(Number);
    
    if (Decimal < 0)
        return IntPart - 1;
    else 
        return IntPart;
}
//// D.r Abou Hadhoud
// int MyFloor(float Number) 
// {
//     if(Number > 0)
//         return int(Number);
//     else
//         return int(Number) - 1;
// }
int main()
{
    float Number = ReadNumber();
    
    cout<<"My Floor Result: " << MyFloor(Number) <<endl;
    cout<<"C++ Floor Result: " << floor(Number);
    
    return 0;
}