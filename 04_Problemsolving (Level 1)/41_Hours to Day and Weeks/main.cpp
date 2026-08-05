/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


float ReadPositiveNumber (string Message)
{
    float Number = 0;
    
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}
float HoursToDays(float NuberOfHours) 
{
    return NuberOfHours / 24;
}
float HoursToWeeks(float NumberOfHours)
{
    // auch NumberOfHours / 24 / 7; von Abo-Hadhoud 
    return NumberOfHours / (24 * 7);// meine Eigne
}
float DaysToWeeks(float NumberOfDays)
{
    return NumberOfDays / 7;
}
int main()
{
    float NumberOfHours = ReadPositiveNumber("Please enter NumberOfHours: ");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NuberOfWeeks = DaysToWeeks(NumberOfDays);
    
    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberOfDays << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours); 
    return 0;
}