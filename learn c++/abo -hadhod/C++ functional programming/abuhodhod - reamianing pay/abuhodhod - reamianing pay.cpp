#include <iostream>

using namespace std;

int main()
{
	float paid = 0.0, bill = 0.0;
	cout << "Enter the total bill : ";
	cin >> bill;
	cout << "Enter the paid amount : ";
	cin >> paid;
	double remian = paid - bill;
	cout << "The reamaining amount is : " << remian;


	return 0;
}

