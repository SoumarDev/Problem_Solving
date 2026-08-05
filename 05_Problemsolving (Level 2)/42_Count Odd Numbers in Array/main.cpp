/******************************************************************************
Problem:
Write a program to fill array with max size 100 random numbers form
1 to 100, then print the count of Odd numbers. 
*******************************************************************************/
#include <iostream>
#include <cstdlib>

using namespace std;

enum enOddOrEven {Odd = 1, Even = 2};

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


int CountOnlyOddNumbersInArray(int arrSource[100], int arrLength)
{
    // Ich kann auf die Func. CheckOddOrEven() verzichten
    // und diese durch if(arrSource[i] % 2 != 0) ersetzen
    // nun auf diese Art ist professioneller
    int Counter = 0;
    
    for (int i = 0; i < arrLength; i++)
        if (CheckOddOrEven(arrSource[i]) == enOddOrEven::Odd)
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
    int arrLength = 0;
    
    FillArrayWithRandomNumbers(arr, arrLength);
    
    cout << "Array Elements: ";
    PrintArray(arr, arrLength);
    
    cout << "\nOdd Numbers count is: ";
    cout << CountOnlyOddNumbersInArray(arr, arrLength);

    return 0;
}