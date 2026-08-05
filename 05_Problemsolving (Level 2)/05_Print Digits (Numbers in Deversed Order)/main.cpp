/******************************************************************************

*******************************************************************************/
#include <iostream>
using namespace std;


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

void PrintDigits(int Number)
{
    int Remainder = 0;
    
    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int main()
{
    PrintDigits(ReadPositiveNumber("Enter a positive Number: "));
    
    return 0;
}
/*

void ReadPositiveNumber(string Message, int Number[])
{
    for (int i = 0; i < 4; i++)
    {
        cout << Message;
        cin >> Number[i];
    }
    
}
 
void PrintNumber(int Number[], int len) 
{
   
    for(int i = len - 1; i >= 0; i--)
    {
        cout << Number[i] << endl;
    }
}
int main()
{
    int Arr[4];
    
    int ArrayLength = sizeof(Arr) / sizeof(Arr[0]);
    ReadPositiveNumber("Enter a Number: ", Arr);
    PrintNumber(Arr, ArrayLength);//(ReadPositiveNumber("Enter Number: "));

    return 0;
}
*/