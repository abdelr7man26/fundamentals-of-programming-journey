#include <iostream>
using namespace std;
double money (double salary , int   days )
{
    int   weeks = days / 7;
    double  holidays = weeks * 2;
    double total = salary / (days - holidays);
    return total;
}
int main ()
{
    double salary;
    double  days;
    cout << "Enter your salary: ";
    cin >> salary;
    cout << "Enter the number of days you wanna go out in : ";
    cin >> days;
    
    double totalMoney = money(salary, days);
    cout << "spend per day : " << totalMoney << endl;
    
    return 0;
}