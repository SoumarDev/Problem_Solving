/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

void PrintWordsFromAAAtoZZZ()
{
    cout << "\n";
    string word = "";
    
    for(int i =  65; i <= 90; i++)
    {
        for(int j = 65; j <= 90; j++) 
        {
            for(int k = 65; k <= 90; k++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                
                cout << word << endl;
                
                word = "";
            }
        }
        cout << "\n-----------------------\n";
    }
}
    

int main()
{
    PrintWordsFromAAAtoZZZ();

    return 0;
}