#include <iostream>

using namespace std;

int main()
{
    int days = 0, hours = 0, minutes = 0, seconds = 0;

    cout << "Enter the days : ";
    cin >> days;
    cout << "Enter the hours : ";
    cin >> hours;
    cout << "Enter the minutes : ";
    cin >> minutes;
    cout << "Enter teh seconds : ";
    cin >> seconds;
    int totalseconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
    cout << "theh total seconds id :" << totalseconds<<endl;
    int daysv = totalseconds / 60 / 60 / 24;
    int remainingseconds = totalseconds - (daysv * 24 * 60 * 60);
    int hoursv = remainingseconds / 60 / 60;
    remainingseconds = remainingseconds - (hoursv * 60 * 60);
    int minutesv = remainingseconds / 60;
    remainingseconds = remainingseconds - (minutes * 60);
    cout << "days : " << daysv << endl << "hours : " << hoursv << endl << "minutes : " << minutesv << endl << "seconds : " << remainingseconds;



    return 0;

}

