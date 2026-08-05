/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int ReadAge()
{
    int Age;
    
    cout << "Please enter age: " << endl;
    cin >> Age;
    
    return Age;
}

int ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45))
        cout << Age << " is valid \n";
    else
        cout << Age << " is invalid \n";
}

int main()
{
    PrintResult(ReadAge());
    
    return 0;
}