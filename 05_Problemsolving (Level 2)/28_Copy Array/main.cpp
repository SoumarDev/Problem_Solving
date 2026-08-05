/******************************************************************************

Problem:
Write a program to fill array with max size 100 
with random numbers form 1 to 100, copy it to another array and print it.
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


void CopyArray(int arr[100], int arrDistination[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    { 
        arrDistination[i] = arr[i];
    }
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
    
    int arr[100], arrLength;
    int arr2[100];
    
    FillArrayWithRandomNumbers(arr, arrLength);
    
    CopyArray(arr, arr2, arrLength);
    
    cout << "Array 1 Elements: ";
    PrintArray(arr, arrLength);
    
    cout << "Array 2 Elements: ";
    PrintArray(arr2, arrLength);
 
    return 0;
}