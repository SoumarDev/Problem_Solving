/******************************************************************************

Problem:
Write a program to fill array with max size 100 
with random numbers form 1 to 100, copy it to another array in 
reverse order and print it
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

void CopyArrayInReverseOrder(int arr[100], int arrDistination[100], int arrLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        arrDistination[i] = arr[arrLength - 1 - i];
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
    
    int arr[100], arr2[100];
    
    int arrLength = ReadPositiveNumber("How many elements: ");
    
    FillArrayWithRandomNumbers(arr, arrLength);

    CopyArrayInReverseOrder(arr, arr2, arrLength);
    
    cout << "\nArray 1 Elements: ";
    PrintArray(arr, arrLength);
    
    cout << "Array 2 elements : ";
    PrintArray(arr2, arrLength);

    return 0;
}