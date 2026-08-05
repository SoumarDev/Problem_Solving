#include <iostream>
using namespace std;

int ReadNumber()
{
    int N;
    
    cout <<"Please enter number: " << endl;
    cin >> N;
    
    return N;
}

void PrintRangeFromNto1_UsingWhile(int N)
{
    int counter = N + 1;
    
    cout << "Range printed using While Statement:\n";
    
    while(counter > 1)
    {
        counter--;
        cout << counter << endl;
    }
}
void PrintRangeFromNto1_UsingDoWhile(int N)
{
    int counter = N + 1; 
    
    cout << "Range printed using Do While Statement:\n";
    do
    {
        counter--;
        cout << counter << endl;
        
    }while(counter > 1);
}
void PrintRangeFromNto1_UsingFor(int N)
{
    
    cout << "Range printed using for Statement:\n";
    for (int counter = N; counter >= 1; counter--)
    {
        cout << counter << endl; 
    }
}

int main()
{
    int N = ReadNumber();
    
    PrintRangeFromNto1_UsingWhile(N);
    PrintRangeFromNto1_UsingDoWhile(N);
    PrintRangeFromNto1_UsingFor(N);
    return 0;
}