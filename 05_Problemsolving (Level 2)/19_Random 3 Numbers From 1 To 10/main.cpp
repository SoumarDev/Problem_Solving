/******************************************************************************
/******************************************************************************
Stell dir vor, du möchtest eine Zufallszahl zwischen 20 und 50 haben.

1. Zuerst wird berechnet, wie viele Zahlen es in diesem Bereich gibt.

   Von 20 bis 50 sind es:
   31 Zahlen.

2. Dann wird eine große Zufallszahl erzeugt.

3. Diese große Zufallszahl wird auf einen Bereich von 0 bis 30 reduziert.
   
   Warum 0 bis 30?
   
   Weil das genau 31 verschiedene Werte sind:
   0, 1, 2, ..., 30

4. Jetzt liegen die Zahlen noch nicht im gewünschten Bereich.
   
   Deshalb wird 20 hinzugefügt.

   Dadurch wird:
   
   0  → 20
   1  → 21
   2  → 22
   ...
   30 → 50

5. Das Endergebnis ist eine Zufallszahl zwischen 20 und 50.

Merksatz:

Erst wird die Zufallszahl auf die richtige Anzahl möglicher Werte begrenzt.
Danach wird sie auf den gewünschten Startwert verschoben.

Deshalb kann die Funktion für jeden Bereich verwendet werden:

1 bis 10
20 bis 50
100 bis 105
usw.

Die kleinste Zahl ist immer der erste Parameter,
die größte Zahl immer der zweite Parameter.

*******************************************************************************/
#include <iostream>
#include <cstdlib>


int RandomNumber(int From, int To)
{
    // Function to genrate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
using namespace std;

int main()
{
    // Seeds the random number genrator in C++, called only once
    srand((unsigned)time(NULL));
    
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    
    cout << RandomNumber(20, 50) << endl;
    cout << RandomNumber(20, 50) << endl;
    cout << RandomNumber(20, 50)<< endl;
    
    

    return 0;
}