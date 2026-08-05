/******************************************************************************
Problem:
Write a program to fill array with max size 100 random numbers form
1 to 100, copy only odd numbers to another array using AddArrayEelement, 
and print it.
*******************************************************************************/
#include <iostream>
#include <cstdlib>

using namespace std;
enum enOddOrEven {Odd = 1, Even = 2};

int ReadNumber()
{
    int Number;
    
    cout <<"Please enter number: " << endl;
    cin >> Number;
    
    return Number;
}

enOddOrEven CheckOddOrEven(int Number)
{
    if(Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
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

void CopyOnlyOddNumbersUsingAddArrayElement(int arrSource[100], int arrDistination[100], int arrLength, int& arrDistinationLength)
{
    // Ich kann auf die Func. CheckOddOrEven() verzichten
    // und diese durch if(arrSource[i] % 2 != 0) ersetzen
    // nun auf diese Art ist professioneller
    for (int i = 0; i < arrLength; i++)
        if (CheckOddOrEven(arrSource[i]) == enOddOrEven::Odd)
        {
            AddArrayElement(arrSource[i], arrDistination, arrDistinationLength);
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

    CopyOnlyOddNumbersUsingAddArrayElement(arr, arr2, arrLength, arr2Length);
    
    cout << "Array 1 Elements: ";
    PrintArray(arr, arrLength);
    
    cout << "Array 2 Elements: ";
    PrintArray(arr2, arr2Length);
 
    return 0;
}>