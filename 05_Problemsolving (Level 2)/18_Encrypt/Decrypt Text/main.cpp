/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string> 
using namespace std;

string ReadText()
{
    string Text = "";
    
    cout << "Enter Your Text: "<< endl;
    getline(cin, Text);
    
    return Text;
}

string EncryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    
    return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    
    return Text;
}
int main()
{
    const short EncryptionKey = 2;
   
    string Text = ReadText();
    string TextAfterEncryption = EncryptText(Text, EncryptionKey);
    string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);
    
    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption : "<< TextAfterEncryption << endl;
    cout << "Text After Decryption : " << TextAfterDecryption << endl;
    return 0;
}