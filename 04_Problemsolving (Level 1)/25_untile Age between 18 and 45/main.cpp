/******************************************************************************
*******************************************************************************/
#include <iostream>

using namespace std;

int ReadAge()
{
    int Age;
    
    cout << "Please enter age between 18 and 45: " << endl;
    cin >> Age;
    
    return Age;
}

int ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;
    
    do 
    {
        Age = ReadAge();
    }
    while (!ValidateNumberInRange(Age, From, To));// solange val. falls zurück gibt.
                                                 // also != false = true dann gehe raus.

    return Age;
}

void PrintResult(int Age)
{
    
    cout <<"Your Age is age: " << Age << endl;
    
}
int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));
    return 0;
}
