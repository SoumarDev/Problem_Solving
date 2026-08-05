/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

enum enPassFail { Pass= 1, Fail = 2 };

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter number 1: " << endl;
    cin >> Mark1;
    
    cout << "Please enter number 2: " << endl;
    cin >> Mark2;
    
    cout << "Please enter number 3: " << endl;
    cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(int Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(int Average)
{
    cout << "\nYour Average is : " << Average<< endl;
    
    if (CheckAverage(Average) == enPassFail::Pass)
        cout <<"\n You Passed " << endl;
    else        
        cout <<"\n You Faild " << endl;
        
}
int main()
{
    int Mark1, Mark2, Mark3;
    
    ReadMarks(Mark1, Mark2, Mark3);
    PrintResults(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}