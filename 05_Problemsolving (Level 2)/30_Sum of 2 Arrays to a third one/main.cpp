/******************************************************************************

Problem:
Write a program to fill array with max size 100 
with random numbers form 1 to 100, copy it to another array and print it.
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

void PrintArray(int arr[100], int arrLength) 
{
    for (int i = 0; i < arrLength; i++)
    {
        cout <<arr[i]<<" ";
    }
    cout << endl;
}

void SumOfArray1AndArray2Elements(int arr1[100],int arr2[100],int arrSum[100],int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i] = arr1[i] + arr2[i];   
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once.
    srand((unsigned)time(NULL));
    
    int arr1[100], arr2[100], arrSum[100];
    int arrLength = ReadPositiveNumber("How many elements: ");
    
    FillArrayWithRandomNumbers(arr1, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);

    SumOfArray1AndArray2Elements(arr1, arr2, arrSum, arrLength);    

    cout << "Array 1 Elements: ";
    PrintArray(arr1, arrLength);
    
    cout << "Array 2 Elements: ";
    PrintArray(arr2, arrLength);

    cout << "Sum Of Array1 And Array2 Elements: ";  
    PrintArray(arrSum, arrLength);
    return 0;
}