#include <iostream>

using namespace std;


int main()
{
	float pennis, nickel, dime, quarter, dollars;

	cout << "Enter pennis : ";
	cin >> pennis;

	cout << "Enter nickel : ";
	cin >> nickel;

	cout << "Enter dime : ";
	cin >> dime;

	cout << "Enter quarter : ";
	cin >> quarter;

	cout << "Enter dollars : ";
	cin >> dollars;

	double totalpennis = pennis + (nickel * 5) + (dime * 10) + (quarter * 25) + (dollars * 100);
	double totaldollars = totalpennis / 100;

	cout << "pennis : " << totalpennis << " dollars : " << totaldollars;
	return 0;
  
}

