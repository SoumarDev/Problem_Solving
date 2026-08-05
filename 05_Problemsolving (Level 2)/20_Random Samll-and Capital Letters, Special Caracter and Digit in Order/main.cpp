/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};

char GetRandomCharacter(enCharType CharType) 
{
    switch(CharType)
    {
        
        case enCharType::SmallLetter:
             return char(RandomNumber(97, 122));
             break;
        case enCharType::CapitalLetter:
             return char(RandomNumber(65, 90));
             break;
        case enCharType::SpecialCharacter:
             return char(RandomNumber(33, 47));
             break;
        case enCharType::Digit:
             return char(RandomNumber(48, 57));
             break;
    }
    // if an invalid type is passedm return a null character
    return '\0';
}


int main()
{
    // Seeds the random number genrator in C++, called only once
    srand((unsigned)time(NULL));
    
   cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
   cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
   cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
   cout << GetRandomCharacter(enCharType::Digit) << endl;
    return 0;
}