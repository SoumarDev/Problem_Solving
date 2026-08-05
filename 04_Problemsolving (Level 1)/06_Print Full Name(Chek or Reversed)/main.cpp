/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo Info;
    
    cout << "Please enter your first name: " << endl;
    cin >> Info.FirstName;
    
    cout << "Please enter your last name: " << endl;
    cin >> Info.LastName;
    
    return Info;
}

string GetFullName(stInfo Info, bool Reversed)
{
    string FullName = " ";
    
    if(Reversed)
        FullName = Info.LastName + " " + Info.FirstName;
    else
        FullName = Info.FirstName + " " + Info.LastName;
    
    return FullName;
}

void PrintFullName(string FullName)
{
    cout << "\n Your full name is: " << FullName;
}
int main()
{
    PrintFullName(GetFullName(ReadInfo(), true));

    return 0;
}