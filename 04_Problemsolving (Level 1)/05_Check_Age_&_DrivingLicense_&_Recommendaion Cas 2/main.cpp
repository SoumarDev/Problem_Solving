/******************************************************************************
Write a Progaram to ask the user to enter his/her 
- Age
- Driver License 
- Has recommendation

Then Print "Hired" if his/her age is grater than 21 and s/he 
has a dirver licens, otherwise Print "Rejected"
*******************************************************************************/
#include <iostream>
using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;
    
    cout <<"Please enter your age: " << endl;
    cin >> Info.Age;
    
    cout <<"Do you have driver license(1=True/ 0=False): " << endl;
    cin >> Info.HasDrivingLicense;
    
    cout <<"Do you have recommendation(1=True/ 0=False): " << endl;
    cin >> Info.HasRecommendation;
    
    return Info;
}

bool IsAccepted(stInfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (Info.Age > 21 && Info.HasDrivingLicense);
    }
    
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