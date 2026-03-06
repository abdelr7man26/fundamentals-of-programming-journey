#include <iostream>

using namespace std;

enum enDays 
{ SATURDAY = 1, SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

void DaysMenu() {
    cout << "************choose a day************\n";
	cout << "\t1.saturday\n";
	cout << "\t2.sunday\n";
	cout << "\t3.monday\n";
	cout << "\t4.tuesday\n";
	cout << "\t5.wednesday\n";
	cout << "\t6.thursday\n";
	cout << "\t7.friday" << endl;
}

enDays ReadDay() {
	int day;
	enDays eDay;
	cout << "enter a day number: ";
	cin >> day;
	cin.ignore();
	eDay = (enDays)day;
	return eDay;
}

void PrintDay(enDays eDay) {
	switch (eDay) {
	case enDays::SATURDAY:
		cout << "saturday\n";
		break;
	case enDays:: SUNDAY:
		cout << "sunday\n";
		break;
	case enDays::MONDAY:
		cout << "monday\n";
		break;
	case enDays::TUESDAY:
		cout << "tuesday\n";
		break;
	case enDays::WEDNESDAY:
		cout << "wednesday\n";
		break;
	case enDays::THURSDAY:
		cout << "thursday\n";
		break;
	case enDays::FRIDAY:
		cout << "friday\n";
		break;
	default:
		cout << "invalid day number\n";
		break;
	}
}
int main()
{
	DaysMenu();
	PrintDay(ReadDay());
	return 0;
}

