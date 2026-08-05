/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    
    cout << "Please enter Number: " << endl;
    cin >> Number;
    
    return Number;
}

int ReadPower()
{
    int M;
    
    cout << "Please enter Power: " << endl;
    cin >> M;
    
    return M;
}


int PowerOfM(int Number, int M)
{
    if(M == 0) 
    {
        // Any number powered to zero gives 1
        return 1;
    }
    
    int P = 1;
    
    for(int i = 1; i <= M; i++)
    {
        P = P * Number;
    }
    
    return P;
}
int main()
{
    int n = ReadNumber();
    int result = PowerOfM(n, ReadPower()); 
    
    cout << endl << "Result = " << result;
    
    return 0;
}