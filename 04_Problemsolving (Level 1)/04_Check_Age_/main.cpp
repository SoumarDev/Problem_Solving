/******************************************************************************


*******************************************************************************/
#include <iostream>
using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo()
{
    stInfo Info;
    
    cout <<"Please enter your age: " << endl;
    cin >> Info.Age;
    
    cout <<"Do you have a driver license(1=True/ 0=False): " << endl;
    cin >> Info.HasDrivingLicense;
    
    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "Hirde.\n";
    else
        cout << "Rejected.\n";
}

int main()
{
    PrintResult(ReadInfo());

    return 0;
}