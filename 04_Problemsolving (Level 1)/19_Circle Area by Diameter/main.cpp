/******************************************************************************


*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

float ReadDiameter()
{
    float D;
    
    cout << "Please enter diameter D: " << endl;
    cin >> D;
    
    return D;
}

float CircleAreaByDiameter(float D)
{
    
    float area = (M_PI * pow(D, 2)) / 4;
    
    return area;
}

void PrintResult(float area)
{
    cout << "\nCircle Area = " << area << endl;
}
int main()
{
    
    PrintResult(CircleAreaByDiameter(ReadDiameter()));

    return 0;
}