/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

struct strTaskDuration 
{
    int NumberOfDays, NumberOfHours, NumberOfMiutes, NumberOfSeconds;
};

int ReadPositiveNumber (string Message)
{
    int Number = 0;
    
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds) 
{
    strTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;
    
    int Remainder = 0;
    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay; 
    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;
    TaskDuration.NumberOfMiutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;
    TaskDuration.NumberOfSeconds = Remainder;
    
    return TaskDuration;
}

void PrintTaskDurationInSeconds(strTaskDuration TaskDuration)
{
    cout << TaskDuration.NumberOfDays << ":"
         << TaskDuration.NumberOfHours << ":"
         << TaskDuration.NumberOfMiutes << ":"
         << TaskDuration.NumberOfSeconds;
}
int main()
{
    int TotalSeconds = ReadPositiveNumber("Please enter ");
    PrintTaskDurationInSeconds(SecondsToTaskDuration(TotalSeconds));
    return 0;
}