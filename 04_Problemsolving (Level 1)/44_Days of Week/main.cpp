/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

enum enDayOfWeek { Sun=1, Mon=2, Tue=3, Wed=4, Thu=5, Fra=6, Sat=7};

int ReadNumberInRange(string Message, int From, int To) 
{
    int Number = 0;
    
    do
    {
        cout << Message << endl;
        cin >> Number;
        
    } while(Number < From || Number > To);
    
    return Number;
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek) ReadNumberInRange("Please enter day number Sun=1, Mon=2, Tue=3, Wed=4, Thu=5, Fra=6, Sat=7 ", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
    switch(Day)
    {
        case enDayOfWeek::Sun:
            return "Sunday";
        case enDayOfWeek::Mon:
            return "Monday";
        case enDayOfWeek::Tue:
            return "Tuesday";
        case enDayOfWeek::Wed:
            return "Wednsday";
        case enDayOfWeek::Thu:
            return "Thursday";
        case enDayOfWeek::Fra:
            return "Fraiday";
        case enDayOfWeek::Sat:
            return "Saturday";
        default:
            return "Not a Day";
    }
}
int main()
{
    cout<< GetDayOfWeek(ReadDayOfWeek());

    return 0;
}