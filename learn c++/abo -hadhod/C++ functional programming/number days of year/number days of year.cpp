#include <iostream>
#include <iomanip>
#include <ctime>   
#include <string>

using namespace std;
struct stDATE {
    int year =0;
    int month=0;
    int day=0;
};

void get_current_date(int& current_year, int& current_month, int& current_day) {
    time_t t = time(nullptr);
    tm now_tm;

#if defined(_WIN32) || defined(_WIN64)
    localtime_s(&now_tm, &t);
#else
    
    localtime_r(&t, &now_tm);
#endif

    current_year = now_tm.tm_year + 1900;
    current_month = now_tm.tm_mon + 1;
    current_day = now_tm.tm_mday;
}

bool is_leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int number_of_days_in_month(int year, int month) {
    if (month < 1 || month > 12) return 0;

    static const int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2 && is_leap(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

int number_of_days_in_year(int year) {
    return is_leap(year) ? 366 : 365;
}

long long number_of_hours(int days) {
    return days * 24;
}
long long number_of_minutes(long long hours) {
    return hours * 60;
}
long long number_of_seconds(long long minutes) {
    return minutes * 60;
}

int Day_order(int year, int month, int day) {
    int a = (14 - month) / 12;
    int y = year - a;
    int m = month + (12 * a) - 2;
    int d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    return d;
}

string Day_name(int index) {
    static const string days[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return days[index];
}

string month_name(int month_idx) {
    static const string months[] = {
        "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE",
        "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"
    };
    return months[month_idx - 1];
}

long count_total_days_from_start(int year, int month, int day) {
    long total_days = day;

    for (int i = 1; i < month; i++) {
        total_days += number_of_days_in_month(year, i);
    }

    year -= 1;
    total_days += (year * 365L) + (year / 4) - (year / 100) + (year / 400);

    return total_days;
}

int number_of_days_from_specific_date_until_now(int year, int month, int day) {
    int current_year ,current_month ,current_day;
    get_current_date(current_year, current_month, current_day);

    long input_date_days = count_total_days_from_start(year, month, day);
    long current_date_days = count_total_days_from_start(current_year, current_month, current_day);

    return current_date_days - input_date_days;
}

int days_from_the_begining_of_the_year(int year, int month, int day) {
    int sum = 0;
    for (int i = 1; i < month; ++i) {
        sum += number_of_days_in_month(year, i);
    }
    return sum + day;
}

stDATE get_the_date_from_knowing_the_number_of_days_from_the_begining_of_the_year(int days ,int year) {
    stDATE date;
    int month_days = 0;
    int remaining = days;
    date.month = 1;
    date.year = year;
    while (true) {  
       month_days= number_of_days_in_month(date.year,date.month);
       if (remaining > month_days) {
           date.month++;
           remaining -= month_days;
       }
       else {
           date.day = remaining;
           break;
       }
    }
    return date;
}

stDATE add_days_to_a_date(int added_days, int year , int month , int day) {
    stDATE date;
    int remaining_days = added_days + days_from_the_begining_of_the_year(year, month, day);
    date.year = year;
    date.month = 1;
    while (true) {
        int year_days = number_of_days_in_year(year);
        if (remaining_days > year_days) {
            date.year++;
            remaining_days -= year_days;
        }
        else {

            int month_days = number_of_days_in_month(year, date.month);
            if (remaining_days > month_days) {
                remaining_days -= month_days;
                date.month++;
            }
            else {
                date.day = remaining_days;
                break;
            }

        }

    }

    return date;
}

bool isbefore(stDATE date1, stDATE date2) {

    return (date1.year < date2.year) ? true : ((date1.year == date2.year) ? (date1.month < date2.month) ? true : ((date1.month == date2.month) ? date1.day < date2.day : false) : false);
}

bool is_last_day_in_the_month(int year, int month, int day) {
    return (day == number_of_days_in_month(year, month)) ? true : false;
}
bool is_last_month_in_the_year(int year, int month, int day) {
    return (month == 12) ? true : false;
}

stDATE increase_date_by_one(stDATE date) {

    if (is_last_day_in_the_month(date.year, date.month, date.day)) {
        date.day = 1;
        if (is_last_month_in_the_year(date.year, date.month, date.day)) {
            date.month = 1;
            date.year++;
        }
        else
        {
            date.month++;
        }
    }
    else {
        date.day++;
    }
    return date;
}

bool is_end_of_week(int year, int month, int day) {
   int order = Day_order(year, month, day);
   return (order == 5);
}
bool is_weekend(int year, int month, int day) {
    int order = Day_order(year, month, day);
    return (order == 4 || order == 5);
}
bool is_business_day(int year, int month, int day) {
    return (!is_weekend);
}

int days_untill_the_end_of_the_week(stDATE date) {
    int days = 0;
    while (!is_end_of_week(date.year, date.month, date.day)) {
        days++;
        date = increase_date_by_one(date);
    }
    return days;
}
int days_untill_the_end_of_the_week_faster(stDATE date) {
    return 6 - Day_order(date.year, date.month, date.day);
}

int days_of_vacation(stDATE startdate, stDATE enddate) {
    int dayscounter = 0;
    while (isbefore(startdate, enddate)) {
        if (is_business_day(startdate.year, startdate.month, startdate.day)) {
            dayscounter++;
            startdate =increase_date_by_one(startdate);
        }
    }
    return dayscounter;
}
stDATE return_date(stDATE startdate, int vacationdays) {
    
    int counter =0 ;
    while (is_weekend(startdate.year,startdate.month,startdate.day))
    {
        startdate = increase_date_by_one(startdate);
    }
    for (int i = 0; i < vacationdays+counter; ++i) {
        if (is_business_day(startdate.year, startdate.month, startdate.day)) {
            startdate = increase_date_by_one(startdate);
        }
        else counter++;
    }
    return startdate;
}

void calender(int year, int month) {
    cout << "\n" << setw(35) << setfill('-') << "" << endl;
    cout << setfill(' '); 
    cout << setw(10) << "" << month_name(month) << " " << year << endl;
    cout << setw(35) << setfill('-') << "" << endl;
    cout << setfill(' ');

    cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;

    int order = Day_order(year, month, 1);

    for (int i = 0; i < order; ++i) {
        cout << "     ";
    }

    int days_in_month = number_of_days_in_month(year, month);
    for (int j = 1; j <= days_in_month; ++j) {
        cout << setw(5) << j;

        if ((j + order) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl << endl;
}

void Run() {
    int year, month, day, added;

    cout << "Enter Year: ";
    cin >> year;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter How many days you want to add: ";
    cin >> added;

    cout << "\n---------------- DAY ORDER IN THE YEAR ----------------\n";
    int order = days_from_the_begining_of_the_year(year, month, day);
    cout << "number of days from the begining of the year until " <<day <<"/" <<month <<"/" <<year <<" : " << order;

    cout << "\n\n---------------- CALENDAR ----------------\n";
    calender(year, month);

    cout << "\n---------------- DIFFERENCE ----------------\n";
    int diff = number_of_days_from_specific_date_until_now(year, month, day);
    cout << "Days passed since " << day << "/" << month << "/" << year << " until NOW: "
        << diff << " days." << endl;

    cout << "\n---------------- DATE BY ORDER IN THE YEAR ----------------\n";
    stDATE date;
    date = get_the_date_from_knowing_the_number_of_days_from_the_begining_of_the_year(order,year);
    cout << "date for day order { " << order << " } is : " << date.day << "/" << date.month << "/" << date.year;
    
    cout << "\n---------------- DATE AFTER ADD SOME DAYS ----------------\n";
    stDATE date2;

    date2 = add_days_to_a_date(added,year, month, day);
    cout << "date after adding { " << added << " } days : " << date2.day << "/" << date2.month << "/" << date2.year;

}

int main() {
   // Run();
    stDATE date;
    date.year = 2025;
    date.month = 12;
    date.day = 14;
   cout << days_untill_the_end_of_the_week_faster(date);
    return 0;
}