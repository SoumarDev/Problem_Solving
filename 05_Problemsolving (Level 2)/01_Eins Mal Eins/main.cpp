/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
//#include <iomanip>
using namespace std;

// Lösung von Abu-Hadhoud


void PrintTableHeader()
{
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10 \n\n";
    cout << "\t";
    
    for(int i = 1; i <= 10; i++) 
    {
        cout << i << "\t";
    }
    cout << "\n----------------------------------------------------------------------------------\n";
}

string ColumnSeperator(int i) 
{
    // wenn zahl < als 2 Ziffern ist dann mehr platz sonst | näher setzen.
    if(i < 10)
        return "   |";
    else 
        return "  |";
    
}

void PrintMultiplicationTable()
{
    PrintTableHeader(); 
    
    for(int i = 1; i <= 10; i++) 
    {
        cout << " " << i << ColumnSeperator(i) << "\t";
        for(int j = 1; j <= 10; j++) 
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}
int main()
{
    PrintMultiplicationTable();
    
    return 0;
}

/*
void HrozonaleZeile() {
    cout << setw(4);
    for(int i = 1; i <= 10; i++) {
        cout << setw(4) << i;
    }
    cout << "\n";
}

void Linie() {
    cout << "   ";
    for(int i = 1; i <= 10; i++) {
        cout << "----";
    }
    cout << endl;
}

void EinsMalEins() {
    for(int i = 1; i <= 10; i++) {
        cout << setw(2) << i << " |";
        for(int j = 1; j <= 10; j++){
            cout <<setw(4) << i * j;
        }
        cout <<endl;
    }
}

int main()
{
    HrozonaleZeile();
    Linie();
    EinsMalEins();
    return 0;
}
*/