/******************************************************************************
Problem:
Write a program to fill array with max size 100 random numbers form
1 to 100, copy only prime numbers to another array using AddArrayEelement, 
and print it.
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

enPrimeNotPrime CheckPrime(int Number)
{
    
    float M = round(Number / 2);
    
    for(int Counter = 2; Counter <= M; Counter++)
    {
        if(Number % Counter == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

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


void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    
    arr[arrLength - 1] = Number;
}

void CopyPrimeNumbers(int arrSource[100], int arrDistination[100], int arrLength, int& arrDistinationLength)
{
    for (int i = 0; i < arrLength; i++)
        {
            if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime) 
            {
                AddArrayElement(arrSource[i], arrDistination, arrDistinationLength);
            }
            
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
    
    int arr[100];
    int arrLength = 0;
    
    FillArrayWithRandomNumbers(arr, arrLength);
    
    int arr2[100];
    int arr2Length = 0;

    CopyPrimeNumbers(arr, arr2, arrLength, arr2Length);
    
    cout << "Array 1 Elements: ";
    PrintArray(arr, arrLength);
    
    cout << "Array 2 Elements: ";
    PrintArray(arr2, arr2Length);
 
    return 0;
}