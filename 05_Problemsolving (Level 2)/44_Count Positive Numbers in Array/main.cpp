/******************************************************************************
Problem:
Write a program to fill array with max size 100 random numbers form
-100 to 100, then print the count of Positive numbers. 
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

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "Enter Number of array length: ";
    cin >> arrLength;
    
    for (int i = 0; i < arrLength; i++) 
        arr[i] = RandomNumber(-100, 100);
}


int CountOnlyPositiveNumbersInArray(int arrSource[100], int arrLength)
{
    int Counter = 0;
    
    for (int i = 0; i < arrLength; i++)
        if (arrSource[i] >= 0)
        {
            Counter++;        
        }
    return Counter;
}
void PrintArray(int arr[100], int arrLength) 
{
    for (int i = 0; i < arrLength; i++)
    {
        cout <<arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
    // Seeds the random number generator in C++, called only once.
    srand((unsigned)time(NULL));
    
    int arr[100];
    int arrLength;
    
    FillArrayWithRandomNumbers(arr, arrLength);
    
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);
    
    cout << "\nPositive Numbers count is: ";
    cout << CountOnlyPositiveNumbersInArray(arr, arrLength) << endl;

    return 0;
}