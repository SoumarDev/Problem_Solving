/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
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

strTaskDuration ReadTaskDuration() 
{
    strTaskDuration TaskDuration;
    
    TaskDuration.NumberOfDays = ReadPositiveNumber("Enter Days: ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Enter Hours: ");
    TaskDuration.NumberOfMiutes = ReadPositiveNumber("Enter Minuts: ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Enter Seconds: ");
    
    return TaskDuration;
    
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;
    
    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMiutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;
    
    return DurationInSeconds;
}
int main()
{
    cout << "\nTask Duration in Seconds: " << TaskDurationInSeconds(ReadTaskDuration());
    cout << endl;
    return 0;
}