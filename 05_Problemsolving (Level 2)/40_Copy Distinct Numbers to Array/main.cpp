/******************************************************************************
Problem:

Write a program to fill  array with numbers, then print distinct
numbers to antother array.

*******************************************************************************/
#include <iostream>
using namespace std;


void FillArray(int arr[100], int& arrLength)
{
    arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
    
}

void PrintArray(int arr[100], int arrLength) 
{
    for (int i = 0; i < arrLength; i++)
    {
        cout <<arr[i]<<" ";
    }
    cout << endl;
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
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

bool IsNumberInArray(int Number, int arr[100], int arrLength )
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    
    arr[arrLength - 1] = Number;
}

void CopyDistictNumbersToArray(int arrSource[100], int arrDistination[100], int SourceLenth, int &DistinationLength)
{
    for (int i = 0; i < SourceLenth; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDistination, DistinationLength))
        {
            AddArrayElement(arrSource[i], arrDistination, DistinationLength);
        }
    };
}
int main()
{
    int arrSource[100], SourceLength = 0, arrDistination[100], DistinationLength = 0;
    FillArray(arrSource, SourceLength);
    
    cout << "\nArray 1 elements: \n";
    PrintArray(arrSource, SourceLength);
    
    CopyDistictNumbersToArray(arrSource, arrDistination, SourceLength, DistinationLength);
    
    cout << "\nArray 2 distinct elements: \n";
    PrintArray(arrDistination, DistinationLength);

    return 0;
}