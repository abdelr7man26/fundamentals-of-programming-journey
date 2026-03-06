#include <iostream>
using namespace std;

enum enleap{leap , notleap};
enleap check_leap_or_not(const int& year) {
    if (year % 100 != 0 && year % 4 == 0) {
        return leap;
    }
    else if (year % 100 == 0 && year % 400 == 0) {
        return leap;
    }
    else return notleap;
}
int main()
{
    switch (check_leap_or_not(2006)) {
    case leap:
        cout << "leap";
        break;
    case notleap:
        cout << "not leap";
        break;
    }
}
