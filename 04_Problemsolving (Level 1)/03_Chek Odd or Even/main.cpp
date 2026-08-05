/***************
 Chek odd or Even

*******************************************************************************/
#include <iostream>
using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
    int Num;
    
    cout << "Please enter a number: " << endl;
    cin >> Num;
    return Num;
    
}

enNumberType CheckNumerType(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumber(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "\n Number is Even. \n";
    else
        cout << "\n Number is Odd. \n";
}


int main()
{
    PrintNumber(CheckNumerType(ReadNumber()));   
    return 0;
}