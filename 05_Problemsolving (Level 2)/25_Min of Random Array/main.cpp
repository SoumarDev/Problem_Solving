/******************************************************************************

Problem:
Write a program to fill array with max size 100 
with random numbers form 1 to 100, then print Minimum Number.
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
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength) 
{
    cout << "Array Elements: ";
    for (int i = 0; i < arrLength; i++)
    {
        cout <<arr[i]<<" ";
    }
    cout << endl;
}

int MinNumberInArray(int arr[100], int arrLength)
{
    int Min = 0;
    Min = arr[0];
    
    cout << "Min Numbeer is: ";
    for (int i = 1; i < arrLength; i++)
    { 
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}

int main()
{
    // Seeds the random number generator in C++, called only once.
    srand((unsigned)time(NULL));
    
    int arr[100], arrLength;
    
    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);
    cout << MinNumberInArray(arr, arrLength);
    return 0;
}