/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int ReadNumberInRange(int From, int To) 
{
    int Grade;
    
    do
    {
        cout << "Please enter a Grade between 0 and 100: " << endl;
        cin >> Grade;
    } while (Grade < From || Grade > To);
    
    return Grade;
}

char GetGradeLetter(int Grade) 
{
    if(Grade >= 90)
        return  'A';
    else if(Grade >= 80)
        return 'B';
    else if(Grade >= 70)
        return 'C';
    else if(Grade>= 60)
        return 'D';
    else if(Grade>= 50)
        return 'E';
    else 
        return 'F';
}

int main()
{
    char result = GetGradeLetter(ReadNumberInRange(0, 100));
    cout << "Result = "<< result;
    return 0;
}