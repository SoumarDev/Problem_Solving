/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN conde: \n";
    cin >> PinCode;
    
    return PinCode;
}

bool Login()
{
    string PinCode;
    int counter = 3;
    do
    {
        counter--;
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return true;
        }
        else 
        {
            system("color 4F"); // red
            if (counter == 0)
            {
                return 0;// an der Stelle ist das Folgende Massege nicht nötig.
            }
            cout << "\nWrong PIN, you have " << counter << " more tries.\n";
        }
        
    } while(counter >= 1 && PinCode != "1234");
    
    return 0; 
}
int main()
{
    if (Login())
    {
        cout <<"Your Balance is = 7500$";   
    }
    else 
    {
        cout << "Your Card is blocked, Please call your Bank.";
    }
    return 0;
}