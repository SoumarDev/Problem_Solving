/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark()
{
    int Mark;
    
    cout << "\nPleas enter your mark: " << endl;
    cin >> Mark;
    return Mark;
}

enPassFail CheckMark(int Mark)
{
    if(Mark >= 50)
        return enPassFail::Pass;
    else 
        return enPassFail::Fail;
}
void PrintResults(int Mark)
{
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "\n You Pass." << endl;
    else
        cout << "\n You Fail." << endl;
        
}
int main()
{
    PrintResults(ReadMark());

    return 0;
}