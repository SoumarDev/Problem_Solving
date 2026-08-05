/******************************************************************************
Problem:

Write a program to fill array with max size 100 with random numbers 
from 1-100, read number and return its index in array if found otherwise
return -1;

*******************************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;


int ReadPositiveNumber(string Massege)
{
    int Number = 0;
    
    do
    {
        cout << Massege;
        cin >> Number;
    } while(Number <= 0);
    
    return Number;
}

int RandomNumber(int From, int To)
{
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    for (int i = 0; i < arrLength; i++) 
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arrNum[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arrNum[i] << " ";
    }
}

short FindPositionNumber(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++) 
    {
        if (arr[i] == Number)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // Seeds the random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr[100], arrLength, Number;
    
    arrLength = ReadPositiveNumber("Please enter lngth of Array: ");
    FillArrayWithRandomNumbers(arr, arrLength);
    
    cout << "\nArray 1 Elements: \n";
    PrintArray(arr, arrLength);

    Number = ReadPositiveNumber("\nPlease enter a number to search for: ");
    cout << "\nNumber you are loking for: " << Number;
    
    short NumberPosition = FindPositionNumber(Number, arr, arrLength);
    
    if (NumberPosition == -1)
        cout << "The number is not found:-(\n";
    else
    {
        cout << "\nThe number found at position: " << NumberPosition << endl;
        cout << "The number found its order  : " << NumberPosition + 1 << endl;
    }
    
    return 0;
}