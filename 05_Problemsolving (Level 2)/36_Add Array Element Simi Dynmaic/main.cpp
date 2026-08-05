/******************************************************************************
Problem:
Write a program to dynamically read numbers and seve them in an Array
Max size of array is 100, allocate simi-dynamic array length.
*******************************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber()
{
    int Number = 0;
    cout << "Please enter a Number? ";
    cin >> Number;
    return Number;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    
    arr[arrLength - 1] = Number;
}

void InputUserNumbersInArray(int arr[100], int& arrLength) 
{
    bool AddMore = true;
    
    do
    {
        AddArrayElement(ReadPositiveNumber(), arr, arrLength);
        
        cout << "Do you want to add more numbers? [0]:No,[1]:Yes?";
        cin >> AddMore;
    } while (AddMore);
    
}

void PrintArray(int arrNum[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arrNum[i] << " ";
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;
    InputUserNumbersInArray(arr, arrLength);
    
    cout << "Array Length: "<< arrLength;
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    
    return 0;
}