/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


enum enOperationType { Add = '+', Subtract = '-',
                       Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;
    
    return Number;
}

enOperationType ReadOpType()
{
    char OT = '+';
    
    cout << "Please enter operation type: (+, -, *, /) \n";
    cin >> OT;
    
    return (enOperationType) OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
    switch (OpType)
    {
        case enOperationType::Add:
            return Number1 + Number2;
        case enOperationType::Subtract:
            return Number1 - Number2;
        case enOperationType::Multiply:
            return Number1 * Number2;
        case enOperationType::Divide:
            return Number1 / Number2;
        default:
            return Number1 + Number2;
            
    }
}


int main()
{
    float Number1 = ReadNumber("Please enter first number: ");
    float Number2 = ReadNumber("Please enter second number: ");
    
    enOperationType OpType = ReadOpType();
    
    float Result = Calculate(Number1, Number2, OpType);
    
    cout << endl << "Result = " << Result;
    return 0;
}