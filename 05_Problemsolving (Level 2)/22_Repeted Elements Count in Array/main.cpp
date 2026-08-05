/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int ReadPositiveNumber (string Message)
{
    int Number = 0;
    
    do 
    {
        cout << Message; 
        cin >> Number;
    } while(Number <= 0);
    
    return Number;
}

void ReadArray(int arr[], int& arrLength)
{
    cout << "Enter Number of array length: ";
    cin >> arrLength;
    
    cout << "Enter array elements: \n";
    for (int i = 0; i < arrLength; i++) 
    {
        cout << "Element ["<< i + 1 << "]: ";
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray(int arrNum[100], int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
    {
        cout << arrNum[i];
    }
}

int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int count = 0;
    for (int i = 0; i < arrLength; i++) 
    {
        if (Number == arr[i])
        {
            count++;
        }
    }    
    return count;
}

int main()
{
    int arr[100], arrLength, NumberToCheck;
    
    ReadArray(arr, arrLength);
    
    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");
    
    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);
    
    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength);
    cout << " time(s)";
    return 0;
}