/*********************
Problem:
Write a program to read how many keys t generate and fill them in array
then print them on the screen.
**********************/
#include <iostream>
#include <cstdlib>

using namespace std; 

int RandomNumber(int From, int To)
{
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};

char GetRandomCharacter(enCharType CharType) 
{
    switch(CharType)
    {
        
        case enCharType::SmallLetter:
             return char(RandomNumber(97, 122));
             break;
        case enCharType::CapitalLetter:
             return char(RandomNumber(65, 90));
             break;
        case enCharType::SpecialCharacter:
             return char(RandomNumber(33, 47));
             break;
        case enCharType::Digit:
             return char(RandomNumber(48, 57));
             break;
    }
    // if an invalid type is passed return a null character
    return '\0';
}

int ReadPositiveNumber (string Message)
{
    int Number = 0;
    
    do 
    {
        cout << Message; 
        cin >> Number;
    } while(Number <= 0);
    
    return Number;
}

string GenerateWord(enCharType CharType, short Length) 
{
    string Word;
    
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);   
    }
    return Word;
}

string GenerateKey() 
{
    string Key = "";
    
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    
    return Key;
}

void FillArrayWithKeys(string arr[100], int& arrLength) 
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = GenerateKey();
    }
}

void PrintStringArray(string arr[100], int arrLength) 
{
    cout << "Array Elements: ";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "\nKey[" << i << "]: ";
        cout << arr[i];
    }
}


int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    
    string arr[100];
    int arrLength = 0;
    
    arrLength = ReadPositiveNumber("Please enter how many keys to generate: \n");
    
    FillArrayWithKeys(arr,arrLength);
    
    PrintStringArray(arr, arrLength);
    return 0;
}