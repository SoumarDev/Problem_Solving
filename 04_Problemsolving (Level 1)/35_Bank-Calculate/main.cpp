/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


struct stPiggyBankContent 
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;

    cout << "Please enter Pennies: " << endl;
    cin >> PiggyBankContent.Pennies;
    
    cout << "Please enter Nickels: " << endl;
    cin >> PiggyBankContent.Nickels;
    
    cout << "Please enter Dimes: " << endl;
    cin >> PiggyBankContent.Dimes;
    
    cout << "Please enter Quarter: " << endl;
    cin >> PiggyBankContent.Quarters;
    
    cout << "Please enter Dollars: " << endl;
    cin >> PiggyBankContent.Dollars;
    
    return PiggyBankContent;
    
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    int TottalPennies = 0;
    
    TottalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 + 
                    PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 +
                    PiggyBankContent.Dollars * 100;
                
    return TottalPennies;
}

int main()
{
    /*
    Penny = 1
    Nickel= 5
    Dime = 10 
    Quarter = 25 
    Dollar = 100 
        */
        
        
    int TottalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    cout << endl << "Total Pennies = " << TottalPennies << endl;
    cout << endl << "Total Dollars = " << (float)TottalPennies / 100 << endl;
 
    
    return 0;
}