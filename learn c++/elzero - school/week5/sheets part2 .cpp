#include <iostream>
using namespace std;
int main()
{
    //     // sheet 1
    //     int year;
    //     cout << " enter a year ";
    //     cin >> year;
    //     switch (year)
    //     {
    //     case 1982:
    //         cout << "My Birth Day";
    //         break;
    //     case 1989:
    //         cout << "My First Work";
    //         break;
    //     case 1995:
    //         cout << "Windows 95";
    //         break;
    //     case 2000:
    //         cout << "Windows Millennium";
    //         break;
    //     case 2003:
    //         cout << "Created My vBulletin Forum";
    //         break;
    //     default:
    //         cout << " no events in this year ";
    //     }
    ///////////////////////////////////////////////////////////////////////////////
    // sheet2

    // int day;
    // cin >> day;

    // switch (day)
    // {
    // case 1:
    // case 2:
    // case 3:
    //     cout << "Shop Is Open";
    //     break;
    // case 4:
    // case 5:
    //     cout << "Shop Is Closed";
    //     break;
    // default:
    //     cout << "Day Is Not Valid";
    // }
    //////////////////////////////////////////////////////////////////////////////////////////
    // sheet 3
    int num;
    cin >> num;

    switch (num)
    {
    case 10:
        cout << "Case 1";
        break;
    case 20:
        cout << "Case 2";
        break;
    case 30:
    case 31:
    case 32:
        cout << "Case 3";
        break;
    default:
        cout << "Invalid Number";
    }

    return 0;
}