/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;


// Meine Eigene Lösung: 

string ReadPassowrd(string Massege)
{
    string Password = ""; 
    
    do
    {
        cout << Massege;
        cin >> Password;
        
    } while (Password == "");
    
    return Password;
}

void GuessPassword(string Password)
{
    string word = "";
    int counter = 0;
    bool found = false;
    
    for(int i = 65; i <= 90; i++)
    {
        for(int j = 65; j <= 90; j++)
        {
            for(int k = 65; k <= 90; k++)
            {
                word = "";
                
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                
                counter++;
                
                cout <<"Trial[" << counter << "]: " << word << endl;
                
                if (word == Password)
                {
                    cout << "\nPassword is " << word << endl;
                    cout << "Found after "<< counter <<" Trial(s)";
                    found = true;
            
                    break;
                }
                
            }
            if(found) break;
        }
        if(found) break;
    }
}


/// 
// Lösung von Abu Hadoud

// string ReadPassowrd()
// {
//     string Password = ""; 
    
//     cout << "Please enter a 3-Letter Password (all capital)?\n";
//     cin >> Password;
        
//     return Password;
// }



// bool GuessPassword(string OriginalPassword)
// {
//     string word = "";
//     int Counter = 0;
    
//     for(int i = 65; i <= 90; i++)
//     {
//         for(int j = 65; j <= 90; j++)
//         {
//             for(int k = 65; k <= 90; k++)
//             {
//                 Counter++;
                
//                 word = word + char(i);
//                 word = word + char(j);
//                 word = word + char(k);
                
//                 cout <<"Trial[" << Counter << "]: " << word << endl;
                
//                 if (word == OriginalPassword)
//                 {
//                     cout << "\nPassword is " << word << endl;
//                     cout << "Found after "<< Counter <<" Trial(s)";
            
//                     return true;
//                 }
//                 word = "";                
//             }
//         }
//     }
//     return false;
// }



int main()
{
    GuessPassword(ReadPassowrd("Enter a 3-Letter Password (all capital): "));
  //  GuessPassword(ReadPassowrd());


    return 0;
}