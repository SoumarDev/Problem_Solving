/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

enum enMonthOfYear { Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6,
                     Jul=7 ,Aug=8 ,Sep=9 ,Oct=10 ,Nov=11, Dec=12 };

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

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear) ReadNumberInRange("Enter an Month [1 to 12] ", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month)
{
    switch(Month)
    {
        case enMonthOfYear::Jan:
            return "January";
        case enMonthOfYear::Feb:
            return "February";
        case enMonthOfYear::Mar:
            return "March";
        case enMonthOfYear::Apr:
            return "April";
        case enMonthOfYear::May:
            return "May";
        case enMonthOfYear::Jun:
            return "June";
        case enMonthOfYear::Jul:
            return "July";
        case enMonthOfYear::Aug:
            return "August";
        case enMonthOfYear::Sep:
            return "September";
        case enMonthOfYear::Oct:
            return "October";
        case enMonthOfYear::Nov:
            return "November";
        case enMonthOfYear::Dec:
            return "December";
        
        default:
            return "Not a valide Month";
    }
}
int main()
{
    
    cout<< GetMonthOfYear(ReadMonthOfYear()) << endl;

    return 0;
}