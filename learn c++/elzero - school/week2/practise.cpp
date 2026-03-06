#include<iostream>
using namespace std;
int main()
{
    cout << "Calculate Your Age Application" <<endl ;
    cout << "==============================" <<endl ;
    int age ;
    cout << "Enter your age : ";
    cin >> age ;
    int age_in_months = age * 12 ;
    int age_in_days = age * 365 ;
    int age_in_hours = age_in_days * 24 ;
    int age_in_minutes = age_in_hours * 60 ;
    int age_in_seconds = age_in_minutes * 60 ;
    
    cout << "your age in months is : " << age_in_months << endl;
    cout  << "your age in days is : " << age_in_days << endl;
    cout  << "your age in hours is : " << age_in_hours << endl;
    cout  << "your age in minutes is : " << age_in_minutes << endl;
    cout  << "your age in seconds is : " << age_in_seconds;


    return 0;
}